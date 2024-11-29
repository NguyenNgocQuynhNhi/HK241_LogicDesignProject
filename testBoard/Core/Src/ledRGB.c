/*
 * ledRGB.c
 *
 *  Created on: Nov 27, 2024
 *      Author: DEll P5530
 */


#include "ledRGB.h"

//const int MAX_DUTY = 2000;
const int MAX_DUTY = 10;

void ledRGB(int red, int green, int blue) {
	htim3.Instance->CCR1 = red;
	htim3.Instance->CCR2 = green;
	htim3.Instance->CCR3 = blue;
}

//void displayRed() {
//	htim3.Instance->CCR1 = 2000;
//	htim3.Instance->CCR2 = 0;
//	htim3.Instance->CCR3 = 0;
//}
//
//void displayGreen() {
//	htim3.Instance->CCR1 = 0;
//	htim3.Instance->CCR2 = 2000;
//	htim3.Instance->CCR3 = 0;
//}
//void displayBlue() {
//	htim3.Instance->CCR1 = 0;
//	htim3.Instance->CCR2 = 0;
//	htim3.Instance->CCR3 = 2000;
//}
