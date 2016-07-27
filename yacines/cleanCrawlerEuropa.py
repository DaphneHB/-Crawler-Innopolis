#!/usr/bin/python
# -*- coding: utf-8 -*-

# Bibliothèques pour le crawler:
from selenium import webdriver
import time
from lxml import html
from bs4 import BeautifulSoup
import requests
import csv
from random import randint

# Bibliothèques pour le partie base de données:
from pymongo import MongoClient, InsertOne, DeleteOne, ReplaceOne
import datetime
import re

# Bibliothèques pour serializer la base de données:
import bson
from bson.json_util import dumps
import collections

#outils.py les outils developés pour le crawler dans le meme repertoire que ce fichier
import outils

def insererAppelDansLaTable(appel,table):
    #TODO ici il faut prévoir d'inclure un mécanisme afin d'avertir aux lecteur que la fiche à été modifié
    """"
    result=table.find({'Titre': appel['Titre']}).update({'$set': {"Site": appel[Site],
                                                "Description": appel[Description],
                                                "dateOuverture": appel[dateOuverture],
                                                "dateFermeture": appel[dateFermeture],
                                                "date":datetime.datetime.utcnow(),
                                                "url":appel[urlSousAppel]}})
    """
    result = table.update_one(
    {"Titre": appel['Titre']},
    {
        "$set": {"Site": appel['Site'],
                "Description": appel['Description'],
                "dateOuverture": appel['dateOuverture'],
                "dateFermeture": appel['dateFermeture'],
                "date":datetime.datetime.utcnow(),
                "url":appel['url']}
    }
    )
    #TODO debug that
    nombreDAppelsModifies=result.modified_count
    print nombreDAppelsModifies
    if nombreDAppelsModifies>0:
        print "modification"
        # TODO ici il faut prévoir d'inclure un mécanisme afin d'avertir aux lecteur que la fiche à été modifié
    else:
        result = table.insert(appel)


#TODO gerer les appels avec plusieurs dates de fermeture
def supprimerAppelDepasses(table):
    table.find({'dateFermeture': appel.Titre})

#TODO supprimer ca c'est pour cédric
FichierResultatDuScrapping='scrapping_crawling_of_europa.csv'
resultatDuScrapping= csv.writer(open(FichierResultatDuScrapping, "wb"),delimiter=',')
resultatDuScrapping.writerow(["description","theme"])


client = outils.ConnectionAuServeur(None)

# (optional monitoring)
outils.afficherLeNomDesBasesDeDonnees(client)
# (optional monitoring)
outils.afficherLesTablesDeLaBaseDeDonnees(client, 'baseDeDonnees')

base = outils.recupererBaseDeDonnees(client,None)

table = outils.recupererUneTableDeLaBase(base,None)

# (optional monitoring)
outils.afficherLeNombreDEnregistrementsDansUneTable(table,'H2020')

#-----------------------------------------------------------------------------------------------------------------------


#TODO tester des url raccourcies pour plus de booootey
#TODO can be on a excell files who can be read

