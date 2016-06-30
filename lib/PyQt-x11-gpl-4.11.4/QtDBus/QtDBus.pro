TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtDBus
sip.files = ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qpydbuspendingreply.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qpydbusreply.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDBus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbusreply.h ../qpy/QtDBus/qpydbus_api.h
SOURCES = sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbus_post_init.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbusreply.cpp
