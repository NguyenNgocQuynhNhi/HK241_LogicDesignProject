/*
 * ledRGB.h
 *
 *  Created on: Nov 27, 2024
 *      Author: DEll P5530
 */

#ifndef INC_LEDRGB_H_
#define INC_LEDRGB_H_

#include "main.h"

//#define MAX_DUTY	2000;
extern const int MAX_DUTY;

extern TIM_HandleTypeDef htim3;


void ledRGB(int red, int green, int blue);
//void displayRed();
//void displayGreen();
//void displayBlue();

#endif /* INC_LEDRGB_H_ */