#liste des sites à crawler:
h2020='http://ec.europa.eu/research/participants/portal/desktop' \
      '/en/opportunities/h2020/index.html#c,calls=level3/t/EU.1.' \
      '/1/1/1/default-group&level4/t/EU.1.1./0/1/1/default-group&level4/t' \
      '/EU.1.2./0/1/1/default-group&level4/t/EU.1.3./0/1/1/default-group&level4/t' \
      '/EU.1.4./0/1/1/default-group&level3/t/EU.2./1/1/1/default-group&level4/t/EU.2.1.' \
      '/0/1/1/default-group&level5/t/EU.2.1.1./0/1/1/default-group&level5/t/EU.2.1.2./0/1/1' \
      '/default-group&level5/t/EU.2.1.3./0/1/1/default-group&level5/t/EU.2.1.4./0/1/1/default-group&level5' \
      '/t/EU.2.1.5./0/1/1/default-group&level5/t/EU.2.1.6./0/1/1/default-group&level4/t/EU.2.2./0' \
      '/1/1/default-group&level4/t/EU.2.3./0/1/1/default-group&level3/t/EU.3./1/1/1/default-group&level4/t/EU.3.1.' \
      '/0/1/1/default-group&level4/t/EU.3.2./0/1/1/default-group&level4/t/EU.3.3./0/1/1/default-group&level4/t/EU.3.4.' \
      '/0/1/1/default-group&level4/t/EU.3.5./0/1/1/default-group&level4/t/EU.3.6./0/1/1/default-group&level4/t/EU.3.7.' \
      '/0/1/1/default-group&level3/t/EU.4./1/1/1/default-group&level3/t/EU.5./1/1/1/default-group&level3/t/EU.7.' \
      '/1/1/1/default-group&level2/t/Euratom/1/1/1/default-group&hasForthcomingTopics/t/true/1/1/0' \
      '/default-group&hasOpenTopics/t/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/default-group&Title,CallIdentifier.CallId' \
      '/s//1/1/0/default-group&+PublicationDate/asc'

thirdHealthProgramme='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/3hp/index.html'

AsylumMigrationIntegrationFund='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/amif/index.html'

ConsumerProgramme='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/cp' \
                  '/index.html#c,calls=hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0' \
                  '/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDateLong/asc'

COSME='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/cosme/index.html#c,calls=hasForthcomingTopics/' \
      't/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/' \
      'default-group&+PublicationDateLong/asc'

InternalSecurityFundBordersVisa='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/isfb/index.html'

InternalSecurityFundPolice='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/isfp/index.html'

JusticeProgramme='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/just' \
                 '/index.html#c,calls=hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0/' \
                 'default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDateLong/asc'


PromotionOfAgriculturalProducts='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities' \
                                '/agrip/index.html#c,calls=hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics' \
                                '/t/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDateLong' \
                                '/asc'

RightsEqualityAndCitizenshipProgramme='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/rec' \
                                      '/index.html#c,calls=hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t' \
                                      '/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDateLong/asc'

ResearchFundCoalAndSteel='http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/rfcs' \
                         '/index.html#c,calls=hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0' \
                         '/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDateLong/asc'


listeDesUrlsDeEuropa=[h2020,thirdHealthProgramme,AsylumMigrationIntegrationFund,ConsumerProgramme,COSME,
                      InternalSecurityFundBordersVisa,InternalSecurityFundPolice,JusticeProgramme,
                      PromotionOfAgriculturalProducts,RightsEqualityAndCitizenshipProgramme,ResearchFundCoalAndSteel]

titreDesSites=["H2020","thirdHealthProgramme","AsylumMigrationIntegrationFund","ConsumerProgramme","COSME",
                      "InternalSecurityFundBordersVisa","InternalSecurityFundPolice","justiceProgramme",
               "PromotionOfAgriculturalProducts","RightsEqualityAndCitizenshipProgramme","ResearchFundCoalAndSteel"]

#-----------------------------------------------------------------------------------------------------------------------

