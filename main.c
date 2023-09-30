/*
 * main.c
 *
 *  Created on: Sep 28, 2023
 *      Author: adham
 */

#include "Application/application.h"
#include <avr/io.h>
#include "MCAL/Timer2/timer2.h"
#include <avr/interrupt.h>
void togelLed() {
	PORTB ^= (1 << 2);

}

int main(void) {
	APPLICATION_setup();
	while (1) {
		APPLICATION_loop();
	}


}

