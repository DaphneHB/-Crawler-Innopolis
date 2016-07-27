# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 12:11 2016

@author: daphnehb

Code de nettoyage d'une string
Ie récupération des mots sans accents ni ponctuaction ni balise
"""

from bs4 import BeautifulSoup
import re
import string
from translation import texte_usable

###############################################################
# ##### Utilitaires
def htmlToTxt(description_sale) :
    """
    On récupère un texte sans html à partir d'un texte balisé
    :param description_sale: texte avec mise en forme html - string
    :return: texte sans mise en forme html - string
    """
    soup = BeautifulSoup(description_sale,"lxml")
    text = soup.getText()
    text = text.replace('\n',' ')
    return text


def decodage(string_to_decode):
    """
    Retire l'encodage spécial de la string et supprime les éléments accentués
    Laisse la ponctuaction
    On passe par le format unicode
    :param string_to_decode: La string encodée
    :return: La string simplifiee
    """
    # si le codec de la string n'est pas unicode on la decode
    try:  # TODO meilleure façon de gérer l'encodage ?
        string_to_decode = string_to_decode.decode("utf-8")
    except UnicodeEncodeError:
        # on entre dans ce cas la si la string est déjà encodée en unicode
        pass
    from unicodedata import normalize
    return normalize('NFKD', string_to_decode).encode('ascii', 'ignore')


def suppFioriture (description_sale) :
    """
    Supprime les éléments indésirables, les fioritures telles que la ponctuaction
    Sépare les mots des nombre
    Garde les mots composés (séparés par un -)
    :param description_sale: texte à nettoyer de la ponctuation, décodé auparavant - string
    :return: texte nettoyé
    """
    # on récupere tous les caractères de ponctuation possible
    ponctuation = set(string.punctuation)
    # cas special des tirets simples et des apostrophes
    # il faut garder les tirets simples et remplacer les apostrophes par des espaces
    # on ne considère pas les tirets
    ponctuation.remove('-')
    # ni les apostrophes
    #ponctuation.remove('\'')
    # ni les esperluettes?
    #ponctuation.remove('&')
    # on supprime les autres caractères de ponctuation du texte
    nett_descr = ""
    # vérifiant si le caractère précédent est un tiret
    tiret=False
    foundTiret = 0
    for ch in description_sale :
        # dans le cas d'un tiret
        if ch=="-" :
            # si le caractère précédent n'était pas un tiret on note tiret courant
            if not tiret :
                nett_descr += '-'
            # si le caractere precedent était un tiret et qu'il a été noté (ie le premier tiret noté)
            elif foundTiret==1:
                # on le supprime
                nett_descr = nett_descr[:-1]
            # on note qu'on a rencontré un tiret
            tiret = True
            foundTiret+=1
            # on passe à l'itération suivante
            continue
        # s'il ne s'agit pas d'une ponctuation on ajoute le caractère
        elif ch not in ponctuation:
            nett_descr += ch
        # dans le cas ou il s'agit d'une ponctuation  on met un espace à la place
        else :
            nett_descr += " "
        # on déclare qu'on n'a pas vu de tiret à ce stade dans ce tour de boucle
        tiret = False
        foundTiret=0

    # on espace les mots des nombres
    nett_descr = insert_spaces_lettre_nombre(nett_descr)

    return nett_descr


def insert_spaces_lettre_nombre(mot):
    """
    Espace entre les mots et les nombres collés dans une string
    :param mot:
    :return:
    """
    return re.sub(r'(\D)(\d)', r"\1 \2", re.sub(r'(\d)(\D)', r"\1 \2", mot))

def nettoyage_txt(description_sale) :
    # on supprime le html et ne récupère que le texte
    text = htmlToTxt(description_sale)
    # on met le texte en encodage unicode et supprime les accents
    decoded = decodage(text)
    # On traduit le texte obtenu en anglais
    # TODO à laisser?
    traduit = texte_usable(decoded)
    # on supprime la ponctuation indésirable
    description_propre = suppFioriture(traduit)
    return description_propre


###############################################################
# ##### Tests

