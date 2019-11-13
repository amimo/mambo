# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

ifeq ($(findstring arm, $(TARGET_ARCH)), arm)

OPTS= -DDBM_LINK_UNCOND_IMM
OPTS+=-DDBM_INLINE_UNCOND_IMM
OPTS+=-DDBM_LINK_COND_IMM
OPTS+=-DDBM_LINK_CBZ
OPTS+=-DDBM_LINK_TBZ
OPTS+=-DDBM_TB_DIRECT #-DFAST_BT
OPTS+=-DLINK_BX_ALT
OPTS+=-DDBM_INLINE_HASH
OPTS+=-DDBM_TRACES #-DTB_AS_TRACE_HEAD #-DBLXI_AS_TRACE_HEAD

SOURCES = common.c dbm.c traces.c syscalls.c dispatcher.c signals.c
SOURCES+=api/helpers.c api/plugin_support.c api/branch_decoder_support.c api/load_store.c
SOURCES+=elf_loader/elf_loader.c

SOURCE_ASM = dispatcher.S util.S

include $(CLEAR_VARS)
LOCAL_MODULE    := libdbm_asm
LOCAL_SRC_FILES := $(SOURCE_ASM)
LOCAL_CFLAGS    := -mfpu=neon -fno-integrated-as
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
ifeq ($(TARGET_ARCH),arm)
	PIE = pie/pie-arm-encoder.c pie/pie-arm-decoder.c pie/pie-arm-field-decoder.c
	PIE += pie/pie-thumb-encoder.c pie/pie-thumb-decoder.c pie/pie-thumb-field-decoder.c
	SOURCES += scanner_thumb.c scanner_arm.c
	SOURCES += api/emit_arm.c api/emit_thumb.c
endif
ifeq ($(TARGET_ARCH),arm64)
	PIE += pie/pie-a64-field-decoder.c pie/pie-a64-encoder.c pie/pie-a64-decoder.c
	SOURCES += scanner_a64.c
	SOURCES += api/emit_a64.c
endif

LOCAL_MODULE    := dbm
LOCAL_SRC_FILES := $(SOURCES) $(PIE)
LOCAL_C_INCLUDES:= \
        $(LOCAL_PATH)/elfutils/libelf \

LOCAL_CFLAGS  := -D_GNU_SOURCE -std=gnu99 -O2 -mfpu=neon
LOCAL_CFLAGS  += $(OPTS)
LOCAL_LDFLAGS := -static -ldl -Wl,-Ttext-segment=$(or $(TEXT_SEGMENT),0xa8000000)
LOCAL_STATIC_LIBRARIES := libelf libdbm_asm

include $(BUILD_EXECUTABLE)

include $(LOCAL_PATH)/elfutils/Android.mk

endif
