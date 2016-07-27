#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 15:35 2016

@author: daphnehb

Interface terminal pour qu'un utilisateur entre un texte sur terminal
"""

def recup_entree_user():
    entree = """INSTRUCTIONS : Entrez votre texte ligne par ligne, sans ligne vide et sans accents.\n\tPour finir la saisie, laisser une ligne vide.\n
    ATTENTION : Pour le moment, seul les textes en anglais sont bien gérés"""
    print entree
    texte = ""
    # boucle d'interaction
    while entree!="" :
        entree = raw_input("> ")
        texte+=entree+"\n"
    # on verifie l'entree utilisateur
    if texte=="" or texte=="\n":
        print "ERREUR : Vous n'avez entré aucun texte\nVous quittez le programme..."
        exit()
    else:
        print "PARFAIT : Votre texte a bien été enregistré, nous allons l'analyser..."
        return texte