#!/usr/bin/env python
# -*- coding: utf-8 -*-

from selenium import webdriver

browser = webdriver.Firefox()
browser.get('http://www.algonano.com')

"""
import os

chromedriver = "/Users/adam/Downloads/chromedriver"
os.environ["webdriver.chrome.driver"] = chromedriver
driver = webdriver.Chrome(chromedriver)
driver.get("http://stackoverflow.com")
driver.quit()
"""
