/*
 * main.c
 *
 *  Created on: Sep 28, 2023
 *      Author: adham
 */
#include <avr/io.h>
#include <util/delay.h>
#include "std_types.h"

#include "MCAL/Timer2/timer2.h"
#include "MCAL/GPIO/gpio.h"
#include "HAL/Multiplixed7Seg/multiplexed7seg.h"

uint8 counter = 0;

//void render7Seg() {
////	Eta32mini_SevenSegment_Display(counter);
////	GPIO_togglePin(PORTC_ID,PIN6_ID);
////	GPIO_togglePin(PORTC_ID,PIN7_ID);
//	GPIO_togglePin(PORTA_ID,PIN0_ID);
//
//}

int main(void) {
//	TIMER2_startTimer2(1, render7Seg);
	MULTIPLEXED7SEG_init();
	while (1){
		MULTIPLEXED7SEG_displayNumber(60);
	}
}
