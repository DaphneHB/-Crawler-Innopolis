#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 12:33 2016

@author: daphnehb

Code de traitement du langages
Ici on associe un mot avec une liste de synonymes
"""

from nltk.corpus import wordnet as wn

def special_cases(mot):
    if mot =='r&d' :
        return ['research','development']
    if mot=='research' or mot=='development' :
        return ['r&d']
    return []


def found_synonyms (mot, lang='eng') :
    """
    Retourne tous les synonymes d'un mot, lieu-même inclus
    ATTENTION : ne fonctionne que avec l'anglais
    :param mot:
    :param lang:
    :return:
    """
    mot=mot.lower()
    synonyms = [mot] + special_cases(mot)
    for synset in wn.synsets(mot):
        for lemma in synset.lemmas(lang=lang):
            name = lemma.name()
            if not name == mot :
                synonyms.append(name)
    return synonyms

def text_synonyms(list_mots_uniqify,lang='eng') :
    """
    Pour tous les mots d'une liste/dictionnaire/list de tuples
    (dont le premier elt est le mot) de mots unifiée
    Renvoie le dictionnaire associant à chaque sa liste de synonymes dans la langue demandée
    ATTENTION : ne fonctionne qu'avec la langue anglaise
    :param list_mots_uniqify:
    :param lang:
    :return:
    """
    mot_syns = dict()
    if type(list_mots_uniqify) is dict:
        list_mots_uniqify = list_mots_uniqify.items()
    for mot in list_mots_uniqify :
        if type(mot) is tuple :
            mot = mot[0]
        syns = found_synonyms(mot,lang=lang)
        mot_syns[mot] = syns
    return mot_syns


##################################
######### TESTS
