/*
 * Copyright (c) 2022 Nordic Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/linker/linker-defs.h>

int main(void)
{
	#if USE_PARTITION_MANAGER
	printk("Partition manager is used\n");
	#endif
	printk("Address of sample %p\n", (void *)__rom_region_start);
	printk("Hello sysbuild with mcuboot! %s\n", CONFIG_BOARD);
	return 0;
}
