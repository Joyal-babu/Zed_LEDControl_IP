/*
 * led_control.h
 *
 *  Created on: 07-May-2026
 *      Author: user
 */

#include <xil_types.h>

#ifndef SRC_LED_CONTROL_H_
#define SRC_LED_CONTROL_H_

typedef struct ledControl{
	u32 baseAddress;
}ledControl;

int init_ledip(ledControl* ledip, u32 baseAddress);

void writeled(ledControl* ledip, u32 writedata);

u32 readswitch(ledControl* ledip);


#endif /* SRC_LED_CONTROL_H_ */
