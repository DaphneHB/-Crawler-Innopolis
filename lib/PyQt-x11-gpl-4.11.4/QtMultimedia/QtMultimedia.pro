TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimedia
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtMultimedia.pyd
    target.files = QtMultimedia.pyd
    LIBS += -L/home/innopolis/Documents/crawler/lib -lpython27
} else {
    PY_MODULE = QtMultimedia.so
    target.files = QtMultimedia.so
}

target.CONFIG = no_check_exist
target.path = /home/innopolis/Documents/crawler/lib/python2.7/site-packages/PyQt4
INSTALLS += target
sip.path = /home/innopolis/Documents/crawler/share/sip/PyQt4/QtMultimedia
sip.files = ../sip/QtMultimedia/qvideoframe.sip ../sip/QtMultimedia/qaudiooutput.sip ../sip/QtMultimedia/qabstractvideosurface.sip ../sip/QtMultimedia/qaudioformat.sip ../sip/QtMultimedia/qvideosurfaceformat.sip ../sip/QtMultimedia/qaudiodeviceinfo.sip ../sip/QtMultimedia/qaudioinput.sip ../sip/QtMultimedia/qaudio.sip ../sip/QtMultimedia/QtMultimediamod.sip ../sip/QtMultimedia/qabstractvideobuffer.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtMultimedia.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtMultimedia
HEADERS = sipAPIQtMultimedia.h
SOURCES = sipQtMultimediacmodule.cpp sipQtMultimediaQAudioOutput.cpp sipQtMultimediaQList0100QAudioFormatEndian.cpp sipQtMultimediaQList0100QVideoFramePixelFormat.cpp sipQtMultimediaQList0100QAudioDeviceInfo.cpp sipQtMultimediaQAudioFormat.cpp sipQtMultimediaQAbstractVideoSurface.cpp sipQtMultimediaQAudio.cpp sipQtMultimediaQVideoFrame.cpp sipQtMultimediaQVideoSurfaceFormat.cpp sipQtMultimediaQAbstractVideoBuffer.cpp sipQtMultimediaQAudioInput.cpp sipQtMultimediaQAudioDeviceInfo.cpp sipQtMultimediaQList0100QAudioFormatSampleType.cpp
