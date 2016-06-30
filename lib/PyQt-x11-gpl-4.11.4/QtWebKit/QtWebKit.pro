TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkit network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKit.pyd
    target.files = QtWebKit.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtWebKit.so
    target.files = QtWebKit.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtWebKit
sip.files = ../sip/QtWebKit/qwebkitglobal.sip ../sip/QtWebKit/qgraphicswebview.sip ../sip/QtWebKit/qwebhistory.sip ../sip/QtWebKit/qwebkitversion.sip ../sip/QtWebKit/qwebframe.sip ../sip/QtWebKit/qwebview.sip ../sip/QtWebKit/QtWebKitmod.sip ../sip/QtWebKit/qwebpluginfactory.sip ../sip/QtWebKit/qwebdatabase.sip ../sip/QtWebKit/qwebsecurityorigin.sip ../sip/QtWebKit/qwebhistoryinterface.sip ../sip/QtWebKit/qwebsettings.sip ../sip/QtWebKit/qwebpage.sip ../sip/QtWebKit/qwebinspector.sip ../sip/QtWebKit/qwebelement.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKit.exp
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

TARGET = QtWebKit
HEADERS = sipAPIQtWebKit.h
SOURCES = sipQtWebKitQWebPageExtensionReturn.cpp sipQtWebKitQList0100QWebSecurityOrigin.cpp sipQtWebKitQWebElementCollection.cpp sipQtWebKitQWebHitTestResult.cpp sipQtWebKitQWebPageFindFlags.cpp sipQtWebKitQWebHistory.cpp sipQtWebKitQWebPluginFactoryExtensionOption.cpp sipQtWebKitQWebSettings.cpp sipQtWebKitQMultiMap0100QString0100QString.cpp sipQtWebKitQWebView.cpp sipQtWebKitQWebPageErrorPageExtensionOption.cpp sipQtWebKitQWebPluginFactoryPlugin.cpp sipQtWebKitcmodule.cpp sipQtWebKitQList0100QWebDatabase.cpp sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.cpp sipQtWebKitQWebPluginFactoryExtensionReturn.cpp sipQtWebKitQList0101QWebFrame.cpp sipQtWebKitQWebFrame.cpp sipQtWebKitQWebSecurityOrigin.cpp sipQtWebKitQList0100QWebPluginFactoryPlugin.cpp sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.cpp sipQtWebKitQWebPluginFactoryMimeType.cpp sipQtWebKitQList0100QWebElement.cpp sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp sipQtWebKitQWebPage.cpp sipQtWebKitQWebPageErrorPageExtensionReturn.cpp sipQtWebKitQWebInspector.cpp sipQtWebKitQWebPluginFactory.cpp sipQtWebKitQWebHistoryInterface.cpp sipQtWebKitQWebPageExtensionOption.cpp sipQtWebKitQWebElement.cpp sipQtWebKitQWebHistoryItem.cpp sipQtWebKitQList0100QWebHistoryItem.cpp sipQtWebKitQGraphicsWebView.cpp sipQtWebKitQWebPageViewportAttributes.cpp sipQtWebKitQWebDatabase.cpp
