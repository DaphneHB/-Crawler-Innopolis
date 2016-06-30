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

#line 2043 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBoxV2.cpp"

#line 1248 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBoxV2.cpp"
#line 32 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBoxV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolBoxV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolBoxV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionToolBoxV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionToolBox)->ctd_cast((QStyleOptionToolBox *)(QStyleOptionToolBoxV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBoxV2(void *, int);}
static void release_QStyleOptionToolBoxV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolBoxV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolBoxV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolBoxV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolBoxV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolBoxV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBoxV2(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBoxV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolBoxV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBoxV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBoxV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolBoxV2(reinterpret_cast<const QStyleOptionToolBoxV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBoxV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBoxV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolBoxV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolBoxV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolBoxV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolBoxV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolBoxV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolBoxV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolBox, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBoxV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolBoxV2[] = {{595, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolBoxV2[] = {
    {sipName_Beginning, static_cast<int>(QStyleOptionToolBoxV2::Beginning), 601},
    {sipName_End, static_cast<int>(QStyleOptionToolBoxV2::End), 601},
    {sipName_Middle, static_cast<int>(QStyleOptionToolBoxV2::Middle), 601},
    {sipName_NextIsSelected, static_cast<int>(QStyleOptionToolBoxV2::NextIsSelected), 599},
    {sipName_NotAdjacent, static_cast<int>(QStyleOptionToolBoxV2::NotAdjacent), 599},
    {sipName_OnlyOneTab, static_cast<int>(QStyleOptionToolBoxV2::OnlyOneTab), 601},
    {sipName_PreviousIsSelected, static_cast<int>(QStyleOptionToolBoxV2::PreviousIsSelected), 599},
    {sipName_Version, static_cast<int>(QStyleOptionToolBoxV2::Version), 600},
};


extern "C" {static PyObject *varget_QStyleOptionToolBoxV2_position(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBoxV2_position(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionToolBoxV2::TabPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = sipCpp->position;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBoxV2_TabPosition);
}


extern "C" {static int varset_QStyleOptionToolBoxV2_position(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBoxV2_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBoxV2::TabPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = (QStyleOptionToolBoxV2::TabPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBoxV2_selectedPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBoxV2_selectedPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionToolBoxV2::SelectedPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = sipCpp->selectedPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBoxV2_SelectedPosition);
}


extern "C" {static int varset_QStyleOptionToolBoxV2_selectedPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBoxV2_selectedPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBoxV2::SelectedPosition sipVal;
    QStyleOptionToolBoxV2 *sipCpp = reinterpret_cast<QStyleOptionToolBoxV2 *>(sipSelf);

    sipVal = (QStyleOptionToolBoxV2::SelectedPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->selectedPosition = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolBoxV2[] = {
    {InstanceVariable, sipName_position, (PyMethodDef *)varget_QStyleOptionToolBoxV2_position, (PyMethodDef *)varset_QStyleOptionToolBoxV2_position, NULL, NULL},
    {InstanceVariable, sipName_selectedPosition, (PyMethodDef *)varget_QStyleOptionToolBoxV2_selectedPosition, (PyMethodDef *)varset_QStyleOptionToolBoxV2_selectedPosition, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionToolBoxV2, "\1QStyleOptionToolBoxV2()\n"
    "QStyleOptionToolBoxV2(QStyleOptionToolBoxV2)\n"
    "QStyleOptionToolBoxV2(QStyleOptionToolBox)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolBoxV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBoxV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolBoxV2,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionToolBoxV2,
        2, variables_QStyleOptionToolBoxV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolBoxV2,
    -1,
    -1,
    supers_QStyleOptionToolBoxV2,
    0,
    init_type_QStyleOptionToolBoxV2,
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
    dealloc_QStyleOptionToolBoxV2,
    assign_QStyleOptionToolBoxV2,
    array_QStyleOptionToolBoxV2,
    copy_QStyleOptionToolBoxV2,
    release_QStyleOptionToolBoxV2,
    cast_QStyleOptionToolBoxV2,
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
