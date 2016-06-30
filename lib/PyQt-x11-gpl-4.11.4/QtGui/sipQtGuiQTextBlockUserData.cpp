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

#line 281 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlockUserData.cpp"



class sipQTextBlockUserData : public QTextBlockUserData
{
public:
    sipQTextBlockUserData();
    sipQTextBlockUserData(const QTextBlockUserData&);
    ~sipQTextBlockUserData();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextBlockUserData(const sipQTextBlockUserData &);
    sipQTextBlockUserData &operator = (const sipQTextBlockUserData &);
};

sipQTextBlockUserData::sipQTextBlockUserData(): QTextBlockUserData(), sipPySelf(0)
{
}

sipQTextBlockUserData::sipQTextBlockUserData(const QTextBlockUserData& a0): QTextBlockUserData(a0), sipPySelf(0)
{
}

sipQTextBlockUserData::~sipQTextBlockUserData()
{
    sipCommonDtor(sipPySelf);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextBlockUserData(void *, const sipTypeDef *);}
static void *cast_QTextBlockUserData(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextBlockUserData)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlockUserData(void *, int);}
static void release_QTextBlockUserData(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextBlockUserData *>(sipCppV);
    else
        delete reinterpret_cast<QTextBlockUserData *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBlockUserData(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBlockUserData(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBlockUserData *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBlockUserData *>(sipSrc);
}


extern "C" {static void *array_QTextBlockUserData(SIP_SSIZE_T);}
static void *array_QTextBlockUserData(SIP_SSIZE_T sipNrElem)
{
    return new QTextBlockUserData[sipNrElem];
}


extern "C" {static void *copy_QTextBlockUserData(const void *, SIP_SSIZE_T);}
static void *copy_QTextBlockUserData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBlockUserData(reinterpret_cast<const QTextBlockUserData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlockUserData(sipSimpleWrapper *);}
static void dealloc_QTextBlockUserData(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextBlockUserData *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBlockUserData(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTextBlockUserData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlockUserData(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextBlockUserData *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTextBlockUserData();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTextBlockUserData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBlockUserData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTextBlockUserData(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QTextBlockUserData, "\1QTextBlockUserData()\n"
    "QTextBlockUserData(QTextBlockUserData)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextBlockUserData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBlockUserData,
        {0}
    },
    {
        sipNameNr_QTextBlockUserData,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBlockUserData,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QTextBlockUserData,
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
    dealloc_QTextBlockUserData,
    assign_QTextBlockUserData,
    array_QTextBlockUserData,
    copy_QTextBlockUserData,
    release_QTextBlockUserData,
    cast_QTextBlockUserData,
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
