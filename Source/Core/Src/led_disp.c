/*
 * led_disp.c
 *
 *  Created on: Nov 24, 2022
 *      Author: Admin
 */

#include "led_disp.h"

int leds[NUM_OF_LED] = {RED12_Pin, RED1_Pin, RED2_Pin, RED3_Pin, RED4_Pin, RED5_Pin, RED6_Pin, RED7_Pin, RED8_Pin, RED9_Pin, RED10_Pin, RED11_Pin};

void clear_All_Clock(){
	HAL_GPIO_WritePin(GPIOA, leds[0], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[1], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[2], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[3], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[4], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[5], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[6], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[7], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[8], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[9], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[10], OFF);
	HAL_GPIO_WritePin(GPIOA, leds[11], OFF);
}

void set_All_Clock(){
	HAL_GPIO_TogglePin(GPIOA, leds[0]);
	HAL_GPIO_TogglePin(GPIOA, leds[1]);
	HAL_GPIO_TogglePin(GPIOA, leds[2]);
	HAL_GPIO_TogglePin(GPIOA, leds[3]);
	HAL_GPIO_TogglePin(GPIOA, leds[4]);
	HAL_GPIO_TogglePin(GPIOA, leds[5]);
	HAL_GPIO_TogglePin(GPIOA, leds[6]);
	HAL_GPIO_TogglePin(GPIOA, leds[7]);
	HAL_GPIO_TogglePin(GPIOA, leds[8]);
	HAL_GPIO_TogglePin(GPIOA, leds[9]);
	HAL_GPIO_TogglePin(GPIOA, leds[10]);
	HAL_GPIO_TogglePin(GPIOA, leds[11]);
}

void set_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], ON);
}

void clear_Number_on_Clock(int num){
	HAL_GPIO_WritePin(GPIOA, leds[num], OFF);
}
