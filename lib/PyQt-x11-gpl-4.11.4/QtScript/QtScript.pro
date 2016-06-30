TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += script
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtScript.pyd
    target.files = QtScript.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtScript.so
    target.files = QtScript.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtScript
sip.files = ../sip/QtScript/qscriptclasspropertyiterator.sip ../sip/QtScript/qscriptcontextinfo.sip ../sip/QtScript/QtScriptmod.sip ../sip/QtScript/qscriptengineagent.sip ../sip/QtScript/qscriptclass.sip ../sip/QtScript/qscriptvalueiterator.sip ../sip/QtScript/qscriptengine.sip ../sip/QtScript/qscriptcontext.sip ../sip/QtScript/qscriptstring.sip ../sip/QtScript/qscriptvalue.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtScript.exp
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

TARGET = QtScript
HEADERS = sipAPIQtScript.h
SOURCES = sipQtScriptQScriptString.cpp sipQtScriptQList0100QScriptValue.cpp sipQtScriptQScriptContextInfo.cpp sipQtScriptQScriptSyntaxCheckResult.cpp sipQtScriptQScriptValuePropertyFlags.cpp sipQtScriptcmodule.cpp sipQtScriptQScriptClassPropertyIterator.cpp sipQtScriptQScriptValueResolveFlags.cpp sipQtScriptQScriptContext.cpp sipQtScriptQScriptEngineQObjectWrapOptions.cpp sipQtScriptQScriptValueIterator.cpp sipQtScriptQScriptClassQueryFlags.cpp sipQtScriptQScriptEngine.cpp sipQtScriptQScriptEngineAgent.cpp sipQtScriptQList0100QScriptContextInfo.cpp sipQtScriptQScriptClass.cpp sipQtScriptQScriptValue.cpp
