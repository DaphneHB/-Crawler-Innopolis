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

#include "sipAPIQtDBus.h"

#line 28 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDBus/qdbusargument.sip"
#include <qdbusargument.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDBus/sipQtDBusQDBusArgument.cpp"

#line 32 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDBus/qdbusargument.sip"
#include <QStringList>


static PyObject *qdbusargument_add(QDBusArgument *arg, PyObject *obj, int mtype)
{
    int iserr = 0;

    if (PyLong_CheckExact(obj)
#if PY_MAJOR_VERSION < 3
            || PyInt_CheckExact(obj)
#endif
            )
    {
        if (mtype == QMetaType::UChar || mtype == QMetaType::UShort || mtype == QMetaType::UInt || mtype == QMetaType::ULongLong)
        {
            // Handle the unsigned values.
#if defined(HAVE_LONG_LONG)
            unsigned PY_LONG_LONG v = PyLong_AsUnsignedLongLongMask(obj);
#else
            unsigned long v = PyLong_AsUnsignedLongMask(obj);
#endif

            switch (mtype)
            {
            case QMetaType::UChar:
                *arg << (uchar)v;
                break;

            case QMetaType::UShort:
                *arg << (ushort)v;
                break;

            case QMetaType::UInt:
                *arg << (uint)v;
                break;

            case QMetaType::ULongLong:
                *arg << (qulonglong)v;
                break;
            }
        }
        else if (mtype == QMetaType::Short || mtype == QMetaType::Int || mtype == QMetaType::LongLong)
        {
            // Handle the signed values.
#if defined(HAVE_LONG_LONG)
            PY_LONG_LONG v = PyLong_AsLongLong(obj);
#else
            long v = PyLong_AsLong(obj);
#endif

            switch (mtype)
            {
            case QMetaType::Short:
                *arg << (short)v;
                break;

            case QMetaType::Int:
                *arg << (int)v;
                break;

            case QMetaType::LongLong:
                *arg << (qlonglong)v;
                break;
            }
        }
        else
        {
            PyErr_Format(PyExc_ValueError,
                    "%d is an invalid QMetaType::Type for an interger object",
                    mtype);
            iserr = 1;
        }
    }
    else if (mtype == QMetaType::QStringList)
    {
        // A QStringList has to be handled explicitly to prevent it being seen
        // as a vialiant list.

        int value_state;

        QStringList *qsl = reinterpret_cast<QStringList *>(
                sipForceConvertToType(obj, sipType_QStringList, 0,
                        SIP_NOT_NONE, &value_state, &iserr));

        if (!iserr)
        {
            arg->beginArray(QMetaType::QString);

            for (int i = 0; i < qsl->count(); ++i)
                *arg << qsl->at(i);

            arg->endArray();

            sipReleaseType(qsl, sipType_QStringList, value_state);
        }
    }
    else
    {
        int value_state;

        QVariant *qv = reinterpret_cast<QVariant *>(
                sipForceConvertToType(obj, sipType_QVariant, 0, SIP_NOT_NONE,
                        &value_state, &iserr));

        if (!iserr)
        {
            // This is an internal method. If it proves to be a problem then we
            // will have to handle each type explicitly.
            arg->appendVariant(*qv);
            sipReleaseType(qv, sipType_QVariant, value_state);
        }
    }

    if (iserr)
        return 0;

    Py_INCREF(Py_None);
    return Py_None;
}
#line 151 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDBus/sipQtDBusQDBusArgument.cpp"


PyDoc_STRVAR(doc_QDBusArgument_add, "QDBusArgument.add(object, int id=QMetaType.Int)");

