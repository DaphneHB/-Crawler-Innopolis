#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 15:00 2016

@author: daphnehb

Code pour tester le moteur de recherche et d'apprentissage du crawler
"""

import tools

### Depuis un fichier

# On choisit le fichier à utiliser d'où lire les fichiers
from paths import *
FILE = "tmp.html"
FILE_PATH = DATA_PATH_Unix+FILE

# on récupère la string dans le fichier
#description = tools.open_file(FILE_PATH)

#  on récupère la string dans le fichier
import gestIO as io
descrThemes = io.read_csv(DATA_PATH_Unix+'descriptionThemeRemplie_2.csv')
import conversions as conv
print conv.csv_to_description_appr(descrThemes)[0]

### Depuis une entrée utilisateur
import ihm
texte = ihm.recup_entree_user()

"""
import wordCounter as cnter
import words_synonym as syn
import remove_stopWords as rem
import simplify_words as simp
import nettoyage as nett

# on nettoie le texte de tout html et ponctuation
description_propre = nett.nettoyage_txt(description)
print "Traduction propre:",description_propre
# on récupere la forme canonique des mots
description_simp = simp.txt_lemmas (description_propre)
# On supprime les mots inutiles tels que les préposition
plain_words = rem.supp_mots_vides(description_simp)
# on compte les frequences des mots
count_words = cnter.compte_occur_mots(plain_words,_type_='list')
# on trie les mots du + frequent au moins frequent
sorted_words = tools.dico_to_sorted_list(count_words)
"""

# Test avec la classe Description
from classes import Description
description = Description(texte)
tags = description.determin_tags()

#### Affichage
print "========== Fréquences des mots ============="
#print tools.print_itemlist(sorted_words)
#print description.classement_mot

nb = "10%"
#firsts_elt = tools.get_firsts(sorted_words,nb)
print ">>>>>>>>>> Les %s premiers <<<<<<<<<<<<<<<<" % nb
#print tools.print_itemli(firsts_elt)
print description.most_common

print "========== Synonymes des mots ============="
#print tools.print_itemlist(syn.text_synonyms(firsts_elt))
#print description.synonyms

print "========== Tags ============="
#print tags
#ntags = description.get_tags_double_sided()
#print ntags
#print "NB1 = ",len(tags),"\tNB2 = ",len(ntags)

from classes import Themes

print Themes.all_in_english()