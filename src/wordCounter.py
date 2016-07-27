#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 15:11 2016

@author: daphnehb

Code pour la détermination de score
Ici comptage de la fréquence de chaque mot dans un texte
Deux façons présentées
"""

import collections
from scipy.stats import itemfreq

def compte_occur_mots(description, _type_='txt') :
    """
    Compte les occurences de tous les mots du texte
    Pour un texte simple
    :param description: texte initial
    :param _type_: le type de l'argument desciption (une list ou un text) ['list','text']
    :return: dictionnaire de comptage
    """
    if _type_ == 'text':
        # on sépare selon les espaces
        list_mots = description.lower().rstrip().split(' ')
    elif _type_ == 'list' :
        list_mots = description
    else:
        print "ERREUR : On ne peut compter que les fréquences des mots d'une liste ou d'un texte"
        exit()
    # on calcule la fréquence d'apparition de chaque mot dans la listes
    """
    freq = itemfreq(list_mots)
    # on renvoie le dico correspondant
    #return dict(freq)
    """
    #ou plus simple:
    counter = collections.Counter(list_mots)
    return dict(counter)


def compte_occur_mots_unifies(description, liste_mots, _type_='txt') :
    """
    Compte les occurences de tous les mots du texte
    Pour un texte simple et la liste de ses mots unifiee
    :param description: texte initial
    :return: dictionnaire de comptage
    """
    freq = dict()
    if _type_ == 'text':
        # on sépare selon les espaces
        list_mots_descr = description.lower().rstrip().split(' ')
    elif _type_ == 'list':
        list_mots_descr = description
    else:
        print "ERREUR : On ne peut compter que les fréquences des mots d'une liste ou d'un texte"
        exit()
    for mot in liste_mots :
        # pour chaque mot possible dans le texte on compte sa frequence
        freq[mot] = list_mots_descr.count(mot)
    # on renvoie le dico correspondant
    return dict(freq)


##########################################################
####### TESTS
