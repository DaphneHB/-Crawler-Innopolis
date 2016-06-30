TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtDesigner
sip.files = ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/formbuilder.sip ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/abstractwidgetbox.sip ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/abstractobjectinspector.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/QtDesignermod.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/default_extensionfactory.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h
SOURCES = sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerFormWindowInterface.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignercmodule.cpp sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp
