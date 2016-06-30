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

#include "sipAPIQtNetwork.h"

#line 70 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 30 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 45 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 34 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 48 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"
#line 70 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 51 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterface.cpp"


PyDoc_STRVAR(doc_QNetworkInterface_isValid, "QNetworkInterface.isValid() -> bool");

extern "C" {static PyObject *meth_QNetworkInterface_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_isValid, doc_QNetworkInterface_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_name, "QNetworkInterface.name() -> QString");

extern "C" {static PyObject *meth_QNetworkInterface_name(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_name, doc_QNetworkInterface_name);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_flags, "QNetworkInterface.flags() -> QNetworkInterface.InterfaceFlags");

extern "C" {static PyObject *meth_QNetworkInterface_flags(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            QNetworkInterface::InterfaceFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface::InterfaceFlags(sipCpp->flags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_flags, doc_QNetworkInterface_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_hardwareAddress, "QNetworkInterface.hardwareAddress() -> QString");

extern "C" {static PyObject *meth_QNetworkInterface_hardwareAddress(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_hardwareAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->hardwareAddress());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_hardwareAddress, doc_QNetworkInterface_hardwareAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_addressEntries, "QNetworkInterface.addressEntries() -> list-of-QNetworkAddressEntry");

extern "C" {static PyObject *meth_QNetworkInterface_addressEntries(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_addressEntries(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            QList<QNetworkAddressEntry>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkAddressEntry>(sipCpp->addressEntries());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkAddressEntry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_addressEntries, doc_QNetworkInterface_addressEntries);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_interfaceFromName, "QNetworkInterface.interfaceFromName(QString) -> QNetworkInterface");

extern "C" {static PyObject *meth_QNetworkInterface_interfaceFromName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_interfaceFromName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QNetworkInterface*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface(QNetworkInterface::interfaceFromName(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_interfaceFromName, doc_QNetworkInterface_interfaceFromName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_interfaceFromIndex, "QNetworkInterface.interfaceFromIndex(int) -> QNetworkInterface");

extern "C" {static PyObject *meth_QNetworkInterface_interfaceFromIndex(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_interfaceFromIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QNetworkInterface*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface(QNetworkInterface::interfaceFromIndex(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_interfaceFromIndex, doc_QNetworkInterface_interfaceFromIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_allInterfaces, "QNetworkInterface.allInterfaces() -> list-of-QNetworkInterface");

extern "C" {static PyObject *meth_QNetworkInterface_allInterfaces(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_allInterfaces(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QNetworkInterface>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkInterface>(QNetworkInterface::allInterfaces());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_allInterfaces, doc_QNetworkInterface_allInterfaces);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_allAddresses, "QNetworkInterface.allAddresses() -> list-of-QHostAddress");

extern "C" {static PyObject *meth_QNetworkInterface_allAddresses(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_allAddresses(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QHostAddress>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QHostAddress>(QNetworkInterface::allAddresses());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QHostAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_allAddresses, doc_QNetworkInterface_allAddresses);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_index, "QNetworkInterface.index() -> int");

extern "C" {static PyObject *meth_QNetworkInterface_index(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->index();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_index, doc_QNetworkInterface_index);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkInterface_humanReadableName, "QNetworkInterface.humanReadableName() -> QString");

extern "C" {static PyObject *meth_QNetworkInterface_humanReadableName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkInterface_humanReadableName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkInterface, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->humanReadableName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkInterface, sipName_humanReadableName, doc_QNetworkInterface_humanReadableName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkInterface(void *, const sipTypeDef *);}
static void *cast_QNetworkInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkInterface(void *, int);}
static void release_QNetworkInterface(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkInterface(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkInterface(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkInterface *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkInterface *>(sipSrc);
}


extern "C" {static void *array_QNetworkInterface(SIP_SSIZE_T);}
static void *array_QNetworkInterface(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkInterface[sipNrElem];
}


extern "C" {static void *copy_QNetworkInterface(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkInterface(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkInterface(reinterpret_cast<const QNetworkInterface *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkInterface(sipSimpleWrapper *);}
static void dealloc_QNetworkInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkInterface(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkInterface(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkInterface();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkInterface(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QNetworkInterface[] = {
    {SIP_MLNAME_CAST(sipName_addressEntries), meth_QNetworkInterface_addressEntries, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_addressEntries)},
    {SIP_MLNAME_CAST(sipName_allAddresses), meth_QNetworkInterface_allAddresses, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_allAddresses)},
    {SIP_MLNAME_CAST(sipName_allInterfaces), meth_QNetworkInterface_allInterfaces, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_allInterfaces)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QNetworkInterface_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_flags)},
    {SIP_MLNAME_CAST(sipName_hardwareAddress), meth_QNetworkInterface_hardwareAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_hardwareAddress)},
    {SIP_MLNAME_CAST(sipName_humanReadableName), meth_QNetworkInterface_humanReadableName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_humanReadableName)},
    {SIP_MLNAME_CAST(sipName_index), meth_QNetworkInterface_index, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_index)},
    {SIP_MLNAME_CAST(sipName_interfaceFromIndex), meth_QNetworkInterface_interfaceFromIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_interfaceFromIndex)},
    {SIP_MLNAME_CAST(sipName_interfaceFromName), meth_QNetworkInterface_interfaceFromName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_interfaceFromName)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkInterface_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_isValid)},
    {SIP_MLNAME_CAST(sipName_name), meth_QNetworkInterface_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkInterface_name)}
};

static sipEnumMemberDef enummembers_QNetworkInterface[] = {
    {sipName_CanBroadcast, static_cast<int>(QNetworkInterface::CanBroadcast), 62},
    {sipName_CanMulticast, static_cast<int>(QNetworkInterface::CanMulticast), 62},
    {sipName_IsLoopBack, static_cast<int>(QNetworkInterface::IsLoopBack), 62},
    {sipName_IsPointToPoint, static_cast<int>(QNetworkInterface::IsPointToPoint), 62},
    {sipName_IsRunning, static_cast<int>(QNetworkInterface::IsRunning), 62},
    {sipName_IsUp, static_cast<int>(QNetworkInterface::IsUp), 62},
};

PyDoc_STRVAR(doc_QNetworkInterface, "\1QNetworkInterface()\n"
    "QNetworkInterface(QNetworkInterface)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkInterface,
        {0}
    },
    {
        sipNameNr_QNetworkInterface,
        {0, 0, 1},
        11, methods_QNetworkInterface,
        6, enummembers_QNetworkInterface,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkInterface,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QNetworkInterface,
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
    dealloc_QNetworkInterface,
    assign_QNetworkInterface,
    array_QNetworkInterface,
    copy_QNetworkInterface,
    release_QNetworkInterface,
    cast_QNetworkInterface,
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
