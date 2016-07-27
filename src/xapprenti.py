#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Mon Jul 25 14:20 2016

@author: daphnehb

Code pour tester l'apprentissage du crawler
"""


### Depuis un fichier

# On choisit le fichier à utiliser d'où lire les fichiers
from paths import *
FILE = "descriptionThemeRemplie_2.csv"
FILE_PATH = DATA_PATH_Unix+FILE

#  on récupère la string dans le fichier
import gestIO as io
descrThemes = io.read_csv(FILE_PATH)
import conversions as conv
descrz = conv.csv_to_description_appr(descrThemes)
premz = descrz[0]

for d in descrz :
    print d.get_themes()
    d.determin_themes_auto()
    print d.get_themes()
    print d.calc_score(descrz)