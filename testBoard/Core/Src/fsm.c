/*
 * fsm.c
 *
 *  Created on: Nov 28, 2024
 *      Author: DEll P5530
 */


#include "fsm.h"

  int status = INIT;

void fsm_run()
{
	switch(status) {
	case INIT:
		//TODO:
		lcd_goto_XY(1, 0);
		lcd_send_string("Initializing...");
		ledRGB(MAX_DUTY, MAX_DUTY, MAX_DUTY);	//White

		//SET UP FOR THE NEXT STATE:
		if (fsm_flag == 1) {
			setTimerForFSM(1000);
			//TODO:
			status = READ_SENSOR;
			lcd_clear_display();
		}

		break;
	case READ_SENSOR:
		//TODO:
		//require to read data from STM32 to DHT20

		lcd_goto_XY(1, 0);
		lcd_send_string("Reading sensor..");
		ledRGB(MAX_DUTY, MAX_DUTY, 0);		//Yellow

		//SET UP FOR THE NEXT STATE
		if (fsm_flag == 1) {
			setTimerForFSM(1000);
			//TODO:
			status = PROCESSING;
			lcd_clear_display();
		}

//		if (fsm_flag == 1) {
//			setTimerForFSM(2000);
//			//TODO:
//			status = INIT;
//			lcd_clear_display();
//		}

		break;
	case PROCESSING:
		//TODO:
		lcd_goto_XY(1, 0);
		lcd_send_string("Processing...");

		ledRGB(0, 0, MAX_DUTY);
//
//		//SET UP FOR THE NEXT STATE

		if (fsm_flag == 1) {
			setTimerForFSM(3000);
			//TODO:
			status = DISPLAY;
			lcd_clear_display();
		}
		break;
	case DISPLAY:
		//TODO:
		lcd_goto_XY(1, 0);
		lcd_send_string("Temperature: ");
		lcd_goto_XY(2, 0);
		lcd_send_string("Humidity: ");

		ledRGB(MAX_DUTY, 0, 0);

//		currentTime = HAL_GetTick();
//		if (currentTime - previousTime >= 250) {
//			ledRGB(MAX_DUTY, 0, 0);
//			previousTime = currentTime;
//		}

		//SET UP FOR THE NEXT STATE:

//				if (fsm_flag == 1) {
//					setTimerForFSM(2000);
//					//TODO:
//					status = INIT;
//					lcd_clear_display();
//				}

		if (fsm_flag == 1) {
			setTimerForFSM(1000);
			//TODO:
			status = READ_SENSOR;
			lcd_clear_display();
		}
		break;
	default:
		break;

	}
}
