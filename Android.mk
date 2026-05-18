LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_CPP_EXTENSION := .cpp .cc
LOCAL_MODULE    := PC_Control
LOCAL_SRC_FILES := \
    main.cpp \
    pccontrol/settings.cpp \
    pccontrol/menu.cpp \
    pccontrol/deathlist.cpp \
    pccontrol/gui.cpp \
    pccontrol/camera.cpp \
    pccontrol/command.cpp \
    pccontrol/timecyc.cpp \
    pccontrol/widgetcustom.cpp \
    mod/logger.cpp \
    mod/config.cpp \
    ImGui/imguirenderer.cpp \
    ImGui/imguiwrapper.cpp \
    ImGui/imgui.cpp \
    ImGui/imgui_draw.cpp \
    ImGui/imgui_tables.cpp \
    ImGui/imgui_widgets.cpp \
    ImGui/backends/imgui_impl_renderware.cpp \
    ImGui/RW/RenderWare.cpp
LOCAL_CFLAGS += -O2 -mfloat-abi=softfp -DNDEBUG -std=c++17
LOCAL_C_INCLUDES += \
    $(LOCAL_PATH) \
    $(LOCAL_PATH)/pccontrol \
    $(LOCAL_PATH)/mod \
    $(LOCAL_PATH)/ImGui \
    $(LOCAL_PATH)/ImGui/backends \
    $(LOCAL_PATH)/ImGui/RW
LOCAL_LDLIBS += -llog
include $(BUILD_SHARED_LIBRARY)
