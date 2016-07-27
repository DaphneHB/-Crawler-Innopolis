# -*- coding: utf-8 -*-
"""
Created on Mon Jul 4 10:39 2016

@author: daphnehb
"""

# site auquel se connecter (sans http://)
url = "http://www.dr-chuck.com/page1.htm"
geonames = "http://www.geonames.org/countries"


import BeautifulSoup
import urllib, re
fhand = urllib.urlopen(url)
for line in fhand :
    url_found = re.search(reg_href,line)
    if not url_found is None :
        print "REGEXP ", url_found.group(1)
    print line.strip()

exit()
import geograpy
url = 'http://www.bbc.com/news/world-europe-26919928'
places = geograpy.get_place_context(url=url)