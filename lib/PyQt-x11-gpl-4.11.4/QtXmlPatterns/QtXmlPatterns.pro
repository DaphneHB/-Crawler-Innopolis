TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qsourcelocation.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQXmlSerializer.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp
