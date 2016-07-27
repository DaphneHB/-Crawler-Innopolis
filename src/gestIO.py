#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 16:39 2016

@author: daphnehb

Gestion des fichiers d'entrée et sortie
"""

###############################################################
# ##### Gestion de fichier
def open_file(filename) :
    """
    Lit le contenu du fichier en parametre
    :param filename: nom du fichier à lire
    :return: la string du contenu du fichier
        S'il n'existe pas , quitte le programme
    """
    # on vérifie l'existence du fichier
    try:
        # On enregistre le contenu du fichier dans une variable
        description = ""
        with open(filename,"r") as fichier :
            for line in fichier.read() :
                description += line
        return description
    except IOError:
        print("Fichier %s inexistant" % filename)
        exit()


def read_csv (filename) :
    """
    Récupère la string contenu dans le fichier filename sachant que celui-ci est un csv
    :param filename:
    :return:
    """
    contenu = ""
    if not filename.endswith(".csv") :
        print "ERREUR : Le fichier %s n'est pas un csv" % filename
        exit()
    try :
        with open(filename,"r") as fichier :
            contenu = '\n'.join(fichier.readlines())
    except IOError :
        print "ERREUR : Le fichier %s n'existe pas" % filename
        exit()
    return contenu