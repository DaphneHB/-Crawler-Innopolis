#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 114:11 2016

@author: daphnehb

Code de simplification des mots d'un texte
Ie applique une lemmisation de chaque mot du texte, met le mot dans sa forme canonique
Possibilité d'appliquer aussi une stemisation pour récupérer  la racine du mot

Lemmatisation : je suis -> je être

Disponible aussi avec textblob
"""

#####################################
####### TOOLS
"""
Outils pour gérer et convertir les tags trouvés par pos tag
"""
from nltk.corpus import wordnet as wn


def is_noun(tag):
    return tag in ['NN', 'NNS', 'NNP', 'NNPS']


def is_verb(tag):
    return tag in ['VB', 'VBD', 'VBG', 'VBN', 'VBP', 'VBZ']


def is_adverb(tag):
    return tag in ['RB', 'RBR', 'RBS']


def is_adjective(tag):
    return tag in ['JJ', 'JJR', 'JJS']


def penn_to_wn(tag):
    """
    Selon le tag pour un mot de donné sélectionné par nltk.pos_tag,
    Renvoie le tag correspondant pour la lemmatisation (wordnet)
    :param tag: POS tag nltk
    :return: wornet tag nltk
    """
    if is_adjective(tag):
        return wn.ADJ
    elif is_noun(tag):
        return wn.NOUN
    elif is_adverb(tag):
        return wn.ADV
    elif is_verb(tag):
        return wn.VERB
    # get rid of the determinant
    return None


def useless_word(mot, tag):
    """
    Retourne vrai si le mot est considéré comme inutile et qu'il ne faut pas le prendre en compte:
    Suppression de verbes, prépositions et adverbe
    :param mot:
    :param tag:
    :return:
    """
    return is_verb(tag) or tag is None or is_adverb(tag)


######################################################
################### LEMME


from nltk.stem import WordNetLemmatizer
# nltk.download('punkt') pour word_tokenize
# nltk.download('averaged_perceptron_tagger') pour pos_tag
from nltk import pos_tag, word_tokenize


def lemmatization(mot):
    """
    Lemmatisation d'un mot selon sa nature
    C'est-à-dire récupération de la forme canonique de ce mot
    Le lemme d'une préposition ou d'un déterminant n'étant pas fixé
    :param mot: le mot dont on veut récupérer le lemme
    :return: le lemme du mot ou le mot s'il s'agit d'une préposition ou d'un déterminant
    """
    lemmatizer = WordNetLemmatizer()
    # on détermine la nature du mot, adj/noun/verb...
    tag = pos_tag([mot])[0][1]
    pos = penn_to_wn(tag)
    # print "MOT=%s\tTag=%s\tPos=%s" % (mot,tag,pos)
    # Dans le cas d'un determinant ou préposition on ne peut rien faire
    if pos is None:
        return mot, True
    lemma = lemmatizer.lemmatize(mot, pos=pos)
    return (lemma, useless_word(lemma, tag))


def txt_lemmas(texte):
    """
    Lemmatisation de tous les mots d'un texte
    A la fin le texte n'a plus de sens
    Met tous les mots sous leur forme canonique
    Retire les verbes et mots de liaison
    Prerequis : texte préalablement nettoyé (nettoyage.py)
    :param texte: texte à modifier
    :return: texte canonisé
    """
    # Nouveau texte avec tous les mots simplifiés
    nouv_texte = ""
    # Dictionnaire des mots déjà traités pour ne pas réappliquer la fonction de lemmisation
    mots_traites = dict()
    mots_a_suppr = list()
    for mot in texte.split():
        # si le mot a déjà été traité
        if mots_traites.has_key(mot):
            nouv_texte += mots_traites[mot] + " "
        # on retire s'il fait partie des mots inutiles
        elif mots_a_suppr.__contains__(mot):
            continue
        else:
            mot_lemma, a_suppr = lemmatization(mot)
            # s'il s'agit d'un verbe ou d'un article ou d'une preposition on ne l'enregistre pas
            if a_suppr:
                mots_a_suppr.append(mot)
                continue
            nouv_texte += mot_lemma + " "
            mots_traites[mot] = mot_lemma
    return nouv_texte


######################################################
################### LEMME

from nltk.stem import PorterStemmer


def stemmization(mot):
    """
    Stemmisation d'un mot selon sa nature
    C'est-à-dire récupération de la racine de ce mot
    :param mot: le mot dont on veut récupérer la racine
    :return: le stem du mot
    """
    stemmer = PorterStemmer()
    result = stemmer.stem(mot)
    return result


def txt_stems(texte):
    """
    Stemmisation de tous les mots d'un texte déjà simplifié
    A la fin le texte n'a plus de sens
    Met tous les mots sous leur racine
    On garde à tout prix les verbes, adj et adv
    Prerequis : texte préalablement nettoyé (nettoyage.py)
    :type texte: list ou str
    :param texte: texte à modifier
    :return: liste unifiée des mots du texte racinisés
    """
    # Nouveau texte avec tous les mots simplifiés et racinisés
    liste_mots = texte.split() if type(texte) is str else texte
    nouv_texte = map(stemmization, liste_mots)
    return nouv_texte


################ Test
txt = """In addition, VLL airspace is also used by other classes of airspace users,
such as military aircraft, rotorcraft, balloons, hang-gliders, micro-lights, parachutists and so on.
The Concept must enable safe interaction with all these users.
Operational considerations must include contingencies and emergencies,
and societal issues must also be addressed.
The Pareto principle (also known as the 80–20 rule,
the law of the vital few, and the principle of factor sparsity)[1]
states that, for many events, roughly 80% of the effects come from 20% of the causes.[2]
Management consultant Joseph M. Juran suggested the principle
and named it after Italian economist Vilfredo Pareto,
who, while at the University of Lausanne in 1896,
 published his first paper "Cours d'économie politique."
 Essentially, Pareto showed that approximately 80%
 of the land in Italy was owned by 20% of the population;
 Pareto developed the principle by observing that
 20% of the peapods in his garden contained 80% of the peas.[3]"""
"""
import nettoyage as nett
txt = nett.nettoyage_txt(txt)

# récupère le texte nettoyé : description
#description = nett.description_propre

txt_simp = txt_stems(txt)

print txt

print txt_simp
"""
