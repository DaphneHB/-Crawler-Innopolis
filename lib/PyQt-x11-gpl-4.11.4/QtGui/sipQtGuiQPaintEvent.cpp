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

#line 528 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQPaintEvent.cpp"

#line 30 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQPaintEvent.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQPaintEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQPaintEvent.cpp"


class sipQPaintEvent : public QPaintEvent
{
public:
    sipQPaintEvent(const QRegion&);
    sipQPaintEvent(const QRect&);
    sipQPaintEvent(const QPaintEvent&);
    ~sipQPaintEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPaintEvent(const sipQPaintEvent &);
    sipQPaintEvent &operator = (const sipQPaintEvent &);
};

sipQPaintEvent::sipQPaintEvent(const QRegion& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const QRect& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::sipQPaintEvent(const QPaintEvent& a0): QPaintEvent(a0), sipPySelf(0)
{
}

sipQPaintEvent::~sipQPaintEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QPaintEvent_rect, "QPaintEvent.rect() -> QRect");

extern "C" {static PyObject *meth_QPaintEvent_rect(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEvent, &sipCpp))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->rect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEvent, sipName_rect, doc_QPaintEvent_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEvent_region, "QPaintEvent.region() -> QRegion");

extern "C" {static PyObject *meth_QPaintEvent_region(PyObject *, PyObject *);}
static PyObject *meth_QPaintEvent_region(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEvent, &sipCpp))
        {
            QRegion*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->region());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEvent, sipName_region, doc_QPaintEvent_region);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPaintEvent(void *, const sipTypeDef *);}
static void *cast_QPaintEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPaintEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QPaintEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEvent(void *, int);}
static void release_QPaintEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPaintEvent *>(sipCppV);
    else
        delete reinterpret_cast<QPaintEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPaintEvent(sipSimpleWrapper *);}
static void dealloc_QPaintEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPaintEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPaintEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPaintEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPaintEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPaintEvent *sipCpp = 0;

    {
        const QRegion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegion, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QRect* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPaintEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPaintEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPaintEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPaintEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QPaintEvent[] = {
    {SIP_MLNAME_CAST(sipName_rect), meth_QPaintEvent_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEvent_rect)},
    {SIP_MLNAME_CAST(sipName_region), meth_QPaintEvent_region, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEvent_region)}
};

PyDoc_STRVAR(doc_QPaintEvent, "\1QPaintEvent(QRegion)\n"
    "QPaintEvent(QRect)\n"
    "QPaintEvent(QPaintEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QPaintEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPaintEvent,
        {0}
    },
    {
        sipNameNr_QPaintEvent,
        {0, 0, 1},
        2, methods_QPaintEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPaintEvent,
    -1,
    -1,
    supers_QPaintEvent,
    0,
    init_type_QPaintEvent,
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
    dealloc_QPaintEvent,
    0,
    0,
    0,
    release_QPaintEvent,
    cast_QPaintEvent,
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
