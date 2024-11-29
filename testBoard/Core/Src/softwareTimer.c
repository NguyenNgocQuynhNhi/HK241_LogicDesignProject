/*
 * softwareTimer.c
 *
 *  Created on: Nov 28, 2024
 *      Author: DEll P5530
 */

#include "softwareTimer.h"

int fsm_flag = 0;
int fsm_counter = 0;
void setTimerForFSM(int duration)
{
	fsm_counter = duration / 10;
	fsm_flag = 0;
}


void timerRun() {
	if (fsm_counter > 0) {
		fsm_counter = fsm_counter - 1;
		if (fsm_counter <= 0) {
			fsm_flag = 1;
		}
	}
}
