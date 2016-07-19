#!/usr/bin/python
# -*- coding: utf-8 -*-



url = "http://ec.europa.eu/research/participants/portal/desktop/en/opportunities/h2020/index.html#c,calls=level3/t/EU.1./1/1/1/default-group&level4/t/EU.1.1./0/1/1/default-group&level4/t/EU.1.2./0/1/1/default-group&level4/t/EU.1.3./0/1/1/default-group&level4/t/EU.1.4./0/1/1/default-group&level3/t/EU.2./1/1/1/default-group&level4/t/EU.2.1./0/1/1/default-group&level5/t/EU.2.1.1./0/1/1/default-group&level5/t/EU.2.1.2./0/1/1/default-group&level5/t/EU.2.1.3./0/1/1/default-group&level5/t/EU.2.1.4./0/1/1/default-group&level5/t/EU.2.1.5./0/1/1/default-group&level5/t/EU.2.1.6./0/1/1/default-group&level4/t/EU.2.2./0/1/1/default-group&level4/t/EU.2.3./0/1/1/default-group&level3/t/EU.3./1/1/1/default-group&level4/t/EU.3.1./0/1/1/default-group&level4/t/EU.3.2./0/1/1/default-group&level4/t/EU.3.3./0/1/1/default-group&level4/t/EU.3.4./0/1/1/default-group&level4/t/EU.3.5./0/1/1/default-group&level4/t/EU.3.6./0/1/1/default-group&level4/t/EU.3.7./0/1/1/default-group&level3/t/EU.4./1/1/1/default-group&level3/t/EU.5./1/1/1/default-group&level3/t/EU.7./1/1/1/default-group&level2/t/Euratom/1/1/1/default-group&hasForthcomingTopics/t/true/1/1/0/default-group&hasOpenTopics/t/true/1/1/0/default-group&allClosedTopics/t/true/0/1/0/default-group&+PublicationDate/asc"  

from selenium import webdriver

browser = webdriver.Firefox()
browser.get('http://seleniumhq.org/')
