#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 17:11 2016

@author: daphnehb

Classes nécessaires au bon fonctionnement du programme
"""

import nettoyage as nett
from translation import texte_usable
import wordCounter as cnter
import words_synonym as syn
import tools
import remove_stopWords as rem
import simplify_words as simp
from enum import Enum


class Themes(Enum):
    values_unies = ["COMMERCE",
                    "CULTURE",
                    "EDUCATION",
                    "ENERGIE",
                    "ENVIRONNEMENT",
                    "INDUSTRIE",
                    "INNOVATION",
                    "NOUVEAUTE",
                    "R&D",
                    "SECURITE",
                    "SANTE"]
    values_doubles = ["AFFAIRES SOCIALES",
                    "DEVELOPPEMENT DURABLE",
                    "DEVELOPPEMENT ECONOMIQUE",
                    "MESURES PME"]
    values = set(values_doubles+values_unies)

    class __metaclass__(type):
        def __getattr__(self, name):
            return self.values.index(name)

    @staticmethod
    def name_of(i):
        return Themes.values[i]

    @staticmethod
    def is_theme(nom):
        nom = nett.decodage(nom).upper()
        import re
        if not re.search(r'r\s?&\s?d',nom,flags=re.IGNORECASE) is None:
            return "R&D"
        return texte_usable(nom) if nom in Themes.values else False

    @staticmethod
    def get_all():
        return Themes.values

    @staticmethod
    def get_double():
        return Themes.values_doubles

    @staticmethod
    def all_in_english():
        vengl = list()
        for theme in Themes.values:
            # on decode le texte
            theme = nett.decodage(theme)
            vengl.append(texte_usable(theme))
        return vengl

    @staticmethod
    def theme_in_english(theme):
        # on decode le texte
        theme = nett.decodage(theme).upper()

        if theme not in Themes.values :
            return None
        # on decode le texte
        theme = nett.decodage(theme)
        return texte_usable(theme)

    @staticmethod
    def special_cases(mot):
        if mot == 'r&d':
            return ['research', 'development']
        if mot == 'research' or mot == 'development':
            return ['r&d']
        return []

    @staticmethod
    def all_racines():
        """
        Renvoie associée à chaque theme la liste de la racinisation de ce theme
        Pour les themes en plusieurs mots, la racinisation individuelle de chacun des mots
        Renvoie research et development pour R&D
        :return:
        """
        # themes simples
        rac_thm = Themes.get_racines()
        # themes doubles
        for value in Themes.values_doubles :
            value = Themes.theme_in_english(value)
            for word in value.split() :
                rac_thm[value].append(simp.stemmization(word.lower()))
        # on ajoute aussi une référence au cas spécial qu'est r&d
        rac_thm["R&D"].extend(Themes.special_cases("r&d"))
        return rac_thm

    @staticmethod
    def get_racines():
        """
        Renvoie associée à chaque theme la liste de la racinisation de ce theme
        Sans différenciation entre les thèmes à termes simples et ceux composés
        Renvoie research et development pour R&D
        :return:
        """
        themes_possibles = dict()
        # pour chaque theme possible
        for theme in Themes.all_in_english():
            # on récupère son stem
            th_stem = simp.stemmization(theme).lower()
            themes_possibles[theme] = [th_stem]
        # on ajoute aussi une référence au cas spécial qu'est r&d
        themes_possibles["R&D"].extend(Themes.special_cases("r&d"))
        return themes_possibles


class Fiche:
    def __init__(self):
        pass


class Description:
    def __init__(self, contenu):
        """
        Everything's in english
        :param contenu:
        """
        # les themes associés à la description
        self.themes = None
        # les tags que l'ont trouve directement dans la description
        self.major_tags = None
        # les major_tag et leurs synonymes directs
        self.minor_tags = None
        self.texte_formatte = contenu
        # on crée la variable self.texte_propre et on l'initialise
        self.nettoyage()
        # on récupere le nombre de mots contenus dans le  texte
        self.nb_mots = len(self.texte_propre.split())
        # TODO à remove
        print "Texte en anglais et simplifie (%s mots)" % self.nb_mots
        #print self.texte_propre
        # on crée la variable self.texte_simplifie et self.liste_mots et on les initialise
        self.simplification()
        # on garde une liste des mots existants dans la description et simplifié -lemme (jamais à None)
        self.liste_mots = set(self.texte_simplifie)
        # on crée la variable self.classement_mot
        self.classement_mot = None
        # on crée la variable self.most_common
        self.most_common = None
        # on crée la variable self.synonyms
        self.synonyms = None

    def __str__(self):
        string = "*************************\n===> DESCRIPTION : %s" % self.texte_formatte
        string+= "\n\tTHÈMES : {}".format(self.themes)
        string+= "\n\tTAGS : {}".format(self.major_tags)
        string+= "\n\tAUTRES TAGS : {}".format(self.minor_tags)
        string += "\n\tMOTS UTILISÉS : {}\n".format(self.liste_mots)
        return string

    def get_themes(self):
        if self.themes is None:
            self.determin_themes()
        return self.themes

    def get_maj_tags(self):
        if self.major_tags is None:
            self.most_common_words()
        return self.major_tags

    def get_min_tags(self):
        if self.minor_tags is None:
            self.determin_tags()
        return self.minor_tags

    def set_themes(self,themes):
        nthemes = list()
        for th in themes :
            thm = Themes.is_theme(th)
            if thm :
                nthemes.append(thm)
        self.themes = nthemes

    def add_theme(self,theme):
        thm = Themes.is_theme(theme)
        if thm :
            self.themes.append(thm)

    def set_maj_tags(self, maj_tags):
        nmaj_tag = list()
        for tag in maj_tags:
            nmaj_tag.append(texte_usable(nett.decodage(tag)))
        self.major_tags = nmaj_tag

    def add_tag(self,tag):
        if self.major_tags is None:
            self.major_tags = list()
        if self.minor_tags is None:
            self.minor_tags = list()
        tag = nett.decodage(tag).lower()
        tag = texte_usable(tag)
        self.major_tags.append(tag)
        self.minor_tags.append(tag)

    def set_min_tags(self,min_tags):
        nmin_tag = list()
        for tag in min_tags:
            nmin_tag.append(texte_usable(nett.decodage(tag)))
        self.minor_tags = nmin_tag

    def __contains__(self, item):
        """
        Renvoie True si la description contient le mot item (lemme)
        :param item:
        :return:
        """
        return item.lower() in self.liste_mots

    def nettoyage(self):
        """
        On nettoie le texte de tout html et ponctuation  et on le traduit en anglais
        :return: un texte (string)
        """
        if self.texte_formatte is None:
            self.texte_formatte = ""
            self.texte_propre = ""
            return ""
        # on supprime le html et ne récupère que le texte
        sans_html = nett.htmlToTxt(self.texte_formatte)
        # on met le texte en encodage unicode et supprime les accents
        decoded = nett.decodage(sans_html)
        # On traduit le texte obtenu en anglais
        # TODO corriger la correction
        traduit = texte_usable(decoded).lower()
        self.texte_propre = nett.suppFioriture(traduit)

        return self.texte_propre

    def simplification(self):
        """
        Simplification du texte de telle sorte à retirer les articles ...
        Et à canoniser les mots
        A partir de là , tout est en lowerCase
        :return: liste des mots du texte (non unifies)
        """
        if self.texte_propre is None:
            self.nettoyage()
        # on récupere la forme canonique des mots
        description_simp = simp.txt_lemmas(self.texte_propre.lower())
        # On supprime les mots inutiles tels que les préposition
        plain_words = rem.supp_mots_vides(description_simp)
        self.texte_simplifie = plain_words
        return plain_words

    def analyse_texte(self):
        """
        On analyse syntaxiquement et linguistiquement les mots dans le texte de la description
        Récupération de sfréquences
        :return:
        """
        if self.texte_simplifie is None:
            self.simplification()
        # on compte les frequences des mots
        count_words = cnter.compte_occur_mots(self.texte_simplifie, _type_='list')
        # on trie les mots du + frequent au moins frequent
        sorted_words = tools.dico_to_sorted_list(count_words)
        self.classement_mot = sorted_words
        return sorted_words

    def most_common_words(self, nb=10):
        """
        Renvoie le nb mots les plus fréquents de la description
        :param nb:
        :return:
        """
        if self.classement_mot is None:
            self.analyse_texte()

        #print "======> NOMBRE DE MOTS CONSERVES %s" % len(self.classement_mot)
        # TODO déterminer nb par défaut (un pourcentage du nombre de mot dans le texte?)
        nb = self.nb_mots / 10
        self.most_common = tools.get_firsts(self.classement_mot, 50)
        self.major_tags = map(lambda x: x[0], self.most_common)
        return self.most_common

    def get_synonyms(self, list):
        """
        Renvoie le dictionnaire des synonymes des mots de la liste
        :param list:
        :return:
        """
        return syn.text_synonyms(list)

    def det_synonyms(self, liste=None, firsts=True):
        """
        Renvoie le dictionnaire des synonymes des mots utiles dans la description
        :param liste: potentiel liste forcé d'utiliser, prime sur tout
        :param firsts: si on veut uniquement les plus frequents de la description (pas de la listeà
        :return: dictionnaire associant à chaque mot une liste de synonymes
        """
        # Si une liste a été fournie, on la considère
        if not liste is None:
            # ATTENTION : ne peut être que un dictionnaire
            # une liste de mot ou un liste de tuples
            liste_mots = liste
        elif firsts:
            # ATTENTION : renvoie une liste de tuples
            liste_mots = self.most_common_words()
        else:
            # ATTENTION : renvoie une liste de tuples
            liste_mots = self.analyse_texte()
        # on récupère les synonymes pour chaque mots de la liste
        dico_syns = self.get_synonyms(liste_mots)
        self.synonyms = dico_syns
        return dico_syns

    def determin_tags(self):
        """
        Récupère tous les tags et synonymes directs d'une description
        :param liste:
        :return: liste des tags directs et leurs synonymes directs
        """
        if self.synonyms is None:
            synonyms = self.det_synonyms(firsts=True)
        else:
            synonyms = self.synonyms
        tags = set(synonyms.keys())
        for syns in synonyms.values():
            # on ajoute les synonymes comme tags potentiels
            tags |= set(syns)
        self.minor_tags = list(tags)
        return self.minor_tags

    def get_tags_double_sided(self):
        """
        Retourne les tags déterminés indirectement
        :return:
        """
        # on récupere les tags directs
        tags_dir = self.determin_tags()
        # on compte les occurences des mots considérés comme tags directs
        count_words = cnter.compte_occur_mots_unifies(self.texte_simplifie, tags_dir, _type_='list')
        # on trie les mots du + frequent au moins frequent
        sorted_words = tools.dico_to_sorted_list(count_words)
        nb = self.nb_mots / len(tags_dir)
        new_tags = tools.get_firsts(self.classement_mot, nb)
        return new_tags

    def get_TF(self, mot):
        """
        Récupère la TF d'un mot, son score dans la description courante (nb d'occurrence)
        tf = nbb_occurence/nb_mots
        :param mot:
        :return:
        """
        if self.nb_mots == 0:
            return 0
        if self.texte_simplifie is None:
            self.simplification()
        # on compte les frequences des mots
        count_words = cnter.compte_occur_mots(self.texte_simplifie, _type_='list')
        return count_words[mot] / float(self.nb_mots)

    def calc_tf_idf(self, mot, liste_descr):
        """
        TF : Term Frequency
        IDF : Inversed Document Frequency
        Calcule la pertinence d'un mot dans un corpus pour un texte donné
        = TF*IDF
        :param mot:
        :param liste_descr: liste d'objet description
        :return:
        """
        tf = self.get_TF(mot)
        idf = tools.calc_idf(mot,liste_descr)
        return tf*idf

    def calc_score(self, liste_descr):
        """
        Test : calcul le score de cette description,
        ie la somme des tf-idf
        c'est à dire pour chaque mot 'interessant' sa tf-idf
        :return:
        """
        score = 0
        for mot in self.liste_mots :
            score += self.calc_tf_idf(mot, liste_descr)
        return score

    def determin_themes_appr(self):
        pass
        # pour chaque tag trouvé pour ce texte

        # on calcule sa tf (terme frequency)
        # on calcule son idf (inverse document frequency)
        # on classe les mots selon leur score pour ce document
        #

    def determin_themes_auto(self,with_syns=True):
        """
        Détermine les themes de la description de façon automatique
        C'esy-à-dire en comparant les stem des words
        avec les librairies d'apprentissage linguistique
        :param with_syns:
        :return:
        """
        mes_themes = set()
        # pour chaque mot important (not stopword sous forme de lemme) et unifié
        stemmed_descr = simp.txt_stems(self.texte_simplifie)
        # pour chaque theme envisageable
        for possible_theme, racine_thm in Themes.get_racines().items():
            # dans le cas où on cherche à être plus précis et à faire aussi selon les synonymes des themes possible
            if with_syns :
                racine_thm.extend(simp.txt_stems(syn.found_synonyms(possible_theme.lower())))
            stemmz = racine_thm
            #print "\nTHEME =",possible_theme,"RACINE=",racine_thm,"SYNZ=\n\t",
            # pour chaque mot de la liste de stem pour ce theme
            for stem in stemmz :
                if stem in stemmed_descr:
                    mes_themes.add(possible_theme)
                    break
        mes_themes = list(mes_themes)
        self.themes = mes_themes
        return mes_themes

    def clone(self):
        """
        Renvoie une deuxieme instance de Description exactement
        similaire à l'instance courante
        :return:
        """
        descr = Description(self.texte_formatte)
        descr.texte_simplifie = self.texte_simplifie
        descr.classement_mot = self.classement_mot
        descr.major_tags = self.major_tags
        descr.minor_tags = self.minor_tags
        descr.themes = self.themes
        descr.synonyms = self.synonyms
        descr.nb_mots = self.nb_mots
        descr.most_common = self.most_common
        return descr

