/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.9
 *
 * Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 26 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"

#line 63 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 69 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextObject.cpp"


class sipQTextObject : public QTextObject
{
public:
    sipQTextObject(QTextDocument*);
    virtual ~sipQTextObject();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextObject(const sipQTextObject &);
    sipQTextObject &operator = (const sipQTextObject &);

    char sipPyMethods[7];
};

sipQTextObject::sipQTextObject(QTextDocument*a0): QTextObject(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObject::~sipQTextObject()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTextObject::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QTextObject);
}

int sipQTextObject::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTextObject::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTextObject,_c,_id,_a);

    return _id;
}

void *sipQTextObject::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QTextObject, _clname)) ? this : QTextObject::qt_metacast(_clname);
}

void sipQTextObject::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QTextObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QTextObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QTextObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QTextObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQTextObject::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QTextObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQTextObject::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QTextObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQTextObject::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QTextObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTextObject_setFormat, "QTextObject.setFormat(QTextFormat)");

extern "C" {static PyObject *meth_QTextObject_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFormat* a0;
        QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QTextObject, &sipCpp, sipType_QTextFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_setFormat, doc_QTextObject_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_format, "QTextObject.format() -> QTextFormat");

extern "C" {static PyObject *meth_QTextObject_format(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            QTextFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_format, doc_QTextObject_format);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_formatIndex, "QTextObject.formatIndex() -> int");

extern "C" {static PyObject *meth_QTextObject_formatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_formatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->formatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_formatIndex, doc_QTextObject_formatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_document, "QTextObject.document() -> QTextDocument");

extern "C" {static PyObject *meth_QTextObject_document(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            QTextDocument*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->document();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_document, doc_QTextObject_document);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObject_objectIndex, "QTextObject.objectIndex() -> int");

extern "C" {static PyObject *meth_QTextObject_objectIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextObject_objectIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextObject, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->objectIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObject, sipName_objectIndex, doc_QTextObject_objectIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextObject(void *, const sipTypeDef *);}
static void *cast_QTextObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QTextObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextObject(void *, int);}
static void release_QTextObject(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextObject *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextObject(sipSimpleWrapper *);}
static void dealloc_QTextObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTextObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextObject *sipCpp = 0;

    {
        QTextDocument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextDocument, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTextObject(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextObject[] = {{141, 0, 1}};


static PyMethodDef methods_QTextObject[] = {
    {SIP_MLNAME_CAST(sipName_document), meth_QTextObject_document, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_document)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextObject_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_format)},
    {SIP_MLNAME_CAST(sipName_formatIndex), meth_QTextObject_formatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_formatIndex)},
    {SIP_MLNAME_CAST(sipName_objectIndex), meth_QTextObject_objectIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_objectIndex)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextObject_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObject_setFormat)}
};

PyDoc_STRVAR(doc_QTextObject, "\1QTextObject(QTextDocument)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTextObject,
        {0}
    },
    {
        sipNameNr_QTextObject,
        {0, 0, 1},
        5, methods_QTextObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextObject,
    -1,
    -1,
    supers_QTextObject,
    0,
    init_type_QTextObject,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTextObject,
    0,
    0,
    0,
    release_QTextObject,
    cast_QTextObject,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QTextObject::staticMetaObject,
    0,
    0
};
