#!/usr/bin/python
# -*- coding: utf-8 -*-

from pymongo import MongoClient, InsertOne, DeleteOne, ReplaceOne


# TODO debug this, it have to translate
# Cette fonction a pour but de transformer une chaine de caractère representant
# une date en une date systeme aussi appelé timestamp.
def StringToTimeStamp(string):
    """
    Permet, pour chaque date, de la convertir en tampon temporel de norme ISO.
    Le tampon temporel etant plus approprié pour indexer les appels afin d'effectuer
    des opérations sur les fiches de appels à subventions (tri,selection,...)
    (i.e. literal  -> numeric ) chaine de caractère -> timestamp iso

    :param string: String de la date à convertir
    :type string: str

    :rtype: timeStamp
    """
    if string != None:
        timesStamps=[]
        #dictionaire de correspondance entre une chaine de caractère et le numero du mois associé
        #afin de faire comme une close switch/case
        literalMoisVersNumerique={"January":'01',"February":'02',"March":'03',"April":'04',
                              "May":'05',"June":'06',"July":'07',"August":'08',
                             "September":'09' ,"October":'10',"November":'11',"December":'12'}
        print "la string: "
        print string
        #On recherche quelque chose de la forme "00 lettres 0000", soit dans ce cas une date comme "25 janvier 2018"
        #soit jour=(\d{2}) , mois=(\w+?) , année=(\d{4})
        dates = re.findall('(\d{2}).(\w+?).(\d{4})', string,re.IGNORECASE)
        print "les dates trouves:"
        print dates
        if not dates==[]:
            for datesTrouves in dates:
                jour=int(datesTrouves[0])
                mois=datesTrouves[1]
                if mois in literalMoisVersNumerique:
                    mois =int(literalMoisVersNumerique[mois])
                annee=int(datesTrouves[2])
                timesStamps.append(datetime.datetime(annee,mois,jour))
            print "les dates converties:"
            print timesStamps
        return timesStamps


def ConnectionAuServeur(adresseDuServeur):
    """
    Permet, de se connecter (creer un client) à la base  de donnée avec l'adresse de la base.

    :param adresseDuServeur: adresse de la base de donnée (url), par défaut l'adresse locale 'mongodb://localhost:27017/'
    :type string: str

    :rtype: MongoClient
    """
    #Je crée le client qui se connecte au serveur
    if adresseDuServeur == None:
        adresseDuServeur='mongodb://localhost:27017/'
    client = MongoClient(adresseDuServeur)

    return client


def recupererBaseDeDonnees(clientDuServeur,titreBaseDeDonnees):
    """
    Permet de recuperer la table correpondante dans la base de donnée.
    (i.e. où l'on insère les enregistrements dans la base de donnée)

    :param clientDuServeur: client/connection à la base de donnée
    :type clientDuServeur: MongoClient

    :param titreBaseDeDonnees: titre de la base de donnée
    :type titreBaseDeDonnees: str

    :rtype: database
    """

    if titreBaseDeDonnees == None:
        titreBaseDeDonnees='baseDeDonnees'
    # Récuperation de la base 'baseDeDonnees'
    baseDeDonnes=clientDuServeur[titreBaseDeDonnees]
    return baseDeDonnes


def recupererUneTableDeLaBase(baseDeDonnee,nomDeLaTable):
    """
    Permet de recuperer la table correpondante dans la base de donnée.
    (i.e. où l'on insère les enregistrements dans la base de donnée)

    :param nomDeLaTable: titre de la table
    :type nomDeLaTable: str

    :param baseDeDonnee: la base de données
    :type baseDeDonnee:

    :rtype: database
    """

    if nomDeLaTable == None:
        nomDeLaTable = 'lesAppelsAPropositions'

    # Récuperation de la table 'lesAppelsAPropositions' où inserer les appels
    table=baseDeDonnee[nomDeLaTable]

    return table


def afficherLeNombreDEnregistrementsDansUneTable(table,titreDuSite):
    # (optional Monitoring)On compte le nombre d'enregistrements
    # titreDuSite can be for example "H2020", look for 'titreDesSites' array below Ctrl+f
    nbr_appels=table.find({'Site': titreDuSite}).count()
    print '\n Avant On a '+str(nbr_appels)+' enregistrements d\'appels pour H2020 dans la base de donnée'


def afficherLesTablesDeLaBaseDeDonnees(client,titreBaseDeDonne):
    # (optional Monitoring) On affiche dans la console les collections
    print 'les Tables présentes sont les suivantes:'
    #'baseDeDonnees'
    for tables in client[titreBaseDeDonne].collection_names(): print '\t'+tables


def afficherLeNomDesBasesDeDonnees(client):
    # (optional Monitoring) On affiche dans la console les bases de données
    print 'les bases de données présentes sont les suivantes:'
    for bases in client.database_names(): print '\t'+bases


def construireAppel(titreDuSiteAScrapper,titreDeLAppel,description,date_ouverture,date_fermeture,urlSousAppel):

    """
    Permet de construire le JSON correspondant à l'appel à subvention avec les differentes informations qui y sont
    associés.
    (i.e. les fiches des enregistrement telles qu'elles seront rengistrées dans la base)

    :param titreDuSiteAScrapper:
    :type titreDuSiteAScrapper: str

    :param titreDeLAppel:
    :type titreDeLAppel: str

    :param description:
    :type description: str

    :param date_ouverture:
    :type date_ouverture: datetime.date

    :param date_fermeture:
    :type date_fermeture: datetime.date

    :param urlSousAppel:
    :type urlSousAppel: str

    :rtype: collection
    """
    appel = {"Site": titreDuSiteAScrapper,
            "Titre": titreDeLAppel,
            "Description": description,
            "dateOuverture": date_ouverture,
            "dateFermeture": date_fermeture,
            "date":datetime.datetime.utcnow(),
            "url":urlSousAppel}
    return appel
