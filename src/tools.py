#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 14:28 2016

@author: daphnehb

Code réunissant la simplification d'un texte (retrait des mots vides et canonisation des mots)
S'inspirant de remove_stopWords.py simplify_words.py words_synonym.py et wordCounter.py
"""

############## Import
# Lemmatisation
from nltk.stem import WordNetLemmatizer
# nltk.download('punkt') pour word_tokenize
# nltk.download('averaged_perceptron_tagger') pour pos_tag
from nltk import pos_tag, word_tokenize
# Tri d'un dictionnaire python par clés décroissantes
from operator import itemgetter
import math

########################################################
################ ## TOOLS
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
    # TODO get rid of the determinant
    return None


def lemmatization (mot) :
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
    # Dans le cas d'un determinant ou préposition on ne peut rien faire
    if pos is None :
        return mot
    return lemmatizer.lemmatize(mot,pos=pos)


def is_stopWord (mot,stops) :
    """
    Returning whether mot is a stopword or not
    :param mot:
    :param stops: stopwords list
    :return: True or False
    """
    return mot in stops


def count_mot (mot, list_mots):
    """
    Pour chaque mot possible dans le texte on compte sa frequence d'apparition (dans list_mots)
    :param mot:
    :param list_mots:
    :return:
    """
    return list_mots.count(mot)

def dico_to_sorted_list (dico) :
    """
    Retourne la liste d'items associes au dictionnaire
    et rangeant ces items selon leurs clés dans l'ordre décroissant
    :param dico:
    :return:
    """
    # renvoie la liste des (clés,valeurs) du dico triees selon les valeurs
    liste = dico.items()
    liste.sort(key=itemgetter(1),reverse=True)
    # renvoie la liste des clés du dico triees selon les valeurs
    #liste = sorted(dico, key=dico.__getitem__,reversed=True)
    return liste

def print_itemlist (liste) :
    print "++++++++ Données ++++++++++"
    # par précaution s'il a été données un dictionnaire
    if type(liste) is dict :
        liste = liste.items()
    for key,val in liste :
        print "MOT =",key,"\n\t",val


def get_firsts(liste,nb,supp_solo=False) :
    """
    Retourne les nb premiers éléments de la liste
    supp_solo : S'il y en a qui n'apparaissent qu'une fois : les supprimer
    :param liste:
    :param nb:
    :param supp_solo: True pour supprimer là où l'occurrence est 1
    :return:
    """
    if type(liste) is dict :
        liste = dico_to_sorted_list(liste)
    liste = liste[:nb]
    if supp_solo :
        # indice au-delà duquel il faut supprimer
        i_suppr = -1
        for i,(_,freq) in enumerate(liste) :
            if freq == 1:
                i_suppr = i
                break
        if i_suppr!=-1 :
            liste = liste[:i]
    return liste


def calc_idf(mot, liste_descr):
    """
    IDF : Inversed Document Frequency
    Calcule la fréquence d'apparition d'un mot dans un corpus
    = log (nb de doc)/(nb de doc contenant le mot)
    :param mot:
    :param liste_descr: liste d'objet description
    :return:
    """
    mot = mot.lower()
    apparition_glob = 0
    for description in liste_descr:
        if description.__contains__(mot):
            apparition_glob += 1
    div = len(liste_descr)/float(apparition_glob)
    return math.log(div)

def calc_tf_idf(mot, liste_descr, descr):
    """
    TF : Term Frequency
    IDF : Inversed Document Frequency
    Calcule la pertinence d'un mot dans un corpus pour un texte donné
    = TF*IDF
    :param mot:
    :param liste_descr: liste d'objet description
    :param descr: objet description
    :return:
    """
    tf = descr.get_TF(mot)
    idf = calc_idf(mot,liste_descr)
    return tf*idf