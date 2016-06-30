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

#line 30 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 31 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextEditExtraSelection.cpp"

#line 26 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 35 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextEditExtraSelection.cpp"
#line 340 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 38 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextEditExtraSelection.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextEdit_ExtraSelection(void *, const sipTypeDef *);}
static void *cast_QTextEdit_ExtraSelection(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextEdit_ExtraSelection)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextEdit_ExtraSelection(void *, int);}
static void release_QTextEdit_ExtraSelection(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextEdit::ExtraSelection *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextEdit_ExtraSelection(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextEdit_ExtraSelection(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextEdit::ExtraSelection *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextEdit::ExtraSelection *>(sipSrc);
}


extern "C" {static void *array_QTextEdit_ExtraSelection(SIP_SSIZE_T);}
static void *array_QTextEdit_ExtraSelection(SIP_SSIZE_T sipNrElem)
{
    return new QTextEdit::ExtraSelection[sipNrElem];
}


extern "C" {static void *copy_QTextEdit_ExtraSelection(const void *, SIP_SSIZE_T);}
static void *copy_QTextEdit_ExtraSelection(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextEdit::ExtraSelection(reinterpret_cast<const QTextEdit::ExtraSelection *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextEdit_ExtraSelection(sipSimpleWrapper *);}
static void dealloc_QTextEdit_ExtraSelection(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextEdit_ExtraSelection(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextEdit_ExtraSelection(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextEdit_ExtraSelection(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextEdit::ExtraSelection *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::ExtraSelection();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextEdit::ExtraSelection* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextEdit_ExtraSelection, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::ExtraSelection(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QTextEdit_ExtraSelection_cursor(void *, PyObject *, PyObject *);}
static PyObject *varget_QTextEdit_ExtraSelection_cursor(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QTextCursor*sipVal;
    QTextEdit::ExtraSelection *sipCpp = reinterpret_cast<QTextEdit::ExtraSelection *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -78);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->cursor;

    sipPy = sipConvertFromType(sipVal, sipType_QTextCursor, NULL);
    sipKeepReference(sipPySelf, -78, sipPy);

    return sipPy;
}


extern "C" {static int varset_QTextEdit_ExtraSelection_cursor(void *, PyObject *, PyObject *);}
static int varset_QTextEdit_ExtraSelection_cursor(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTextCursor*sipVal;
    QTextEdit::ExtraSelection *sipCpp = reinterpret_cast<QTextEdit::ExtraSelection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QTextCursor *>(sipForceConvertToType(sipPy,sipType_QTextCursor,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->cursor = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QTextEdit_ExtraSelection_format(void *, PyObject *, PyObject *);}
static PyObject *varget_QTextEdit_ExtraSelection_format(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QTextCharFormat*sipVal;
    QTextEdit::ExtraSelection *sipCpp = reinterpret_cast<QTextEdit::ExtraSelection *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -79);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->format;

    sipPy = sipConvertFromType(sipVal, sipType_QTextCharFormat, NULL);
    sipKeepReference(sipPySelf, -79, sipPy);

    return sipPy;
}


extern "C" {static int varset_QTextEdit_ExtraSelection_format(void *, PyObject *, PyObject *);}
static int varset_QTextEdit_ExtraSelection_format(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTextCharFormat*sipVal;
    QTextEdit::ExtraSelection *sipCpp = reinterpret_cast<QTextEdit::ExtraSelection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QTextCharFormat *>(sipForceConvertToType(sipPy,sipType_QTextCharFormat,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->format = *sipVal;

    return 0;
}

sipVariableDef variables_QTextEdit_ExtraSelection[] = {
    {InstanceVariable, sipName_cursor, (PyMethodDef *)varget_QTextEdit_ExtraSelection_cursor, (PyMethodDef *)varset_QTextEdit_ExtraSelection_cursor, NULL, NULL},
    {InstanceVariable, sipName_format, (PyMethodDef *)varget_QTextEdit_ExtraSelection_format, (PyMethodDef *)varset_QTextEdit_ExtraSelection_format, NULL, NULL},
};

PyDoc_STRVAR(doc_QTextEdit_ExtraSelection, "\1QTextEdit.ExtraSelection()\n"
    "QTextEdit.ExtraSelection(QTextEdit.ExtraSelection)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextEdit_ExtraSelection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEdit__ExtraSelection,
        {0}
    },
    {
        sipNameNr_ExtraSelection,
        {667, 255, 0},
        0, 0,
        0, 0,
        2, variables_QTextEdit_ExtraSelection,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextEdit_ExtraSelection,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextEdit_ExtraSelection,
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
    dealloc_QTextEdit_ExtraSelection,
    assign_QTextEdit_ExtraSelection,
    array_QTextEdit_ExtraSelection,
    copy_QTextEdit_ExtraSelection,
    release_QTextEdit_ExtraSelection,
    cast_QTextEdit_ExtraSelection,
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
