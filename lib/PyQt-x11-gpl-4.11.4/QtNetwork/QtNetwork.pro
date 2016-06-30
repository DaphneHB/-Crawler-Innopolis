TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtNetwork
sip.files = ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qurlinfo.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qhttp.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qftp.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qnetworkdiskcache.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQHttpPart.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQUrlInfo.cpp sipQtNetworkQSsl.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQSslError.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQHttpRequestHeader.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQHttp.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQUdpSocketBindMode.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQMultiMap0100QSslAlternateNameEntryType0100QString.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQHttpResponseHeader.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQHttpHeader.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQFtp.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkcmodule.cpp
