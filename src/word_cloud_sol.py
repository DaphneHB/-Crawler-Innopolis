#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
Created on Fri Jul 22 14:37 2016

@author: daphnehb

Code pour afficher un word cloud en image selon l'importance des mots dans un texte
"""
from wordcloud import WordCloud


### Depuis une entrée utilisateur
import ihm
texte = ihm.recup_entree_user()


# Generate a word cloud image
wordcloud = WordCloud().generate(texte)

# Display the generated image:
# the matplotlib way:
import matplotlib.pyplot as plt
plt.imshow(wordcloud)
plt.axis("off")

# take relative word frequencies into account, lower max_font_size
wordcloud = WordCloud(max_font_size=40, relative_scaling=.5).generate(texte)
plt.figure()
plt.imshow(wordcloud)
plt.axis("off")
plt.show()


"""

from pytagcloud import create_tag_image, make_tags
from pytagcloud.lang.counter import get_tag_counts

YOUR_TEXT = "A tag cloud is a visual representation for text data, typically\
used to depict keyword metadata on websites, or to visualize free form text."

tags = make_tags(get_tag_counts(YOUR_TEXT), maxsize=120)

create_tag_image(tags, 'cloud_large.png', size=(900, 600), fontname='Lobster')

"""