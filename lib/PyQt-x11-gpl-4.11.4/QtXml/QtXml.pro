TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtXml
sip.files = ../sip/QtXml/qxmlstream.sip ../sip/QtXml/QtXmlmod.sip ../sip/QtXml/qxml.sip ../sip/QtXml/qdom.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlDeclHandler.cpp sipQtXmlQDomElement.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQDomComment.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQDomText.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlcmodule.cpp sipQtXmlQXmlReader.cpp sipQtXmlQDomDocument.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomAttr.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQDomNotation.cpp
