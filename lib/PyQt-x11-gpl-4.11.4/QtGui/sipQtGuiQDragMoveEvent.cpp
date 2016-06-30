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

#line 769 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 51 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 32 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 57 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDragMoveEvent.cpp"


class sipQDragMoveEvent : public QDragMoveEvent
{
public:
    sipQDragMoveEvent(const QPoint&,Qt::DropActions,const QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers,QEvent::Type);
    sipQDragMoveEvent(const QDragMoveEvent&);
    virtual ~sipQDragMoveEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool provides(const char*) const;
    QByteArray encodedData(const char*) const;
    const char* format(int) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDragMoveEvent(const sipQDragMoveEvent &);
    sipQDragMoveEvent &operator = (const sipQDragMoveEvent &);

    char sipPyMethods[3];
};

sipQDragMoveEvent::sipQDragMoveEvent(const QPoint& a0,Qt::DropActions a1,const QMimeData*a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4,QEvent::Type a5): QDragMoveEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDragMoveEvent::sipQDragMoveEvent(const QDragMoveEvent& a0): QDragMoveEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDragMoveEvent::~sipQDragMoveEvent()
{
    sipCommonDtor(sipPySelf);
}

bool sipQDragMoveEvent::provides(const char*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_provides);

    if (!sipMeth)
        return QDragMoveEvent::provides(a0);

    extern bool sipVH_QtGui_145(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    return sipVH_QtGui_145(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QByteArray sipQDragMoveEvent::encodedData(const char*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_encodedData);

    if (!sipMeth)
        return QDragMoveEvent::encodedData(a0);

    extern QByteArray sipVH_QtGui_144(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    return sipVH_QtGui_144(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipQDragMoveEvent::format(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_format);

    if (!sipMeth)
        return QDragMoveEvent::format(a0);

    extern const char* sipVH_QtGui_146(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int, int);

    return sipVH_QtGui_146(sipGILState, 0, sipPySelf, sipMeth, a0, -153);
}


PyDoc_STRVAR(doc_QDragMoveEvent_answerRect, "QDragMoveEvent.answerRect() -> QRect");

extern "C" {static PyObject *meth_QDragMoveEvent_answerRect(PyObject *, PyObject *);}
static PyObject *meth_QDragMoveEvent_answerRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDragMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragMoveEvent, &sipCpp))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->answerRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragMoveEvent, sipName_answerRect, doc_QDragMoveEvent_answerRect);

    return NULL;
}


PyDoc_STRVAR(doc_QDragMoveEvent_accept, "QDragMoveEvent.accept()\n"
    "QDragMoveEvent.accept(QRect)");

extern "C" {static PyObject *meth_QDragMoveEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QDragMoveEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragMoveEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->accept();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRect* a0;
        QDragMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDragMoveEvent, &sipCpp, sipType_QRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->accept(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragMoveEvent, sipName_accept, doc_QDragMoveEvent_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QDragMoveEvent_ignore, "QDragMoveEvent.ignore()\n"
    "QDragMoveEvent.ignore(QRect)");

extern "C" {static PyObject *meth_QDragMoveEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QDragMoveEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDragMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDragMoveEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->ignore();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRect* a0;
        QDragMoveEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDragMoveEvent, &sipCpp, sipType_QRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->ignore(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDragMoveEvent, sipName_ignore, doc_QDragMoveEvent_ignore);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDragMoveEvent(void *, const sipTypeDef *);}
static void *cast_QDragMoveEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDragMoveEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDropEvent)->ctd_cast((QDropEvent *)(QDragMoveEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDragMoveEvent(void *, int);}
static void release_QDragMoveEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDragMoveEvent *>(sipCppV);
    else
        delete reinterpret_cast<QDragMoveEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDragMoveEvent(sipSimpleWrapper *);}
static void dealloc_QDragMoveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDragMoveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDragMoveEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDragMoveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDragMoveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDragMoveEvent *sipCpp = 0;

    {
        const QPoint* a0;
        Qt::DropActions* a1;
        int a1State = 0;
        const QMimeData* a2;
        Qt::MouseButtons* a3;
        int a3State = 0;
        Qt::KeyboardModifiers* a4;
        int a4State = 0;
        QEvent::Type a5 = QEvent::DragMove;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J1J8J1J1|E", sipType_QPoint, &a0, sipType_Qt_DropActions, &a1, &a1State, sipType_QMimeData, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State, sipType_QEvent_Type, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDragMoveEvent(*a0,*a1,a2,*a3,*a4,a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDragMoveEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDragMoveEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDragMoveEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDragMoveEvent[] = {{103, 255, 1}};


static PyMethodDef methods_QDragMoveEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QDragMoveEvent_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QDragMoveEvent_accept)},
    {SIP_MLNAME_CAST(sipName_answerRect), meth_QDragMoveEvent_answerRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QDragMoveEvent_answerRect)},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QDragMoveEvent_ignore, METH_VARARGS, SIP_MLDOC_CAST(doc_QDragMoveEvent_ignore)}
};

PyDoc_STRVAR(doc_QDragMoveEvent, "\1QDragMoveEvent(QPoint, Qt.DropActions, QMimeData, Qt.MouseButtons, Qt.KeyboardModifiers, QEvent.Type type=QEvent.DragMove)\n"
    "QDragMoveEvent(QDragMoveEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QDragMoveEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDragMoveEvent,
        {0}
    },
    {
        sipNameNr_QDragMoveEvent,
        {0, 0, 1},
        3, methods_QDragMoveEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDragMoveEvent,
    -1,
    -1,
    supers_QDragMoveEvent,
    0,
    init_type_QDragMoveEvent,
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
    dealloc_QDragMoveEvent,
    0,
    0,
    0,
    release_QDragMoveEvent,
    cast_QDragMoveEvent,
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
