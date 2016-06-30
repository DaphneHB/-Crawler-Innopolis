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

#line 351 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQWheelEvent.cpp"


class sipQWheelEvent : public QWheelEvent
{
public:
    sipQWheelEvent(const QPoint&,int,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::Orientation);
    sipQWheelEvent(const QPoint&,const QPoint&,int,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::Orientation);
    sipQWheelEvent(const QWheelEvent&);
    ~sipQWheelEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWheelEvent(const sipQWheelEvent &);
    sipQWheelEvent &operator = (const sipQWheelEvent &);
};

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,int a1,Qt::MouseButtons a2,Qt::KeyboardModifiers a3,Qt::Orientation a4): QWheelEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QPoint& a0,const QPoint& a1,int a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4,Qt::Orientation a5): QWheelEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQWheelEvent::sipQWheelEvent(const QWheelEvent& a0): QWheelEvent(a0), sipPySelf(0)
{
}

sipQWheelEvent::~sipQWheelEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QWheelEvent_delta, "QWheelEvent.delta() -> int");

extern "C" {static PyObject *meth_QWheelEvent_delta(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_delta(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->delta();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_delta, doc_QWheelEvent_delta);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_pos, "QWheelEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QWheelEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_pos, doc_QWheelEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_globalPos, "QWheelEvent.globalPos() -> QPoint");

extern "C" {static PyObject *meth_QWheelEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalPos, doc_QWheelEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_x, "QWheelEvent.x() -> int");

extern "C" {static PyObject *meth_QWheelEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_x, doc_QWheelEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_y, "QWheelEvent.y() -> int");

extern "C" {static PyObject *meth_QWheelEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_y, doc_QWheelEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_globalX, "QWheelEvent.globalX() -> int");

extern "C" {static PyObject *meth_QWheelEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalX, doc_QWheelEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_globalY, "QWheelEvent.globalY() -> int");

extern "C" {static PyObject *meth_QWheelEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_globalY, doc_QWheelEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_buttons, "QWheelEvent.buttons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QWheelEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_buttons, doc_QWheelEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QWheelEvent_orientation, "QWheelEvent.orientation() -> Qt.Orientation");

extern "C" {static PyObject *meth_QWheelEvent_orientation(PyObject *, PyObject *);}
static PyObject *meth_QWheelEvent_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWheelEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWheelEvent, &sipCpp))
        {
            Qt::Orientation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->orientation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWheelEvent, sipName_orientation, doc_QWheelEvent_orientation);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWheelEvent(void *, const sipTypeDef *);}
static void *cast_QWheelEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWheelEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QInputEvent)->ctd_cast((QInputEvent *)(QWheelEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWheelEvent(void *, int);}
static void release_QWheelEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWheelEvent *>(sipCppV);
    else
        delete reinterpret_cast<QWheelEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWheelEvent(sipSimpleWrapper *);}
static void dealloc_QWheelEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWheelEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWheelEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QWheelEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWheelEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWheelEvent *sipCpp = 0;

    {
        const QPoint* a0;
        int a1;
        Qt::MouseButtons* a2;
        int a2State = 0;
        Qt::KeyboardModifiers* a3;
        int a3State = 0;
        Qt::Orientation a4 = Qt::Vertical;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_orientation,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9iJ1J1|E", sipType_QPoint, &a0, &a1, sipType_Qt_MouseButtons, &a2, &a2State, sipType_Qt_KeyboardModifiers, &a3, &a3State, sipType_Qt_Orientation, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0,a1,*a2,*a3,a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_Qt_MouseButtons,a2State);
            sipReleaseType(a3,sipType_Qt_KeyboardModifiers,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPoint* a0;
        const QPoint* a1;
        int a2;
        Qt::MouseButtons* a3;
        int a3State = 0;
        Qt::KeyboardModifiers* a4;
        int a4State = 0;
        Qt::Orientation a5 = Qt::Vertical;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_orientation,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9iJ1J1|E", sipType_QPoint, &a0, sipType_QPoint, &a1, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State, sipType_Qt_Orientation, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0,*a1,a2,*a3,*a4,a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QWheelEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWheelEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWheelEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWheelEvent[] = {{252, 255, 1}};


static PyMethodDef methods_QWheelEvent[] = {
    {SIP_MLNAME_CAST(sipName_buttons), meth_QWheelEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_delta), meth_QWheelEvent_delta, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_delta)},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QWheelEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QWheelEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QWheelEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QWheelEvent_orientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_orientation)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QWheelEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_pos)},
    {SIP_MLNAME_CAST(sipName_x), meth_QWheelEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QWheelEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QWheelEvent_y)}
};

PyDoc_STRVAR(doc_QWheelEvent, "\1QWheelEvent(QPoint, int, Qt.MouseButtons, Qt.KeyboardModifiers, Qt.Orientation orientation=Qt.Vertical)\n"
    "QWheelEvent(QPoint, QPoint, int, Qt.MouseButtons, Qt.KeyboardModifiers, Qt.Orientation orientation=Qt.Vertical)\n"
    "QWheelEvent(QWheelEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QWheelEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWheelEvent,
        {0}
    },
    {
        sipNameNr_QWheelEvent,
        {0, 0, 1},
        9, methods_QWheelEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWheelEvent,
    -1,
    -1,
    supers_QWheelEvent,
    0,
    init_type_QWheelEvent,
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
    dealloc_QWheelEvent,
    0,
    0,
    0,
    release_QWheelEvent,
    cast_QWheelEvent,
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
