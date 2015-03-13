#directories of sources of the vision app

INCLUDEPATH += \
  . \
  gui \
  plugins \
  stacks \
  $${SHARED_DIR}/capture \
  $${SHARED_DIR}/cmpattern \
  $${SHARED_DIR}/cmvision \
  $${SHARED_DIR}/gl \
  $${SHARED_DIR}/net \
  $${SHARED_DIR}/proto/cpp \
  $${SHARED_DIR}/util \
  $${SHARED_DIR}/vartypes \
  $${SHARED_DIR}/vartypes/gui \
  $${SHARED_DIR}/vartypes/primitives \
  $${SHARED_DIR}/vartypes/xml

SOURCES += \
  main.cpp \
  framedata.cpp \
  capture_thread.cpp \
  gui/videowidget.cpp \
  gui/renderoptions.cpp \
  gui/realtimedisplaywidget.cpp \
  gui/mainwindow.cpp \
  gui/lutwidget.cpp \
  gui/jog_dial.cpp \
  gui/glwidget.cpp \
  gui/glLUTwidget.cpp \
  gui/colorpicker.cpp \
  gui/cameracalibwidget.cpp \
  plugins/visionplugin.cpp \
  plugins/plugin_visualize.cpp \
  plugins/plugin_sslnetworkoutput.cpp \
  plugins/plugin_runlength_encode.cpp \
  plugins/plugin_publishgeometry.cpp \
  plugins/plugin_find_blobs.cpp \
  plugins/plugin_dvr.cpp \
  plugins/plugin_detect_robots.cpp \
  plugins/plugin_detect_balls.cpp \
  plugins/plugin_colorthreshold.cpp \
  plugins/plugin_colorcalib.cpp \
  plugins/plugin_cameracalib.cpp \
  stacks/visionstack.cpp \
  stacks/stack_robocup_ssl.cpp \
  stacks/multivisionstack.cpp \
  stacks/multistack_robocup_ssl.cpp \
  $${SHARED_DIR}/capture/captureinterface.cpp \
  $${SHARED_DIR}/capture/capture_generator.cpp \
  $${SHARED_DIR}/capture/capturefromfile.cpp \
  $${SHARED_DIR}/capture/captureopencv.cpp \
  $${SHARED_DIR}/cmpattern/cmpattern_teamdetector.cpp \
  $${SHARED_DIR}/cmpattern/cmpattern_team.cpp \
  $${SHARED_DIR}/cmpattern/cmpattern_pattern.cpp \
  $${SHARED_DIR}/cmvision/cmvision_threshold.cpp \
  $${SHARED_DIR}/cmvision/cmvision_region.cpp \
  $${SHARED_DIR}/cmvision/cmvision_histogram.cpp \
  $${SHARED_DIR}/gl/globject.cpp \
  $${SHARED_DIR}/gl/glcamera.cpp \
  $${SHARED_DIR}/net/netraw.cpp \
  $${SHARED_DIR}/net/robocup_ssl_server.cpp \
  $${SHARED_DIR}/util/texture.cpp \
  $${SHARED_DIR}/util/ringbuffer.cpp \
  $${SHARED_DIR}/util/rawimage.cpp \
  $${SHARED_DIR}/util/qgetopt.cpp \
  $${SHARED_DIR}/util/lut3d.cpp \
  $${SHARED_DIR}/util/image_io.cpp \
  $${SHARED_DIR}/util/image.cpp \
  $${SHARED_DIR}/util/framelimiter.cpp \
  $${SHARED_DIR}/util/conversions.cpp \
  $${SHARED_DIR}/util/camera_calibration.cpp \
  $${SHARED_DIR}/vartypes/VarXML.cpp \
  $${SHARED_DIR}/vartypes/VarTypesInstance.cpp \
  $${SHARED_DIR}/vartypes/VarTypesFactory.cpp \
  $${SHARED_DIR}/vartypes/VarTypes.cpp \
  $${SHARED_DIR}/vartypes/VarNotifier.cpp \
  $${SHARED_DIR}/vartypes/VarBase64.cpp \
  $${SHARED_DIR}/vartypes/gui/VarTreeViewOptions.cpp \
  $${SHARED_DIR}/vartypes/gui/VarTreeView.cpp \
  $${SHARED_DIR}/vartypes/gui/VarTreeModel.cpp \
  $${SHARED_DIR}/vartypes/gui/VarItemDelegate.cpp \
  $${SHARED_DIR}/vartypes/gui/VarItem.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarVal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarType.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarTrigger.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarStringVal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarStringEnum.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarString.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarSelection.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarQWidget.cpp \
  #$${SHARED_DIR}/vartypes/primitives/VarProtoBufferVal.cpp \
  #$${SHARED_DIR}/vartypes/primitives/VarProtoBuffer.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarList.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarIntVal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarInt.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarExternal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarDoubleVal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarDouble.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarBoolVal.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarBool.cpp \
  $${SHARED_DIR}/vartypes/primitives/VarBlob.cpp \
  $${SHARED_DIR}/vartypes/xml/xmlParser.cpp \
    gui/camerasettings.cpp