#TODO make selenium headless
#On utilise le navigateur Firefox pour requeter le site europa.eu
driver = webdriver.Firefox()
iemeAppel=0
for urlOfField in listeDesUrlsDeEuropa:
    i=listeDesUrlsDeEuropa.index(urlOfField)
    titreDuSiteAScrapper=titreDesSites[i]

    print "\n--------------------------------"+titreDuSiteAScrapper+"---------------------------------"
    print   "----------------------------------"+                "------------------------------------"
    driver.get(urlOfField)
    # I] Recupération des liens de la page 1 (voir Dossier H20H20 Scrapping)

    #ils sont logés dans la balise de classe ec-cards-wrapper
    listeDesAppelsPresentsSurLaPage1=driver.find_elements_by_class_name("ec-cards-wrapper")
    listeDesUrlDesAppels=[]
    print "liste des appels:"
    for bloc in listeDesAppelsPresentsSurLaPage1:
        urlDuBLoc=bloc.find_element_by_xpath("./a").get_attribute("href");
        print urlDuBLoc
        listeDesUrlDesAppels.append(urlDuBLoc)
    print '\n'

    # II] recuperation des liens de la page 2 (sous appels)
    #sur tout les appels on recupere les sous appels contenus
    flag_limite_dix_fiche=0
    for url in listeDesUrlDesAppels:
        #print titreDuSiteAScrapper
        driver.get(url)
        #on attend pendant un aleatoire en seconde que les scripts de la page aient eu le temps de generer le Html
        #et de cette maniere on est moins suspect pour le site
        aleatoire_temps=randint(0,2)
        time.sleep(aleatoire_temps)

        with open('tropDeLolPourUneSeulePersonne3.html', 'w') as the_file:
            the_file.write(driver.page_source.encode('utf-8'))
        driver.get("file:/home/yac/Documents/IdentitesNommees/tropDeLolPourUneSeulePersonne3.html")

        listeDesSousAppelsPresentsSurLaPage2= driver.find_elements_by_class_name("ec-cards")

        lol= listeDesSousAppelsPresentsSurLaPage2[0].find_elements_by_xpath("//td/strong/a")
        #print "liste des url sous appels de "+url.split('/')[-1].split('.')[0]+ ":"
        listeDesUrlDesSousAppels=[]
        for a in lol:
            lienVersLeDetailDuSousAppel=a.get_attribute("href")
            urlSousAppel= lienVersLeDetailDuSousAppel.encode('utf-8').replace("file:///home/yac/", "http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/")
            #print urlSousAppel
            listeDesUrlDesSousAppels.append(urlSousAppel)

        for urlSousAppel in listeDesUrlDesSousAppels:
            iemeAppel=iemeAppel+1
            print"On crawle la "+str(iemeAppel)+"er/ème fiche/appel"
            #On crawle que cent fiche
            if iemeAppel>1000000:
                flag_limite_dix_fiche=1
                break

            aleatoire_temps=randint(0,2)
            time.sleep(aleatoire_temps)
            #ici beautifullsoup rentre en jeu
            #On se fait passer pour un client Firefox
            agent={'User-Agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:40.0) Gecko/20100101 Firefox/40.1'}
            #On scrape Horizon2020
            #Note de Cédric Guarrigues (ne pas confondre horizon2020 européen avec horizon2020 francais)

            #print"qui est la fiche:\n"+urlSousAppel+'\n'
            r=requests.get(urlSousAppel,headers=agent)
            content=r.content
            soup= BeautifulSoup(content, "lxml")

            #Ici on récupere le titre de l'appel.
            #print'avec le titre:\n'
            titre=soup.find_all('div',attrs={"class":u"well"})[0].findAll('h3')
            titre= titre[0].text.replace("TOPIC : ","")
            titre=titre.encode('utf8')
            #print titre

            #Ici on récupere la description de l'appel.
            #TODO verifier que les descriptions soient entierement collectés (daphné saw some issues bout' that)
            descriptions=[]
            description=soup.find_all('div',attrs={"class":u"well-blue"})[0].findAll('p')
            for paragraphe in description:
                descriptions.append(paragraphe.text)
            description=''.join(descriptions)


            #Ici on récupere les conditions et documents de l'appel.
            #print '\n'+"les conditons et documents:\n"
            conditions_documents=soup.find_all('div',attrs={"class":u"well-blue"})[1].find('ol')
            if conditions_documents!=None:
                conditions_documents=conditions_documents.encode('utf8')
            #print conditions_documents

            #Ici on récupere le support de l'appel.
            #print "LE SUPPORT DE L'APPEL:\n"
            supports=[]
            support=soup.find_all('div',attrs={"class":u"well-blue"})[2].find_all('div',attrs={"class":u"more-block"})[0]
            for element in support:
                if element!='u\'\n\'':
                    #print element
                    supports.append(str(element))
            supports=supports[3:-1]
            supports=''.join(supports)
            supports=supports
            #print supports

            #print '\n'+'LA DATE D\'OUVERTURE:'
            #On recupere la date d'ouverture de l'appel
            date_ouverture=soup.find_all('td',attrs={"valign":u"top"})[1].text
            #print date_ouverture.lstrip().rstrip()
            if date_ouverture!=None:
                date_ouverture=date_ouverture.encode('utf8')

            #print 'LA DATE DE FERMETURE:'
            #On recupere la date de fermeture de l'appel
            dates_fermeture=soup.find_all('div',attrs={"class":u"well"})[0].find_all('td',colspan=False,valign=False)[-1]
            string_dates_fermeture=[]
            for date in dates_fermeture:
                if len(date)!=0:
                    date=str(date).replace("<br/>","")
                    date= str(date).lstrip().rstrip()
                    string_dates_fermeture.append(str(date))
                    #print date
            string_dates_fermeture=' '.join(string_dates_fermeture)
            if string_dates_fermeture!=None:
                string_dates_fermeture=string_dates_fermeture.encode('utf8')
            #print string_dates_fermeture

            #ecriture dans en JSON
            #construction de l'appel à proposition

            #TODO debug this, it have to translate
            """
            date_ouverture=StringToTimeStamp(date_ouverture)
            dates_fermeture=StringToTimeStamp(dates_fermeture)

            #TODO expliquer le choix fait ici
            for closingDate in dates_fermeture:
                appel = {"Site": titreDuSiteAScrapper,
                         "Titre": titre,
                         "Description": description,
                         "dateOuverture": date_ouverture[0],
                         "dateFermeture": closingDate,
                         "date":datetime.datetime.utcnow()}

                print appel
                #on insère l'appel dans la base de donnée
                result = table.insert(appel)
            """
            annee=randint(2017,2020)
            mois=randint(01,12)
            jour=randint(1,27)
            fausse_feremture=datetime.datetime(annee,mois,jour)

            #TODO REMETRE LA VRAIE DATE FERMETURE dates_fermeture
            #TODO rajouter support
            appel = {"Site": titreDuSiteAScrapper,
                     "Titre": titre,
                     "Description": description,
                     "dateOuverture": date_ouverture,
                     "dateFermeture": fausse_feremture,
                     "date":datetime.datetime.utcnow(),
                     "url":urlSousAppel}

            print appel

            des="\""+appel['Description'].encode('utf-8')+"\""
            thm="\""+"theme"+"\""
            resultatDuScrapping.writerow([des,thm])

            #on insère l'appel dans la base de donnée
            #result = table.insert(appel)
            insererAppelDansLaTable(appel,table)
            print "fiche inserée"
            print "\n -----------------------------------------------------------------------------------------------------" \
                  "--------- \n"
        if flag_limite_dix_fiche==1:
            break

#On ferme le navigateur
driver.close()

#(optional Monitoring)On compte le nombre d'enregistrements
nbr_appels=table.find({'Site':'H2020'}).count()
print '\n APRES On a '+str(nbr_appels)+' enregistrements d\'appels pour H2020 dans la base de donnée:'
results=list(table.find({'Site':'H2020'}))[:20]
for result in results:
    print result
print'\n'

print "Tout les appels a subventions avant 2017 11 28"
results=list(table.find({'Site':'H2020','dateFermeture':{'$lt':datetime.datetime(2017, 11, 28, 0, 0)}}))
for result in results:
    print result
print'\n'

print "Tout les appels a subventions avec le mot transport"
results=list(table.find({"Description":{'$regex':".*transport.*"}}))
for result in results:
    print result

print "Tout les appels a subventions avec le mot innovation"
results=list(table.find({"Description":{'$regex':".*innovation.*"}}))
for result in results:
    print result


#datetime.datetime(2017, 12, 31, 0, 0) {'$lt'

r=table.find()
l = list(r)
dumps(l)

#On déconnecte le client
client.close()


#TODO ennoncer les ameliorations possibles

#TODO fichier py requettes standalone avec contains
#TODO map reduce