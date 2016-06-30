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

#include "sipAPIQtDesigner.h"

#line 26 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerCustomWidgetInterface.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerCustomWidgetInterface.cpp"
#line 26 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDesigner/abstractformeditor.sip"
#include <abstractformeditor.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerCustomWidgetInterface.cpp"
#line 32 "sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerCustomWidgetInterface.cpp"
#line 30 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerCustomWidgetInterface.cpp"


class sipQDesignerCustomWidgetInterface : public QDesignerCustomWidgetInterface
{
public:
    sipQDesignerCustomWidgetInterface();
    sipQDesignerCustomWidgetInterface(const QDesignerCustomWidgetInterface&);
    virtual ~sipQDesignerCustomWidgetInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString codeTemplate() const;
    QString domXml() const;
    void initialize(QDesignerFormEditorInterface*);
    bool isInitialized() const;
    QWidget* createWidget(QWidget*);
    bool isContainer() const;
    QIcon icon() const;
    QString includeFile() const;
    QString whatsThis() const;
    QString toolTip() const;
    QString group() const;
    QString name() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerCustomWidgetInterface(const sipQDesignerCustomWidgetInterface &);
    sipQDesignerCustomWidgetInterface &operator = (const sipQDesignerCustomWidgetInterface &);

    char sipPyMethods[12];
};

sipQDesignerCustomWidgetInterface::sipQDesignerCustomWidgetInterface(): QDesignerCustomWidgetInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerCustomWidgetInterface::sipQDesignerCustomWidgetInterface(const QDesignerCustomWidgetInterface& a0): QDesignerCustomWidgetInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerCustomWidgetInterface::~sipQDesignerCustomWidgetInterface()
{
    sipCommonDtor(sipPySelf);
}

