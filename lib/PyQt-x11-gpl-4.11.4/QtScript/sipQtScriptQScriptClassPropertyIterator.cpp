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

#include "sipAPIQtScript.h"

#line 28 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtScript/qscriptclasspropertyiterator.sip"
#include <qscriptclasspropertyiterator.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtScript/sipQtScriptQScriptClassPropertyIterator.cpp"

#line 40 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtScript/sipQtScriptQScriptClassPropertyIterator.cpp"
#line 40 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtScript/sipQtScriptQScriptClassPropertyIterator.cpp"
#line 28 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtScript/qscriptstring.sip"
#include <qscriptstring.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtScript/sipQtScriptQScriptClassPropertyIterator.cpp"


class sipQScriptClassPropertyIterator : public QScriptClassPropertyIterator
{
public:
    sipQScriptClassPropertyIterator(const QScriptValue&);
    virtual ~sipQScriptClassPropertyIterator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QScriptValue::PropertyFlags flags() const;
    uint id() const;
    QScriptString name() const;
    void toBack();
    void toFront();
    void previous();
    bool hasPrevious() const;
    void next();
    bool hasNext() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScriptClassPropertyIterator(const sipQScriptClassPropertyIterator &);
    sipQScriptClassPropertyIterator &operator = (const sipQScriptClassPropertyIterator &);

    char sipPyMethods[9];
};

sipQScriptClassPropertyIterator::sipQScriptClassPropertyIterator(const QScriptValue& a0): QScriptClassPropertyIterator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQScriptClassPropertyIterator::~sipQScriptClassPropertyIterator()
{
    sipCommonDtor(sipPySelf);
}

QScriptValue::PropertyFlags sipQScriptClassPropertyIterator::flags() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_flags);

    if (!sipMeth)
        return QScriptClassPropertyIterator::flags();

    extern QScriptValue::PropertyFlags sipVH_QtScript_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtScript_7(sipGILState, 0, sipPySelf, sipMeth);
}

uint sipQScriptClassPropertyIterator::id() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_id);

    if (!sipMeth)
        return QScriptClassPropertyIterator::id();

    extern uint sipVH_QtScript_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtScript_8(sipGILState, 0, sipPySelf, sipMeth);
}

QScriptString sipQScriptClassPropertyIterator::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_name);

    if (!sipMeth)
        return QScriptString();

    extern QScriptString sipVH_QtScript_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtScript_9(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQScriptClassPropertyIterator::toBack()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_toBack);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQScriptClassPropertyIterator::toFront()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_toFront);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQScriptClassPropertyIterator::previous()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_previous);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQScriptClassPropertyIterator::hasPrevious() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_hasPrevious);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtScript_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQScriptClassPropertyIterator::next()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QScriptClassPropertyIterator,sipName_next);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtScript_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQScriptClassPropertyIterator::hasNext() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QScriptClassPropertyIterator,sipName_hasNext);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtScript_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_object, "QScriptClassPropertyIterator.object() -> QScriptValue");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_object(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            QScriptValue*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue(sipCpp->object());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_object, doc_QScriptClassPropertyIterator_object);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_hasNext, "QScriptClassPropertyIterator.hasNext() -> bool");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_hasNext);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNext();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_hasNext, doc_QScriptClassPropertyIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_next, "QScriptClassPropertyIterator.next()");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_next);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->next();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_next, doc_QScriptClassPropertyIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_hasPrevious, "QScriptClassPropertyIterator.hasPrevious() -> bool");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_hasPrevious(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_hasPrevious(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_hasPrevious);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasPrevious();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_hasPrevious, doc_QScriptClassPropertyIterator_hasPrevious);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_previous, "QScriptClassPropertyIterator.previous()");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_previous(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_previous);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->previous();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_previous, doc_QScriptClassPropertyIterator_previous);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_toFront, "QScriptClassPropertyIterator.toFront()");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_toFront(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_toFront(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_toFront);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->toFront();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_toFront, doc_QScriptClassPropertyIterator_toFront);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_toBack, "QScriptClassPropertyIterator.toBack()");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_toBack(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_toBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_toBack);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->toBack();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_toBack, doc_QScriptClassPropertyIterator_toBack);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_name, "QScriptClassPropertyIterator.name() -> QScriptString");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_name(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            QScriptString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QScriptClassPropertyIterator, sipName_name);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_name, doc_QScriptClassPropertyIterator_name);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_id, "QScriptClassPropertyIterator.id() -> int");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_id(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QScriptClassPropertyIterator::id() : sipCpp->id());
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_id, doc_QScriptClassPropertyIterator_id);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptClassPropertyIterator_flags, "QScriptClassPropertyIterator.flags() -> QScriptValue.PropertyFlags");

extern "C" {static PyObject *meth_QScriptClassPropertyIterator_flags(PyObject *, PyObject *);}
static PyObject *meth_QScriptClassPropertyIterator_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QScriptClassPropertyIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptClassPropertyIterator, &sipCpp))
        {
            QScriptValue::PropertyFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags((sipSelfWasArg ? sipCpp->QScriptClassPropertyIterator::flags() : sipCpp->flags()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptClassPropertyIterator, sipName_flags, doc_QScriptClassPropertyIterator_flags);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptClassPropertyIterator(void *, const sipTypeDef *);}
static void *cast_QScriptClassPropertyIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptClassPropertyIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptClassPropertyIterator(void *, int);}
static void release_QScriptClassPropertyIterator(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScriptClassPropertyIterator *>(sipCppV);
    else
        delete reinterpret_cast<QScriptClassPropertyIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptClassPropertyIterator(sipSimpleWrapper *);}
static void dealloc_QScriptClassPropertyIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQScriptClassPropertyIterator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptClassPropertyIterator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QScriptClassPropertyIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptClassPropertyIterator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScriptClassPropertyIterator *sipCpp = 0;

    {
        const QScriptValue* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptValue, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQScriptClassPropertyIterator(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptClassPropertyIterator[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QScriptClassPropertyIterator_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_flags)},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QScriptClassPropertyIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_hasPrevious), meth_QScriptClassPropertyIterator_hasPrevious, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_hasPrevious)},
    {SIP_MLNAME_CAST(sipName_id), meth_QScriptClassPropertyIterator_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_id)},
    {SIP_MLNAME_CAST(sipName_name), meth_QScriptClassPropertyIterator_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_name)},
    {SIP_MLNAME_CAST(sipName_next), meth_QScriptClassPropertyIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_next)},
    {SIP_MLNAME_CAST(sipName_object), meth_QScriptClassPropertyIterator_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_object)},
    {SIP_MLNAME_CAST(sipName_previous), meth_QScriptClassPropertyIterator_previous, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_previous)},
    {SIP_MLNAME_CAST(sipName_toBack), meth_QScriptClassPropertyIterator_toBack, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_toBack)},
    {SIP_MLNAME_CAST(sipName_toFront), meth_QScriptClassPropertyIterator_toFront, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptClassPropertyIterator_toFront)}
};

PyDoc_STRVAR(doc_QScriptClassPropertyIterator, "\1QScriptClassPropertyIterator(QScriptValue)");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptClassPropertyIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QScriptClassPropertyIterator,
        {0}
    },
    {
        sipNameNr_QScriptClassPropertyIterator,
        {0, 0, 1},
        10, methods_QScriptClassPropertyIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptClassPropertyIterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QScriptClassPropertyIterator,
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
    dealloc_QScriptClassPropertyIterator,
    0,
    0,
    0,
    release_QScriptClassPropertyIterator,
    cast_QScriptClassPropertyIterator,
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
