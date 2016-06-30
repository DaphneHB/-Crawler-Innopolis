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

#include "sipAPIQtDeclarative.h"

#line 28 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/sip/QtDeclarative/qdeclarativeimageprovider.sip"
#include <qdeclarativeimageprovider.h>
#line 29 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQDeclarativeImageProvider.cpp"

#line 30 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 33 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQDeclarativeImageProvider.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQDeclarativeImageProvider.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQDeclarativeImageProvider.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 42 "/home/innopolis/Documents/crawler/lib/PyQt-x11-gpl-4.11.4/QtDeclarative/sipQtDeclarativeQDeclarativeImageProvider.cpp"


class sipQDeclarativeImageProvider : public QDeclarativeImageProvider
{
public:
    sipQDeclarativeImageProvider(QDeclarativeImageProvider::ImageType);
    sipQDeclarativeImageProvider(const QDeclarativeImageProvider&);
    virtual ~sipQDeclarativeImageProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QPixmap requestPixmap(const QString&,QSize*,const QSize&);
    QImage requestImage(const QString&,QSize*,const QSize&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativeImageProvider(const sipQDeclarativeImageProvider &);
    sipQDeclarativeImageProvider &operator = (const sipQDeclarativeImageProvider &);

    char sipPyMethods[2];
};

sipQDeclarativeImageProvider::sipQDeclarativeImageProvider(QDeclarativeImageProvider::ImageType a0): QDeclarativeImageProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeImageProvider::sipQDeclarativeImageProvider(const QDeclarativeImageProvider& a0): QDeclarativeImageProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeImageProvider::~sipQDeclarativeImageProvider()
{
    sipCommonDtor(sipPySelf);
}

QPixmap sipQDeclarativeImageProvider::requestPixmap(const QString& a0,QSize*a1,const QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_requestPixmap);

    if (!sipMeth)
        return QDeclarativeImageProvider::requestPixmap(a0,a1,a2);

    extern QPixmap sipVH_QtDeclarative_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,QSize*,const QSize&);

    return sipVH_QtDeclarative_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QImage sipQDeclarativeImageProvider::requestImage(const QString& a0,QSize*a1,const QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_requestImage);

    if (!sipMeth)
        return QDeclarativeImageProvider::requestImage(a0,a1,a2);

    extern QImage sipVH_QtDeclarative_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,QSize*,const QSize&);

    return sipVH_QtDeclarative_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QDeclarativeImageProvider_imageType, "QDeclarativeImageProvider.imageType() -> QDeclarativeImageProvider.ImageType");

extern "C" {static PyObject *meth_QDeclarativeImageProvider_imageType(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeImageProvider_imageType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDeclarativeImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeImageProvider, &sipCpp))
        {
            QDeclarativeImageProvider::ImageType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->imageType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDeclarativeImageProvider_ImageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeImageProvider, sipName_imageType, doc_QDeclarativeImageProvider_imageType);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeImageProvider_requestImage, "QDeclarativeImageProvider.requestImage(QString, QSize, QSize) -> QImage");

extern "C" {static PyObject *meth_QDeclarativeImageProvider_requestImage(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeImageProvider_requestImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QSize* a1;
        const QSize* a2;
        QDeclarativeImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8J9", &sipSelf, sipType_QDeclarativeImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QSize, &a2))
        {
            QImage*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QImage((sipSelfWasArg ? sipCpp->QDeclarativeImageProvider::requestImage(*a0,a1,*a2) : sipCpp->requestImage(*a0,a1,*a2)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeImageProvider, sipName_requestImage, doc_QDeclarativeImageProvider_requestImage);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeImageProvider_requestPixmap, "QDeclarativeImageProvider.requestPixmap(QString, QSize, QSize) -> QPixmap");

extern "C" {static PyObject *meth_QDeclarativeImageProvider_requestPixmap(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeImageProvider_requestPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QSize* a1;
        const QSize* a2;
        QDeclarativeImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8J9", &sipSelf, sipType_QDeclarativeImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QSize, &a2))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap((sipSelfWasArg ? sipCpp->QDeclarativeImageProvider::requestPixmap(*a0,a1,*a2) : sipCpp->requestPixmap(*a0,a1,*a2)));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeImageProvider, sipName_requestPixmap, doc_QDeclarativeImageProvider_requestPixmap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeImageProvider(void *, const sipTypeDef *);}
static void *cast_QDeclarativeImageProvider(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDeclarativeImageProvider)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeImageProvider(void *, int);}
static void release_QDeclarativeImageProvider(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDeclarativeImageProvider *>(sipCppV);
    else
        delete reinterpret_cast<QDeclarativeImageProvider *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativeImageProvider(sipSimpleWrapper *);}
static void dealloc_QDeclarativeImageProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDeclarativeImageProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeImageProvider(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDeclarativeImageProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeImageProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDeclarativeImageProvider *sipCpp = 0;

    {
        QDeclarativeImageProvider::ImageType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QDeclarativeImageProvider_ImageType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeImageProvider(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDeclarativeImageProvider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeImageProvider, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeImageProvider(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeImageProvider[] = {
    {SIP_MLNAME_CAST(sipName_imageType), meth_QDeclarativeImageProvider_imageType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeImageProvider_imageType)},
    {SIP_MLNAME_CAST(sipName_requestImage), meth_QDeclarativeImageProvider_requestImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeImageProvider_requestImage)},
    {SIP_MLNAME_CAST(sipName_requestPixmap), meth_QDeclarativeImageProvider_requestPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeImageProvider_requestPixmap)}
};

static sipEnumMemberDef enummembers_QDeclarativeImageProvider[] = {
    {sipName_Image, static_cast<int>(QDeclarativeImageProvider::Image), 9},
    {sipName_Pixmap, static_cast<int>(QDeclarativeImageProvider::Pixmap), 9},
};

PyDoc_STRVAR(doc_QDeclarativeImageProvider, "\1QDeclarativeImageProvider(QDeclarativeImageProvider.ImageType)\n"
    "QDeclarativeImageProvider(QDeclarativeImageProvider)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeImageProvider = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeImageProvider,
        {0}
    },
    {
        sipNameNr_QDeclarativeImageProvider,
        {0, 0, 1},
        3, methods_QDeclarativeImageProvider,
        2, enummembers_QDeclarativeImageProvider,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeImageProvider,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativeImageProvider,
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
    dealloc_QDeclarativeImageProvider,
    0,
    0,
    0,
    release_QDeclarativeImageProvider,
    cast_QDeclarativeImageProvider,
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