HEADERS += \
  videostats.h \
  framedata.h \
  capturestats.h \
  capture_thread.h \
  gui/videowidget.h \
  gui/renderoptions.h \
  gui/realtimedisplaywidget.h \
  gui/mainwindow.h \
  gui/lutwidget.h \
  gui/jog_dial.h \
  gui/glwidget.h \
  gui/glLUTwidget.h \
  gui/colorpicker.h \
  gui/cameracalibwidget.h \
  plugins/visionplugin.h \
  plugins/plugin_visualize.h \
  plugins/plugin_sslnetworkoutput.h \
  plugins/plugin_runlength_encode.h \
  plugins/plugin_publishgeometry.h \
  plugins/plugin_find_blobs.h \
  plugins/plugin_dvr.h \
  plugins/plugin_detect_robots.h \
  plugins/plugin_detect_balls.h \
  plugins/plugin_colorthreshold.h \
  plugins/plugin_colorcalib.h \
  plugins/plugin_cameracalib.h \
  stacks/visionstack.h \
  stacks/stacks.h \
  stacks/stack_robocup_ssl.h \
  stacks/multivisionstack.h \
  stacks/multistacks.h \
  stacks/multistack_robocup_ssl.h \
  $${SHARED_DIR}/capture/captureinterface.h \
  $${SHARED_DIR}/capture/capture_generator.h \
  $${SHARED_DIR}/capture/capturefromfile.h \
  $${SHARED_DIR}/capture/captureopencv.h \
  $${SHARED_DIR}/cmpattern/cmpattern_teamdetector.h \
  $${SHARED_DIR}/cmpattern/cmpattern_team.h \
  $${SHARED_DIR}/cmpattern/cmpattern_pattern.h \
  $${SHARED_DIR}/cmvision/cmvision_threshold.h \
  $${SHARED_DIR}/cmvision/cmvision_region.h \
  $${SHARED_DIR}/cmvision/cmvision_histogram.h \
  $${SHARED_DIR}/gl/globject.h \
  $${SHARED_DIR}/gl/glcamera.h \
  $${SHARED_DIR}/net/netraw.h \
  $${SHARED_DIR}/net/robocup_ssl_server.h \
  $${SHARED_DIR}/util/zoom.h \
  $${SHARED_DIR}/util/vis_util.h \
  $${SHARED_DIR}/util/util.h \
  $${SHARED_DIR}/util/timer.h \
  $${SHARED_DIR}/util/texture.h \
  $${SHARED_DIR}/util/sobel.h \
  $${SHARED_DIR}/util/ringbuffer.h \
  $${SHARED_DIR}/util/rawimage.h \
  $${SHARED_DIR}/util/range.h \
  $${SHARED_DIR}/util/quaternion.h \
  $${SHARED_DIR}/util/qgetopt.h \
  $${SHARED_DIR}/util/pose.h \
  $${SHARED_DIR}/util/pixelloc.h \
  $${SHARED_DIR}/util/nvector.h \
  $${SHARED_DIR}/util/nkdtree.h \
  $${SHARED_DIR}/util/lut3d.h \
  $${SHARED_DIR}/util/image_io.h \
  $${SHARED_DIR}/util/image_interface.h \
  $${SHARED_DIR}/util/image.h \
  $${SHARED_DIR}/util/gvector.h \
  $${SHARED_DIR}/util/geometry.h \
  $${SHARED_DIR}/util/geomalgo.h \
  $${SHARED_DIR}/util/framelimiter.h \
  $${SHARED_DIR}/util/framecounter.h \
  $${SHARED_DIR}/util/font.h \
  $${SHARED_DIR}/util/field_filter.h \
  $${SHARED_DIR}/util/field_default_constants.h \
  $${SHARED_DIR}/util/field.h \
  $${SHARED_DIR}/util/conversions.h \
  $${SHARED_DIR}/util/colors.h \
  $${SHARED_DIR}/util/camera_calibration.h \
  $${SHARED_DIR}/util/bbox.h \
  $${SHARED_DIR}/vartypes/VarTypesInstance.h \
  $${SHARED_DIR}/vartypes/VarTypesFactory.h \
  $${SHARED_DIR}/vartypes/VarTypes.h \
  $${SHARED_DIR}/vartypes/VarNotifier.h \
  $${SHARED_DIR}/vartypes/VarBase64.h \
  $${SHARED_DIR}/vartypes/VarXML.h \
  $${SHARED_DIR}/vartypes/gui/VarTreeViewOptions.h \
  $${SHARED_DIR}/vartypes/gui/VarTreeView.h \
  $${SHARED_DIR}/vartypes/gui/VarTreeModel.h \
  $${SHARED_DIR}/vartypes/gui/VarItemDelegate.h \
  $${SHARED_DIR}/vartypes/gui/VarItem.h \
  $${SHARED_DIR}/vartypes/primitives/VarVal.h \
  $${SHARED_DIR}/vartypes/primitives/VarType.h \
  $${SHARED_DIR}/vartypes/primitives/VarTrigger.h \
  $${SHARED_DIR}/vartypes/primitives/VarStringVal.h \
  $${SHARED_DIR}/vartypes/primitives/VarStringEnum.h \
  $${SHARED_DIR}/vartypes/primitives/VarString.h \
  $${SHARED_DIR}/vartypes/primitives/VarSelection.h \
  $${SHARED_DIR}/vartypes/primitives/VarQWidget.h \
  #$${SHARED_DIR}/vartypes/primitives/VarProtoBufferVal.h \
  #$${SHARED_DIR}/vartypes/primitives/VarProtoBuffer.h \
  $${SHARED_DIR}/vartypes/primitives/VarList.h \
  $${SHARED_DIR}/vartypes/primitives/VarIntVal.h \
  $${SHARED_DIR}/vartypes/primitives/VarInt.h \
  $${SHARED_DIR}/vartypes/primitives/VarExternal.h \
  $${SHARED_DIR}/vartypes/primitives/VarDoubleVal.h \
  $${SHARED_DIR}/vartypes/primitives/VarDouble.h \
  $${SHARED_DIR}/vartypes/primitives/VarBoolVal.h \
  $${SHARED_DIR}/vartypes/primitives/VarBool.h \
  $${SHARED_DIR}/vartypes/primitives/VarBlob.h \
  $${SHARED_DIR}/vartypes/xml/xmlParser.h \
    gui/camerasettings.h

FORMS += \
  gui/videowidget.ui \
  gui/mainwindow.ui

RESOURCES += \
  gui/icons/icons_gui.qrc \
  $${SHARED_DIR}/vartypes/gui/icons/icons.qrc