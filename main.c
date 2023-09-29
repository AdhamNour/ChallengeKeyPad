/*
 * main.c
 *
 *  Created on: Sep 28, 2023
 *      Author: adham
 */

#include "Application/application.h"

//void render7Seg() {
////	Eta32mini_SevenSegment_Display(counter);
////	GPIO_togglePin(PORTC_ID,PIN6_ID);
////	GPIO_togglePin(PORTC_ID,PIN7_ID);
//	GPIO_togglePin(PORTA_ID,PIN0_ID);
//
//}

int main(void) {
//	TIMER2_startTimer2(1, render7Seg);
	APPLICATION_setup();
	while (1) {
		APPLICATION_loop();
	}
}
