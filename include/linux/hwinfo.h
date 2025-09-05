#ifndef _LINUX_HWINFO_H
#define _LINUX_HWINFO_H

#define SMEM_ID_VENDOR2		136

enum {
	TYPE_TOUCH,
	TYPE_SOC,
	TYPE_DDR,
	TYPE_EMMC,
	TYPE_CPU,
	TYPE_PMIC,
	TYPE_PANEL,
	TYPE_TP_MAKER,
	TYPE_FP,
};

void update_hardware_info(unsigned int type, unsigned int value);
unsigned int get_hardware_info(unsigned int type);

#endif