extern "C" {static PyObject *meth_QDBusArgument_add(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_add(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        int a1 = QMetaType::Int;
        QDBusArgument *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_id,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BP0|i", &sipSelf, sipType_QDBusArgument, &sipCpp, &a0, &a1))
        {
            PyObject * sipRes = 0;

#line 175 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDBus/qdbusargument.sip"
        sipRes = qdbusargument_add(sipCpp, a0, a1);
#line 177 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDBus/sipQtDBusQDBusArgument.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_add, doc_QDBusArgument_add);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_beginStructure, "QDBusArgument.beginStructure()");

extern "C" {static PyObject *meth_QDBusArgument_beginStructure(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_beginStructure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->beginStructure();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_beginStructure, doc_QDBusArgument_beginStructure);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_endStructure, "QDBusArgument.endStructure()");

extern "C" {static PyObject *meth_QDBusArgument_endStructure(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_endStructure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->endStructure();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_endStructure, doc_QDBusArgument_endStructure);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_beginArray, "QDBusArgument.beginArray(int)");

extern "C" {static PyObject *meth_QDBusArgument_beginArray(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_beginArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDBusArgument, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->beginArray(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_beginArray, doc_QDBusArgument_beginArray);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_endArray, "QDBusArgument.endArray()");

extern "C" {static PyObject *meth_QDBusArgument_endArray(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_endArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->endArray();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_endArray, doc_QDBusArgument_endArray);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_beginMap, "QDBusArgument.beginMap(int, int)");

extern "C" {static PyObject *meth_QDBusArgument_beginMap(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_beginMap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QDBusArgument, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->beginMap(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_beginMap, doc_QDBusArgument_beginMap);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_endMap, "QDBusArgument.endMap()");

extern "C" {static PyObject *meth_QDBusArgument_endMap(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_endMap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->endMap();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_endMap, doc_QDBusArgument_endMap);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_beginMapEntry, "QDBusArgument.beginMapEntry()");

extern "C" {static PyObject *meth_QDBusArgument_beginMapEntry(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_beginMapEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->beginMapEntry();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_beginMapEntry, doc_QDBusArgument_beginMapEntry);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusArgument_endMapEntry, "QDBusArgument.endMapEntry()");

extern "C" {static PyObject *meth_QDBusArgument_endMapEntry(PyObject *, PyObject *);}
static PyObject *meth_QDBusArgument_endMapEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusArgument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusArgument, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->endMapEntry();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusArgument, sipName_endMapEntry, doc_QDBusArgument_endMapEntry);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusArgument(void *, const sipTypeDef *);}
static void *cast_QDBusArgument(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusArgument)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusArgument(void *, int);}
static void release_QDBusArgument(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDBusArgument *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDBusArgument(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusArgument(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusArgument *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusArgument *>(sipSrc);
}


extern "C" {static void *array_QDBusArgument(SIP_SSIZE_T);}
static void *array_QDBusArgument(SIP_SSIZE_T sipNrElem)
{
    return new QDBusArgument[sipNrElem];
}


extern "C" {static void *copy_QDBusArgument(const void *, SIP_SSIZE_T);}
static void *copy_QDBusArgument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusArgument(reinterpret_cast<const QDBusArgument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusArgument(sipSimpleWrapper *);}
static void dealloc_QDBusArgument(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusArgument(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusArgument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusArgument(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusArgument *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusArgument();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDBusArgument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusArgument, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusArgument(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        PyObject * a0;
        int a1 = QMetaType::Int;

        static const char *sipKwdList[] = {
            NULL,
            sipName_id,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "P0|i", &a0, &a1))
        {
#line 158 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDBus/qdbusargument.sip"
        sipCpp = new QDBusArgument();
        PyObject *res = qdbusargument_add(sipCpp, a0, a1);
        
        if (res)
        {
            Py_DECREF(res);
        }
        else
        {
            delete sipCpp;
            sipCpp = 0;
        }
#line 524 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDBus/sipQtDBusQDBusArgument.cpp"

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDBusArgument[] = {
    {SIP_MLNAME_CAST(sipName_add), (PyCFunction)meth_QDBusArgument_add, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDBusArgument_add)},
    {SIP_MLNAME_CAST(sipName_beginArray), meth_QDBusArgument_beginArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_beginArray)},
    {SIP_MLNAME_CAST(sipName_beginMap), meth_QDBusArgument_beginMap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_beginMap)},
    {SIP_MLNAME_CAST(sipName_beginMapEntry), meth_QDBusArgument_beginMapEntry, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_beginMapEntry)},
    {SIP_MLNAME_CAST(sipName_beginStructure), meth_QDBusArgument_beginStructure, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_beginStructure)},
    {SIP_MLNAME_CAST(sipName_endArray), meth_QDBusArgument_endArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_endArray)},
    {SIP_MLNAME_CAST(sipName_endMap), meth_QDBusArgument_endMap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_endMap)},
    {SIP_MLNAME_CAST(sipName_endMapEntry), meth_QDBusArgument_endMapEntry, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_endMapEntry)},
    {SIP_MLNAME_CAST(sipName_endStructure), meth_QDBusArgument_endStructure, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusArgument_endStructure)}
};

PyDoc_STRVAR(doc_QDBusArgument, "\1QDBusArgument()\n"
    "QDBusArgument(QDBusArgument)\n"
    "QDBusArgument(object, int id=QMetaType.Int)");


pyqt4ClassTypeDef sipTypeDef_QtDBus_QDBusArgument = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDBusArgument,
        {0}
    },
    {
        sipNameNr_QDBusArgument,
        {0, 0, 1},
        9, methods_QDBusArgument,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusArgument,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDBusArgument,
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
    dealloc_QDBusArgument,
    assign_QDBusArgument,
    array_QDBusArgument,
    copy_QDBusArgument,
    release_QDBusArgument,
    cast_QDBusArgument,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
