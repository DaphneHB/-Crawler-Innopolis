#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Thu Jul 21 15:35 2016

@author: daphnehb

Code de traduction d'un texte
"""

# python -m textblob.download_corpora
from textblob import TextBlob
import requests


def lang_correct(texte) :
    """
    Correction du texte entré au niveau linguistique
    :param texte:
    :return:
    """
    if type(texte) is str:
        return TextBlob(texte).correct()
    elif type(texte) is TextBlob:
        return texte.correct()
    else:
        return texte


def lang_detect(texte):
    """
    Détecte la langue utilisée pour la rédaction du texte
    :param texte:
    :return:
    """
    if type(texte) is str:
        return TextBlob(texte).detect_language()
    elif type(texte) is TextBlob:
        return texte.detect_language()
    else:
        return texte


def to_english(texte, from_lang) :
    """
    Traduit le texte en paramètre
    depuis n'importe quelle langue gérée par textblob
    vers de l'anglais
    :param texte:
    :param from_lang:
    :return:
    """
    if from_lang == 'en' :
        return texte
    if type(texte) is str:
        return TextBlob(texte).translate(from_lang=from_lang, to='en')
    elif type(texte) is TextBlob:
        return texte.translate(from_lang=from_lang, to='en')
    else:
        return texte


def texte_usable(texte) :
    """
    Rend un texte utilisable
    Ie corrige sa syntaxe grammaticale et orthographe
    Et le traduit en anglais
    Prerequis : texte sans accents (decode)
    :param texte:
    :return:
    """
    if type(texte) is str:
        texte = TextBlob(texte)
    elif not type(texte) is TextBlob:
        print "ERREUR : variable inutilisable, ce n'est ni une str ni un TextBlob"
    # on corrige la linguisstique du texte dans la langue originelle
    #texte = lang_correct(texte)
    # on détecte la langue du texte
    lang = lang_detect(texte)
    if lang == 'en':
        return str(texte)
    # on retourne la traduction obtenue en str
    try :
        # l'API n'étant plus nise à jour, certaines traductions sont obsolètes
        trad = str(to_english(texte,lang))
    except :
        # on utilise alors la traduction google
        url = 'http://translate.google.com/translate_a/t'
        params = {
            "text": texte,
            "sl": lang,
            "tl": "en",
            "client": "p"
        }
        trad = requests.get(url, params=params).content
    finally:
        return trad