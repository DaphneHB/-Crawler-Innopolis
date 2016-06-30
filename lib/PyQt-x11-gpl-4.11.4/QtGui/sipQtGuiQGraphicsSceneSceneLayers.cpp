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

#line 34 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"

#line 34 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"


extern "C" {static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *);}
static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != a0->operator QGraphicsScene::SceneLayers::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsScene_SceneLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() == a0->operator QGraphicsScene::SceneLayers::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsScene_SceneLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsScene::SceneLayers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsScene::SceneLayers(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsScene::SceneLayers((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        QGraphicsScene::SceneLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, sipType_QGraphicsScene_SceneLayers, &a1, &a1State))
        {
            QGraphicsScene::SceneLayers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsScene::SceneLayers((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);
            sipReleaseType(a1,sipType_QGraphicsScene_SceneLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsScene::SceneLayers(*a0 ^ a1);
#line 238 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        QGraphicsScene::SceneLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, sipType_QGraphicsScene_SceneLayers, &a1, &a1State))
        {
            QGraphicsScene::SceneLayers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsScene::SceneLayers((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);
            sipReleaseType(a1,sipType_QGraphicsScene_SceneLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsScene::SceneLayers(*a0 | a1);
#line 290 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsScene::SceneLayers::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsScene::SceneLayers::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsScene::SceneLayers::operator&=(a0);
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
extern "C" {static void *cast_QGraphicsScene_SceneLayers(void *, const sipTypeDef *);}
static void *cast_QGraphicsScene_SceneLayers(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsScene_SceneLayers)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsScene_SceneLayers(void *, int);}
static void release_QGraphicsScene_SceneLayers(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsScene::SceneLayers *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsScene_SceneLayers(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsScene_SceneLayers(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsScene::SceneLayers *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsScene::SceneLayers *>(sipSrc);
}


extern "C" {static void *array_QGraphicsScene_SceneLayers(SIP_SSIZE_T);}
static void *array_QGraphicsScene_SceneLayers(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsScene::SceneLayers[sipNrElem];
}


extern "C" {static void *copy_QGraphicsScene_SceneLayers(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsScene_SceneLayers(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsScene::SceneLayers(reinterpret_cast<const QGraphicsScene::SceneLayers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *);}
static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsScene_SceneLayers(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsScene::SceneLayers *sipCpp = 0;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsScene::SceneLayers(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsScene::SceneLayers(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsScene::SceneLayers();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsScene_SceneLayers(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsScene_SceneLayers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsScene::SceneLayers **sipCppPtr = reinterpret_cast<QGraphicsScene::SceneLayers **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsScene::SceneLayers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)))
{
    *sipCppPtr = new QGraphicsScene::SceneLayers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 585 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneSceneLayers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsScene_SceneLayers[] = {
    {(void *)slot_QGraphicsScene_SceneLayers___bool__, bool_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ne__, ne_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___eq__, eq_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___invert__, invert_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___and__, and_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___xor__, xor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___or__, or_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___int__, int_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ixor__, ixor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ior__, ior_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsScene_SceneLayers, "\1QGraphicsScene.SceneLayers(QGraphicsScene.SceneLayers)\n"
    "QGraphicsScene.SceneLayers(int)\n"
    "QGraphicsScene.SceneLayers()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsScene_SceneLayers = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsScene__SceneLayers,
        {0}
    },
    {
        sipNameNr_SceneLayers,
        {193, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsScene_SceneLayers,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsScene_SceneLayers,
    init_type_QGraphicsScene_SceneLayers,
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
    dealloc_QGraphicsScene_SceneLayers,
    assign_QGraphicsScene_SceneLayers,
    array_QGraphicsScene_SceneLayers,
    copy_QGraphicsScene_SceneLayers,
    release_QGraphicsScene_SceneLayers,
    cast_QGraphicsScene_SceneLayers,
    convertTo_QGraphicsScene_SceneLayers,
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
