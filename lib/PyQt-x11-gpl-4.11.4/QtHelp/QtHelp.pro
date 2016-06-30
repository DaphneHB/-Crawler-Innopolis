TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += help
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtHelp
sip.files = ../sip/QtHelp/QtHelpmod.sip ../sip/QtHelp/qhelpcontentwidget.sip ../sip/QtHelp/qhelpengine.sip ../sip/QtHelp/qhelpsearchengine.sip ../sip/QtHelp/qhelpsearchquerywidget.sip ../sip/QtHelp/qhelpindexwidget.sip ../sip/QtHelp/qhelpenginecore.sip ../sip/QtHelp/qhelpsearchresultwidget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtHelp.exp
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

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQList0100QStringList.cpp sipQtHelpQHelpIndexModel.cpp sipQtHelpcmodule.cpp sipQtHelpQHelpContentWidget.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQHelpIndexWidget.cpp sipQtHelpQHelpEngineCore.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQHelpSearchQuery.cpp
