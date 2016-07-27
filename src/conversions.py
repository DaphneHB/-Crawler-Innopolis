#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Mon Jul 25 10:21 2016

@author: daphnehb

Code des fonctions d'outils de conversion pour alléger le fichier tools.py
"""

import re


def csv_to_description_appr(contenu_csv):
    """
    Transforme la string provenant du fichier csv en une liste de descriptions
    Avec leur texte, leurs themes et leurs tags
    ATTENTION : ne prend en compte que les fichiers csv
                dont les cases sont délimitées par des ;
                et les champs des cases sont entre "
    :param contenu_csv:
    :return: une liste d'objets Description remplis
    """
    from classes import Description, Themes
    les_descrz = list()
    # on supprimem les sauts de lignes inutiles
    contenu_csv = re.sub(r'([\w\)])\s?\n\s?([\(\w])', r'\1, \2', contenu_csv)
    # en un tour de boucle récupère tous les champs
    #print "+++++++++++++++++++CONTENU+++++++++++++++++++\n", contenu_csv[:5000]
    # on récupère tous les quadruplets "";"";"";""
    # found = re.findall(r'".*";".*";".*";".*"', contenu_csv,flags=re.DOTALL)
    found = filter(None, re.findall(r'(.*)', contenu_csv))
    # on supprime la premiere ligne qui est le nom des colonnes
    del found[0]
    #print "+++++++++++++++++++TROUVÉS+++++++++++++++++++\n", found[2]
    # tant qu'on a un résultat
    for res in found:
        #print "+++++++++++++++++++RESULTAT+++++++++++++++++++\n", res
        # on récupère ce résultat
        ligne = re.findall(r'"([^;]*)"', res, flags=re.DOTALL)
        #print "+++++++++++++++++++LIGNE+++++++++++++++++++\n",ligne
        # on filtre les chaine vide...
        if ligne == [] or len(ligne)!=4:
            continue
        # on le traite
        # on récupère le contenu, le theme principal, les tags, les themes associés
        content = ligne[0]  # contenu
        ## on retire le "" indésirables
        #content = re.sub(r'^"*(.*)"*$',r'\1',content,flags=re.DOTALL)
        une_descr = Description(content)
        # inutile ? un_theme = ligne[1] # theme principal
        les_tagz = ligne[2].split(',')
        # on récupère chaque nom de theme et on retire les espaces inutiles
        ligne_thm = "{} / {}".format(ligne[3],ligne[1])
        les_themes = map(lambda x : x.strip(),ligne_thm.split('/'))
        # on les ajoute à la description
        une_descr.set_maj_tags(les_tagz)
        une_descr.set_themes(les_themes)

        # on note la description dans la liste
        les_descrz.append(une_descr)
        # print une_descr
    return les_descrz


#ret = csv_to_description_appr('''"""The operation of potentially""";"R & D";"Drones
# Aeronautical
# Airplanes";"AFFAIRES SOCIALES / INDUSTRIE"
#"""In manned aviation""";"R & D";" ICT (Information Communication Technologies)
# Drones
# Datalink
# Single European Sky";"COMMERCE / SECURITE / INNOVATION / DEVELOPPEMENT ECONOMIQUE / INDUSTRIE"
# """VLL drones represent a new type """;"R & D";"Very Low Level (VLL) Drones
# Air Vehicle";"INNOVATION / DEVELOPPEMENT ECONOMIQUE / INDUSTRIE"''')
