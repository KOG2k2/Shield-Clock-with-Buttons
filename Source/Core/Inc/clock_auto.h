/*
 * clock_auto.h
 *
 *  Created on: Nov 24, 2022
 *      Author: Admin
 */

#ifndef INC_CLOCK_AUTO_H_
#define INC_CLOCK_AUTO_H_

#include "led_disp.h"
#include "software_timer.h"
<<<<<<< HEAD
=======
#include "button.h"
>>>>>>> f3699c7 (add clock when push buttons, still bug)

#define INITIAL_STATE 0

#define SECOND_COUNT 60
#define MINUTE_COUNT 60
#define HOUR_COUNT 12

#define NORMAL 0
#define MODE_CHANGE 1
#define MODE_UP 2
#define MODE_DOWN 3

extern int Second_count;
extern int Minute_count;
extern int Hour_count;

extern int mode;

void clock_auto_run();

#endif /* INC_CLOCK_AUTO_H_ */
