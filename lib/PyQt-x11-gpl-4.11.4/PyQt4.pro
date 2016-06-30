TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtNetwork QtDeclarative QtScript QtScriptTools QtXml QtSql QtSvg QtTest QtWebKit QtXmlPatterns QtDesigner QtDBus Qt pylupdate pyrcc designer

init_py.files = /home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/__init__.py
init_py.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += init_py

uic_package.files = /home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/pyuic/uic
uic_package.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += uic_package

pyuic4.files = pyuic4
pyuic4.path = /home/innopolis/Documents/crawler/bin
INSTALLS += pyuic4
