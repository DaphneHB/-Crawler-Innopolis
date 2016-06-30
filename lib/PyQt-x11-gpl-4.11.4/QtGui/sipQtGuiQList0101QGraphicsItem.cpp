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

#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QGraphicsItem.cpp"

#line 34 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QGraphicsItem.cpp"


extern "C" {static void assign_QList_0101QGraphicsItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QGraphicsItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGraphicsItem*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGraphicsItem*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGraphicsItem(SIP_SSIZE_T);}
static void *array_QList_0101QGraphicsItem(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGraphicsItem*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGraphicsItem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGraphicsItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGraphicsItem*>(reinterpret_cast<const QList<QGraphicsItem*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGraphicsItem(void *, int);}
static void release_QList_0101QGraphicsItem(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QGraphicsItem*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QGraphicsItem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGraphicsItem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGraphicsItem*> **sipCppPtr = reinterpret_cast<QList<QGraphicsItem*> **>(sipCppPtrV);

#line 145 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QGraphicsItem, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QGraphicsItem *> *ql = new QList<QGraphicsItem *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QGraphicsItem *t = reinterpret_cast<QGraphicsItem *>(sipConvertToType(itm, sipType_QGraphicsItem, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 118 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QGraphicsItem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGraphicsItem(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGraphicsItem(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGraphicsItem*> *sipCpp = reinterpret_cast<QList<QGraphicsItem*> *>(sipCppV);

#line 119 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGraphicsItem *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QGraphicsItem to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QGraphicsItem, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 151 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QGraphicsItem.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QGraphicsItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_22255,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QGraphicsItem,
    array_QList_0101QGraphicsItem,
    copy_QList_0101QGraphicsItem,
    release_QList_0101QGraphicsItem,
    convertTo_QList_0101QGraphicsItem,
    convertFrom_QList_0101QGraphicsItem
};
