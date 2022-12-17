/*
 * clock_auto.c
 *
 *  Created on: Nov 24, 2022
 *      Author: Admin
 */

#include "clock_auto.h"

int Second_count = INITIAL_STATE;
int Minute_count = INITIAL_STATE;
int Hour_count = INITIAL_STATE;

//int state = INITIAL_STATE;

int mode = NORMAL;

void clock_auto_run(){
	if(mode == NORMAL && timer1_flag == 1){
		if(Second_count == SECOND_COUNT){
			Second_count = INITIAL_STATE;
			Minute_count++;
		}

		if(Minute_count == MINUTE_COUNT){
			Minute_count = INITIAL_STATE;
			Hour_count++;
		}

		if(Hour_count == HOUR_COUNT) Hour_count = INITIAL_STATE;

		clear_All_Clock();
		//set_Number_on_Clock(Second_count);
		set_Number_on_Clock(Second_count/5);
		set_Number_on_Clock(Minute_count/5);
		set_Number_on_Clock(Hour_count);

		Second_count++;
		//setTimer1(100);
	//}

		switch(mode){
			case NORMAL:
				if (isButtonPressed(BUTTON1) == 1) mode = MODE_CHANGE;
				break;
			case MODE_CHANGE:
				if (isButtonPressed(BUTTON1) == 1) mode = MODE_UP;
				break;
			case MODE_UP:
				if (isButtonPressed(BUTTON1) == 1) mode = MODE_DOWN;
				break;
			case MODE_DOWN:
				if (isButtonPressed(BUTTON1) == 1) mode = NORMAL;
				break;
			default:
				break;
			}

		setTimer1(100);
	}
}
