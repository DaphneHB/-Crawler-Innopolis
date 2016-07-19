# -*- coding: utf-8 -*-
"""
Created on Mon Jul 4 10:39 2016

@author: daphnehb

Réalisé en suivant ce tutoriel :
http://api.mongodb.com/python/current/tutorial.html
"""


# on récupère ce qui nous intéresse dans la librairie
from pymongo import MongoClient

### Connection a un client mongodb
client = MongoClient()
# par défaut equivalent à :
#client = MongoClient('ip-172-31-11-88', 27017)
# ou encore
# client = MongoClient('mongodb://localhost:27017/')

### On choisit/crée la base de données qu'on va utiliser
db = client.test_database  # (ici, c'est "test_database")
# pour gérer les caractères s péciaux (ici -)
# db = client['test-database']  # (ici, c'est "test-database")

### On choisit/crée une table
collection = db.test_collection  # (ici, c'est "test_collection")
# pour gérer les caractères s péciaux (ici -)
# collection = db['test-collection']  # (ici, c'est "test-collection")


### Pour voir les noms des collections de la db
db.collection_names(include_system_collections=False)


import datetime
post = {"author": "Daphné",
        "text": "My first blog post!",
        "tags": ["manga", "Japon", "karate"],
        "date": datetime.datetime.utcnow()}

### Ajout/insertion d'un élt JSON (un document)
posts = db.posts # collection/table de la database db nommée posts
# insertion qui y ajoute une clé unique "_id"
inserted_post = db.posts.insertOne(post) # retourne une référence vers le post inséré
# récupération de l'id du post inséré
#post_id = inserted_post.inserted_id

from bson.objectid import ObjectId
post_id = ObjectId('577bad3d3b8696171b9ae4d2')

### Récupérer les documents JSON dans un document
posts.find_one()
# find_one() : retourne UN SEUL document json qui correspond à la requête
# si plusieurs correspondent, renvoie le premier trouvé
#  autrement :
post_mike = posts.find_one({"author": "Daphné"})
print "FOUND = ",post_mike
posts.find_one({"_id": post_id}) # avec id sous la forme d'un objet ObjectId
# si l'id est une string :
#posts.find_one({'_id': ObjectId(post_id)})

## En une ligne
#document = client.db.collection.find_one({'_id': ObjectId(post_id)})


print "Infos client database"
print client

print "Infos collection acteurs"
for p in posts.find() :
        print p