/* Copyright (c) 2015 Microsemi Corporation

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

/*
 *
 * VCore-III MTD platform driver
 *
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/mtd/nand.h>
#include <linux/mtd/partitions.h>
#include <mtd/mtd-abi.h>
#include <linux/spi/spi.h>
#if defined(CONFIG_SPI_VCOREIII_MK1)
 #include <linux/spi/spi_vcoreiii.h>
#endif
#include <linux/spi/flash.h>
#include <linux/sizes.h>

#include <asm/mach-serval/hardware.h>
#include <asm/vcoreiii-gpio.h>

static struct platform_device serval_spi = {
#if defined(SPI_VCOREIII_PLATDEV_NAME)
        .name             = SPI_VCOREIII_PLATDEV_NAME,
#else
        .name             = "dw_spi_vcoreiii",
#endif
        .id               = 0,
};

static struct flash_platform_data serval_spi_flash_data = {
	.type = "jedec,spi-nor",
	.name = "spi_flash",
#if !defined(CONFIG_SPI_DW_VCOREIII)
        .read_mapped = 1,
        .phys_offset = 0x40000000,
        .phys_length = SZ_16M,
#endif
        .use_4byte_commands = 1,
};

#if defined(CONFIG_MTD_NAND_PLATFORM)
static struct mtd_partition vcoreiii_partition_info[] = {
	 [0] = {
		.name	= "rootfs_data",
		.offset	= 0,
		.size	= MTDPART_SIZ_FULL,
	 },
};

static struct flash_platform_data serval_spinand_flash_data = {
    .name = "spi_nand",
    .parts = vcoreiii_partition_info,
    .nr_parts = ARRAY_SIZE(vcoreiii_partition_info),
};
#endif

static struct spi_board_info serval_spi_board_info[] __initdata = {
	{
		/* the modalias must be the same as spi device driver name */
		.modalias = "m25p80", /* Name of spi_driver for this device */
		.max_speed_hz = 18000000,     /* max spi clock (SCK) speed in HZ */
		.bus_num = 0, /* Framework bus number */
		.chip_select = 0, /* Framework chip select. */
		.platform_data = &serval_spi_flash_data,
		.mode = SPI_MODE_0, /* CPOL=0, CPHA=0 */
        },
#if defined(CONFIG_MTD_NAND_PLATFORM)
	{
		/* the modalias must be the same as spi device driver name */
		.modalias = "mx35", /* Name of spi_driver for this device */
		.max_speed_hz = 15625000,     /* max spi clock (SCK) speed in HZ */
		.bus_num = 0, /* Framework bus number */
		.chip_select = 4, /* Framework chip select. */
		.platform_data = &serval_spinand_flash_data,
		.mode = SPI_MODE_0, /* CPOL=0, CPHA=0 */
        },
#endif
};

static int __init vcoreiii_mtd_init(void)
{
	platform_device_register(&serval_spi);

#if defined(CONFIG_MTD_NAND_PLATFORM)
        vcoreiii_gpio_set_alternate(8, 1); /* SI_nEN1/GPIO_8 */
#endif

	spi_register_board_info(serval_spi_board_info, ARRAY_SIZE(serval_spi_board_info));

	return 0;
}

module_init(vcoreiii_mtd_init);
