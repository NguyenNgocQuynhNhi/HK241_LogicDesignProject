/*
 * softwareTimer.h
 *
 *  Created on: Nov 28, 2024
 *      Author: DEll P5530
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_


#define TICK	10

extern int fsm_flag;
void setTimerForFSM(int duration);

void timerRun();


#endif /* INC_SOFTWARETIMER_H_ */
