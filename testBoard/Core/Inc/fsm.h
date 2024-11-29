/*
 * fsm.h
 *
 *  Created on: Nov 28, 2024
 *      Author: DEll P5530
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_


#define INIT			0
#define READ_SENSOR		1
#define PROCESSING		2
#define DISPLAY			4

#include "global.h"

extern int status;

void fsm_run();


#endif /* INC_FSM_H_ */
