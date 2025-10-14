# SPDX-License-Identifier: GPL-2.0-only

# auto-detect subdirs
ifeq ($(CONFIG_ARCH_SDM845), y)
include $(srctree)/techpack/camera-sdm845/config/sdm845camera.conf
endif

ifeq ($(CONFIG_ARCH_SDM845), y)
LINUXINCLUDE    += \
		-include $(srctree)/techpack/camera-sdm845/config/sdm845cameraconf.h
endif

ifeq ($(CONFIG_MACH_XIAOMI_E10), y)
include $(srctree)/techpack/camera-sdm845/config/beryllium.conf

LINUXINCLUDE    += \
		-include $(srctree)/techpack/camera-sdm845/config/beryllium.h
endif

ifeq ($(CONFIG_MACH_XIAOMI_E1N), y)
include $(srctree)/techpack/camera-sdm845/config/dipper.conf

LINUXINCLUDE    += \
		-include $(srctree)/techpack/camera-sdm845/config/dipper.h
endif

ifeq ($(CONFIG_MACH_XIAOMI_E5), y)
include $(srctree)/techpack/camera-sdm845/config/dipper.conf

LINUXINCLUDE    += \
		-include $(srctree)/techpack/camera-sdm845/config/dipper.h
endif

ifdef CONFIG_SPECTRA_CAMERA_SDM845
# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE     += \
                -I$(srctree)/techpack/camera-sdm845/include/uapi

# Use LINUXINCLUDE when you must reference the include/ directory.
# Needed to be compatible with the O= option
LINUXINCLUDE    += \
                -I$(srctree)/techpack/camera-sdm845/include/uapi \
                -I$(srctree)/techpack/camera-sdm845/include
obj-y += drivers/
endif
