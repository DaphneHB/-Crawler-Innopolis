TEMPLATE = lib
CONFIG += warn_on plugin
QT += declarative network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDeclarative.pyd
    target.files = QtDeclarative.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtDeclarative.so
    target.files = QtDeclarative.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtDeclarative
sip.files = ../sip/QtDeclarative/qdeclarativeexpression.sip ../sip/QtDeclarative/qdeclarativeitem.sip ../sip/QtDeclarative/qdeclarativelist.sip ../sip/QtDeclarative/qdeclarativeimageprovider.sip ../sip/QtDeclarative/qdeclarativescriptstring.sip ../sip/QtDeclarative/qdeclarativecontext.sip ../sip/QtDeclarative/qdeclarativeview.sip ../sip/QtDeclarative/qdeclarativeextensionplugin.sip ../sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip ../sip/QtDeclarative/qdeclarativeproperty.sip ../sip/QtDeclarative/qdeclarativeerror.sip ../sip/QtDeclarative/qdeclarativepropertymap.sip ../sip/QtDeclarative/qdeclarativepropertyvaluesource.sip ../sip/QtDeclarative/QtDeclarativemod.sip ../sip/QtDeclarative/qdeclarativeengine.sip ../sip/QtDeclarative/qdeclarativecomponent.sip ../sip/QtDeclarative/qpydeclarativelistproperty.sip ../sip/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip ../sip/QtDeclarative/qdeclarativeparserstatus.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDeclarative.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDeclarative

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDeclarative
HEADERS = sipAPIQtDeclarative.h ../qpy/QtDeclarative/qpydeclarativepropertyvaluesource.h ../qpy/QtDeclarative/qpydeclarative_listwrapper.h ../qpy/QtDeclarative/qpydeclarative_api.h ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.h ../qpy/QtDeclarative/qpydeclarativelistproperty.h
SOURCES = sipQtDeclarativeQDeclarativeError.cpp sipQtDeclarativeQDeclarativeProperty.cpp sipQtDeclarativeQDeclarativeItem.cpp sipQtDeclarativeQDeclarativeView.cpp sipQtDeclarativeQDeclarativeListProperty0100QObject.cpp sipQtDeclarativeQDeclarativeImageProvider.cpp sipQtDeclarativeQDeclarativePropertyValueSource.cpp sipQtDeclarativeQDeclarativePropertyMap.cpp sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp sipQtDeclarativeQList0100QDeclarativeError.cpp sipQtDeclarativeQDeclarativeScriptString.cpp sipQtDeclarativeQDeclarativeParserStatus.cpp sipQtDeclarativeQDeclarativeContext.cpp sipQtDeclarativeQDeclarativeListReference.cpp sipQtDeclarativeQDeclarativeExpression.cpp sipQtDeclarativeQDeclarativeEngine.cpp sipQtDeclarativeQDeclarativeComponent.cpp sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp sipQtDeclarativecmodule.cpp sipQtDeclarativeQDeclarativeExtensionPlugin.cpp ../qpy/QtDeclarative/qpydeclarativelistproperty.cpp ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.cpp ../qpy/QtDeclarative/qpydeclarative_listwrapper.cpp ../qpy/QtDeclarative/qpydeclarative_post_init.cpp