QString sipQDesignerCustomWidgetInterface::codeTemplate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_codeTemplate);

    if (!sipMeth)
        return QDesignerCustomWidgetInterface::codeTemplate();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::domXml() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_domXml);

    if (!sipMeth)
        return QDesignerCustomWidgetInterface::domXml();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQDesignerCustomWidgetInterface::initialize(QDesignerFormEditorInterface*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_initialize);

    if (!sipMeth)
    {
        QDesignerCustomWidgetInterface::initialize(a0);
        return;
    }

    extern void sipVH_QtDesigner_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDesignerFormEditorInterface*);

    sipVH_QtDesigner_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDesignerCustomWidgetInterface::isInitialized() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_isInitialized);

    if (!sipMeth)
        return QDesignerCustomWidgetInterface::isInitialized();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QWidget* sipQDesignerCustomWidgetInterface::createWidget(QWidget*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_createWidget);

    if (!sipMeth)
        return 0;

    typedef QWidget* (*sipVH_QtGui_8)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QWidget*);

    return ((sipVH_QtGui_8)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[8]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDesignerCustomWidgetInterface::isContainer() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_isContainer);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QIcon sipQDesignerCustomWidgetInterface::icon() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_icon);

    if (!sipMeth)
        return QIcon();

    extern QIcon sipVH_QtDesigner_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_9(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::includeFile() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_includeFile);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::whatsThis() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_whatsThis);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::toolTip() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_toolTip);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::group() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_group);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQDesignerCustomWidgetInterface::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QDesignerCustomWidgetInterface,sipName_name);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_name, "QDesignerCustomWidgetInterface.name() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_name(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_name);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_name, doc_QDesignerCustomWidgetInterface_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_group, "QDesignerCustomWidgetInterface.group() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_group(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_group(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_group);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->group());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_group, doc_QDesignerCustomWidgetInterface_group);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_toolTip, "QDesignerCustomWidgetInterface.toolTip() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_toolTip(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_toolTip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_toolTip);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toolTip());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_toolTip, doc_QDesignerCustomWidgetInterface_toolTip);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_whatsThis, "QDesignerCustomWidgetInterface.whatsThis() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_whatsThis(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_whatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_whatsThis);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->whatsThis());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_whatsThis, doc_QDesignerCustomWidgetInterface_whatsThis);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_includeFile, "QDesignerCustomWidgetInterface.includeFile() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_includeFile(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_includeFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_includeFile);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->includeFile());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_includeFile, doc_QDesignerCustomWidgetInterface_includeFile);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_icon, "QDesignerCustomWidgetInterface.icon() -> QIcon");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_icon(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QIcon*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_icon);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QIcon(sipCpp->icon());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_icon, doc_QDesignerCustomWidgetInterface_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_isContainer, "QDesignerCustomWidgetInterface.isContainer() -> bool");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_isContainer(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_isContainer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_isContainer);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isContainer();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_isContainer, doc_QDesignerCustomWidgetInterface_isContainer);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_createWidget, "QDesignerCustomWidgetInterface.createWidget(QWidget) -> QWidget");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_createWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_createWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget* a0;
        sipWrapper *sipOwner = 0;
        QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJH", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp, sipType_QWidget, &a0, &sipOwner))
        {
            QWidget*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetInterface, sipName_createWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->createWidget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWidget,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_createWidget, doc_QDesignerCustomWidgetInterface_createWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_isInitialized, "QDesignerCustomWidgetInterface.isInitialized() -> bool");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_isInitialized(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_isInitialized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDesignerCustomWidgetInterface::isInitialized() : sipCpp->isInitialized());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_isInitialized, doc_QDesignerCustomWidgetInterface_isInitialized);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_initialize, "QDesignerCustomWidgetInterface.initialize(QDesignerFormEditorInterface)");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_initialize(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDesignerFormEditorInterface* a0;
        QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp, sipType_QDesignerFormEditorInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QDesignerCustomWidgetInterface::initialize(a0) : sipCpp->initialize(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_initialize, doc_QDesignerCustomWidgetInterface_initialize);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_domXml, "QDesignerCustomWidgetInterface.domXml() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_domXml(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_domXml(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QDesignerCustomWidgetInterface::domXml() : sipCpp->domXml()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_domXml, doc_QDesignerCustomWidgetInterface_domXml);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface_codeTemplate, "QDesignerCustomWidgetInterface.codeTemplate() -> QString");

extern "C" {static PyObject *meth_QDesignerCustomWidgetInterface_codeTemplate(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetInterface_codeTemplate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QDesignerCustomWidgetInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetInterface, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QDesignerCustomWidgetInterface::codeTemplate() : sipCpp->codeTemplate()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetInterface, sipName_codeTemplate, doc_QDesignerCustomWidgetInterface_codeTemplate);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerCustomWidgetInterface(void *, const sipTypeDef *);}
static void *cast_QDesignerCustomWidgetInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerCustomWidgetInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerCustomWidgetInterface(void *, int);}
static void release_QDesignerCustomWidgetInterface(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerCustomWidgetInterface *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerCustomWidgetInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerCustomWidgetInterface(sipSimpleWrapper *);}
static void dealloc_QDesignerCustomWidgetInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerCustomWidgetInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerCustomWidgetInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerCustomWidgetInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerCustomWidgetInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerCustomWidgetInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerCustomWidgetInterface();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerCustomWidgetInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerCustomWidgetInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerCustomWidgetInterface(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerCustomWidgetInterface[] = {
    {SIP_MLNAME_CAST(sipName_codeTemplate), meth_QDesignerCustomWidgetInterface_codeTemplate, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_codeTemplate)},
    {SIP_MLNAME_CAST(sipName_createWidget), meth_QDesignerCustomWidgetInterface_createWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_createWidget)},
    {SIP_MLNAME_CAST(sipName_domXml), meth_QDesignerCustomWidgetInterface_domXml, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_domXml)},
    {SIP_MLNAME_CAST(sipName_group), meth_QDesignerCustomWidgetInterface_group, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_group)},
    {SIP_MLNAME_CAST(sipName_icon), meth_QDesignerCustomWidgetInterface_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_icon)},
    {SIP_MLNAME_CAST(sipName_includeFile), meth_QDesignerCustomWidgetInterface_includeFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_includeFile)},
    {SIP_MLNAME_CAST(sipName_initialize), meth_QDesignerCustomWidgetInterface_initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_initialize)},
    {SIP_MLNAME_CAST(sipName_isContainer), meth_QDesignerCustomWidgetInterface_isContainer, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_isContainer)},
    {SIP_MLNAME_CAST(sipName_isInitialized), meth_QDesignerCustomWidgetInterface_isInitialized, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_isInitialized)},
    {SIP_MLNAME_CAST(sipName_name), meth_QDesignerCustomWidgetInterface_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_name)},
    {SIP_MLNAME_CAST(sipName_toolTip), meth_QDesignerCustomWidgetInterface_toolTip, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_toolTip)},
    {SIP_MLNAME_CAST(sipName_whatsThis), meth_QDesignerCustomWidgetInterface_whatsThis, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetInterface_whatsThis)}
};

PyDoc_STRVAR(doc_QDesignerCustomWidgetInterface, "\1QDesignerCustomWidgetInterface()\n"
    "QDesignerCustomWidgetInterface(QDesignerCustomWidgetInterface)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerCustomWidgetInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerCustomWidgetInterface,
        {0}
    },
    {
        sipNameNr_QDesignerCustomWidgetInterface,
        {0, 0, 1},
        12, methods_QDesignerCustomWidgetInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerCustomWidgetInterface,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDesignerCustomWidgetInterface,
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
    dealloc_QDesignerCustomWidgetInterface,
    0,
    0,
    0,
    release_QDesignerCustomWidgetInterface,
    cast_QDesignerCustomWidgetInterface,
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
