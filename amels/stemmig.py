#!/usr/bin/python2.7
#-*- coding: utf-8 -*-
#import
from nltk.tokenize import word_tokenize
from nltk.stem import PorterStemmer
#fonction

def stemming (test):
    tokens = word_tokenize(test)
    stemmer=PorterStemmer()
    result=[stemmer.stem(word) for word in tokens]
    return result

#test
test = "numpang wifi stop gadget shopping"
my_stemming = stemming(test)
print my_stemming
