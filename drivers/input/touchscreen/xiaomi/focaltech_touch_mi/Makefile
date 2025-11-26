#
# Makefile for the focaltech touchscreen drivers.
#

# Each configuration option enables a list of files.

obj-$(CONFIG_TOUCHSCREEN_FTS_MI) += focaltech_fts_mi.o
obj-$(CONFIG_TOUCHSCREEN_FTS_MI)   +=  focaltech_flash/

focaltech_fts_mi-y += focaltech_core.o focaltech_esdcheck.o \
		      focaltech_ex_fun.o focaltech_ex_mode.o \
		      focaltech_flash.o focaltech_gesture.o \
		      focaltech_i2c.o focaltech_point_report_check.o
