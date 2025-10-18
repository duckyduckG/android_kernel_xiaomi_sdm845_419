#
# Makefile for the focaltech touchscreen drivers.
#

# Each configuration option enables a list of files.

obj-$(CONFIG_TOUCHSCREEN_FTS_MI) += focaltech_fts_mi.o
obj-$(CONFIG_TOUCHSCREEN_FTS_MI)   +=  focaltech_flash/
obj-$(CONFIG_TOUCHSCREEN_FTS_MI_FT8719)   +=  focaltech_test/
obj-$(CONFIG_TOUCHSCREEN_FTS_MI_FT3518)   +=  focaltech_test_ft3518/

focaltech_fts_mi-y += focaltech_core.o focaltech_esdcheck.o \
		      focaltech_ex_fun.o focaltech_ex_mode.o \
		      focaltech_flash.o focaltech_gesture.o \
		      focaltech_i2c.o focaltech_point_report_check.o
