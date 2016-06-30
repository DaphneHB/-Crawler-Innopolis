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

#line 30 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qmessagebox.sip"
#include <qmessagebox.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"

#line 30 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qmessagebox.sip"
#include <qmessagebox.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"


extern "C" {static int slot_QMessageBox_StandardButtons___bool__(PyObject *);}
static int slot_QMessageBox_StandardButtons___bool__(PyObject *sipSelf)
{
    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMessageBox::StandardButtons::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMessageBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMessageBox::StandardButtons::Int() != a0->operator QMessageBox::StandardButtons::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"
            sipReleaseType(const_cast<QMessageBox::StandardButtons *>(a0),sipType_QMessageBox_StandardButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMessageBox_StandardButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMessageBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMessageBox::StandardButtons::Int() == a0->operator QMessageBox::StandardButtons::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"
            sipReleaseType(const_cast<QMessageBox::StandardButtons *>(a0),sipType_QMessageBox_StandardButtons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMessageBox_StandardButtons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___invert__(PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___invert__(PyObject *sipSelf)
{
    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;


    {
        {
            QMessageBox::StandardButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMessageBox::StandardButtons(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___and__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMessageBox_StandardButtons, &a0, &a0State, &a1))
        {
            QMessageBox::StandardButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMessageBox::StandardButtons((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;
        QMessageBox::StandardButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State, sipType_QMessageBox_StandardButtons, &a1, &a1State))
        {
            QMessageBox::StandardButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMessageBox::StandardButtons((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);
            sipReleaseType(a1,sipType_QMessageBox_StandardButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMessageBox_StandardButtons, &a0, &a0State, &a1))
        {
            QMessageBox::StandardButtons*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QMessageBox::StandardButtons(*a0 ^ a1);
#line 238 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___or__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;
        QMessageBox::StandardButtons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State, sipType_QMessageBox_StandardButtons, &a1, &a1State))
        {
            QMessageBox::StandardButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMessageBox::StandardButtons((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);
            sipReleaseType(a1,sipType_QMessageBox_StandardButtons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMessageBox_StandardButtons, &a0, &a0State, &a1))
        {
            QMessageBox::StandardButtons*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QMessageBox::StandardButtons(*a0 | a1);
#line 290 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMessageBox_StandardButtons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___int__(PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___int__(PyObject *sipSelf)
{
    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMessageBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMessageBox::StandardButtons::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMessageBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMessageBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMessageBox_StandardButtons, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMessageBox::StandardButtons::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMessageBox_StandardButtons,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMessageBox_StandardButtons___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMessageBox_StandardButtons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMessageBox_StandardButtons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMessageBox::StandardButtons *sipCpp = reinterpret_cast<QMessageBox::StandardButtons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMessageBox_StandardButtons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMessageBox::StandardButtons::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMessageBox_StandardButtons(void *, const sipTypeDef *);}
static void *cast_QMessageBox_StandardButtons(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMessageBox_StandardButtons)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMessageBox_StandardButtons(void *, int);}
static void release_QMessageBox_StandardButtons(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMessageBox::StandardButtons *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMessageBox_StandardButtons(void *, SIP_SSIZE_T, const void *);}
static void assign_QMessageBox_StandardButtons(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMessageBox::StandardButtons *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMessageBox::StandardButtons *>(sipSrc);
}


extern "C" {static void *array_QMessageBox_StandardButtons(SIP_SSIZE_T);}
static void *array_QMessageBox_StandardButtons(SIP_SSIZE_T sipNrElem)
{
    return new QMessageBox::StandardButtons[sipNrElem];
}


extern "C" {static void *copy_QMessageBox_StandardButtons(const void *, SIP_SSIZE_T);}
static void *copy_QMessageBox_StandardButtons(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMessageBox::StandardButtons(reinterpret_cast<const QMessageBox::StandardButtons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMessageBox_StandardButtons(sipSimpleWrapper *);}
static void dealloc_QMessageBox_StandardButtons(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMessageBox_StandardButtons(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMessageBox_StandardButtons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMessageBox_StandardButtons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMessageBox::StandardButtons *sipCpp = 0;

    {
        const QMessageBox::StandardButtons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMessageBox_StandardButtons, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMessageBox::StandardButtons(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QMessageBox::StandardButtons *>(a0),sipType_QMessageBox_StandardButtons,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMessageBox::StandardButtons(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMessageBox::StandardButtons();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMessageBox_StandardButtons(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMessageBox_StandardButtons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMessageBox::StandardButtons **sipCppPtr = reinterpret_cast<QMessageBox::StandardButtons **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMessageBox::StandardButtons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMessageBox_StandardButton)) ||
            sipCanConvertToType(sipPy, sipType_QMessageBox_StandardButtons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMessageBox_StandardButton)))
{
    *sipCppPtr = new QMessageBox::StandardButtons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMessageBox::StandardButtons *>(sipConvertToType(sipPy, sipType_QMessageBox_StandardButtons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 585 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQMessageBoxStandardButtons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMessageBox_StandardButtons[] = {
    {(void *)slot_QMessageBox_StandardButtons___bool__, bool_slot},
    {(void *)slot_QMessageBox_StandardButtons___ne__, ne_slot},
    {(void *)slot_QMessageBox_StandardButtons___eq__, eq_slot},
    {(void *)slot_QMessageBox_StandardButtons___invert__, invert_slot},
    {(void *)slot_QMessageBox_StandardButtons___and__, and_slot},
    {(void *)slot_QMessageBox_StandardButtons___xor__, xor_slot},
    {(void *)slot_QMessageBox_StandardButtons___or__, or_slot},
    {(void *)slot_QMessageBox_StandardButtons___int__, int_slot},
    {(void *)slot_QMessageBox_StandardButtons___ixor__, ixor_slot},
    {(void *)slot_QMessageBox_StandardButtons___ior__, ior_slot},
    {(void *)slot_QMessageBox_StandardButtons___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMessageBox_StandardButtons, "\1QMessageBox.StandardButtons(QMessageBox.StandardButtons)\n"
    "QMessageBox.StandardButtons(int)\n"
    "QMessageBox.StandardButtons()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMessageBox_StandardButtons = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMessageBox__StandardButtons,
        {0}
    },
    {
        sipNameNr_StandardButtons,
        {347, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMessageBox_StandardButtons,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMessageBox_StandardButtons,
    init_type_QMessageBox_StandardButtons,
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
    dealloc_QMessageBox_StandardButtons,
    assign_QMessageBox_StandardButtons,
    array_QMessageBox_StandardButtons,
    copy_QMessageBox_StandardButtons,
    release_QMessageBox_StandardButtons,
    cast_QMessageBox_StandardButtons,
    convertTo_QMessageBox_StandardButtons,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
