/*
 * clock_manual.c
 *
 *  Created on: Dec 3, 2022
 *      Author: Admin
 */

#include "clock_manual.h"

int Stat_M2_1 = 0;

void fsm_manual_run(){
	if(mode == MODE_CHANGE){
		switch(Stat_M2_1){
		case 0:
			Stat_M2_1 = 1;
			setTimer2(10);
			break;
		case 1:
			if(timer2_flag == 1){
				set_All_Clock();
				//HAL_GPIO_TogglePin(GPIOA, leds[0]);
				setTimer2(50);
			}
			break;
		default:
			break;
		}

//
//		switch(Stat_M2_3){
//			case INIT:
//				if(isButtonPressed(BUTTON2) == 1){
//					Stat_M2_3 = INCREASE;
//					//temp_RED++;
//					AUTO_RED++;
//				}
//				break;
//			case INCREASE:
//				if(isButtonPressed(BUTTON2) == 1){
//					//temp_RED++;
//					AUTO_RED++;
//					if(AUTO_RED > MAX_COUNT) AUTO_RED = MAX_COUNT;
//				}
//
//				if(isButtonPressed(BUTTON3) == 1) Stat_M2_3 = SAVE;
//				break;
//			case SAVE:
//				//AUTO_RED = temp_RED;
//				mode = MODE1;
//				Setup();
//				break;
//			default:
//				break;
//		}
//		if(isButtonPressed(BUTTON1) == 1) mode = MODE3;
	}
}
