#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 114:11 2016

@author: daphnehb

Code de nettoyage d'une string
Ici suppression des mots vides tels que les articles et prépositions
"""


# suppression des mots vides (stopWords)
from nltk.corpus import stopwords
import nettoyage as nett

# en console python : ne pas oublier nltk.download("stopwords")
def supp_mots_vides(description, langue='english') :
    """
    Supprime les mots vides d'un texte dans la langue imposée
    Le mot 'les' ne fait pas partie des mots vides connus par nltk
    Prerequis : texte préalablement nettoyé et simplifié
    :param description: le texte initial
    :param langue: la imposée , anglais par défaut
    :return: la liste des mots du texte sans les mots de liaison et articles
    """
    # on retire les \n et sépare selon les espaces
    # filter sert à supprimer les '' string vides de la liste
    list_mots = filter(None,description.split(' '))
    # on decode la liste de stop words de nltk contenant des symboles uniques
    stops = [nett.decodage(x) for x in stopwords.words(langue)] + ['-'] # on ajoute le tiret quand il sépare 2 nb
    """
    # on filtre les mots vides
    # on simplifie : unicité de chaque mot présent
    # avec un set
    #uniq_mot = list(set(list_mots))
    #filtered_words = [word for word in uniq_mot if word.lower() not in stops] # ne tient pas compte de l'ordre des mots
    #filtered_words = [word for word in list_mot if word.lower() not in stops] # plusieurs fois pour un meme mot s'il réapparait
    """
    # en tenant compte de l'ordre des mots et à appliquer q'une fois par mot
    filtered_words = []
    # dictionnaire associant à chaque s'il est vide (False) ou non (True)
    mots_traites = dict()
    # TODO enregistrer les mots en lowerCase ?
    for mot in list_mots :
        mot = mot.lower()
        if mots_traites.has_key(mot) and mots_traites[mot]:
            filtered_words.append(mot)
        elif not mots_traites.has_key(mot):
            if mot.lower() not in stops :
                filtered_words.append(mot)
                mots_traites[mot] = True
            else :
                mots_traites[mot] = False
    return filtered_words

################ Test


