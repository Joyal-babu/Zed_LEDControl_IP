/*
 * led_control.c
 *
 *  Created on: 07-May-2026
 *      Author: user
 */

#include "led_control.h"
#include <xil_io.h>

int init_ledip(ledControl* ledip, u32 baseAddress)
{
	ledip->baseAddress = baseAddress;
	return 0;
};

void writeled(ledControl* ledip, u32 writedata)
{
	Xil_Out32(ledip->baseAddress, writedata);
};

u32 readswitch(ledControl* ledip)
{
	return Xil_In32(ledip->baseAddress+4);
};
