# -*- coding: utf-8 -*-
"""
Created on Mon Jul 4 10:39 2016

@author: daphnehb

Réalisé en suivant ce tutoriel :
http://api.mongodb.com/python/current/tutorial.html
"""


# on récupère ce qui nous intéresse dans la librairie
from pymongo import MongoClient
from bson.objectid import ObjectId
from subvention import *

ip = '52.19.117.122'

### Connection a un client mongodb
# par défaut equivalent à :
client = MongoClient(ip, 27017)

print " connexion CLIENT = ",client,"\n**************\n"

### On choisit/crée la base de données qu'on va utiliser
db = client.innopolis3
print "DB = ",db,"\n**************\n"

#o = ObjectId('552256c777c833c55d3e3bd')
print "Creating an objectID \n**************\n"

theme = {"_id": 15, "name": "NOUVEAUTÉ"}
orga = {"_id": 18, "name" : "Nouvelles organisations anonymes"}
tag = {"_id": "578ce381e4b02574ab7c7c29", "name": "Nouveauté dans les tags", "type": 2}
area = {"_id": 23, "name": "Japon"}

subv = {"_id": 1329,
        "areas": [{"name": "Japon", "_id": 23},
                   {"name":"Balkans","_id": 5}],
        "attachment":"www.algonano.com/telecharger",
        "complet": False,
        "conditionFinancement": "Entreprise robotique de petite envergure",
        "contact": "TrucNouche du quartier de Dauphine pour test\nEt aussi bidule chouette\Au cas où",
        "dateAjout" : datetime.datetime.utcnow().isoformat(),
        "dateMiseAJour": datetime.datetime.utcnow().isoformat(),
        "dateValidation": datetime.datetime.utcnow().isoformat(),
        "deadline": datetime.datetime(2031, 05, 31).isoformat(),
        "details": "Il semblerait que le format de db soit spécial alors on teste!",
        "difficulty" : 2,
        "nom" : "NAFBOT - CREATION DE ROBOTS",
        "organisations": [orga],
        "permanent": False,
        "requirements": "Pas vraiment beaucoup trop lol",
        "tags": [tag],
        "tailleMax": 666,
        "tailleMin" : 5,
        "themes" : [theme],
        "type" : 9,
        "valide": True,
        "website" : "http://www.algonano.com"
        }


#        "date": datetime.datetime.utcnow()}
### On choisit/crée une table
themes = db.Theme
areas = db.Area
subvs = db.Subvention
orgas = db.Organisation
tags = db.Tag
print "Collection retrieved \n**************\n"

print "Insertion on process \n**************\n"
#themes.insert(theme)
#areas.insert(area)
#tags.insert(tag)
#orgas.insert(orga)
#subvs.insert(subv1)

print "\nThemes \n**************\n"
for th in themes.find() :
    print th

print "\nAreas \n**************\n"
for ar in areas.find() :
    print ar

print "\nTags \n**************\n"
for tg in tags.find() :
    print tg

print "\nOrgas \n**************\n"
for og in orgas.find() :
    print og

print "\nSubvs \n**************\n"
#for sb in subvs.find() :
#print #sb
data = subvs.find({"_id":703})
with open("nouv_bazar_inno3_n2","w") as fichier :
        for line in data :
                fichier.write(str(line))