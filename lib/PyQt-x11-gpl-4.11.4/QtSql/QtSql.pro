TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtSql
sip.files = ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/qsqlresult.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqltablemodel.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsqlfield.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlDriver.cpp sipQtSqlQSqlError.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSql.cpp sipQtSqlQSqlParamType.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlRelation.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlTableModel.cpp
