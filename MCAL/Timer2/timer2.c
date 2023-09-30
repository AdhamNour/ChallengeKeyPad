/******************************************************************************
 *
 * Module: Timer2
 *
 * File Name: timer2.c
 *
 * Description: Source file for the AVR Timer2 driver
 *
 * Author: Adham Nour
 *
 *******************************************************************************/

#include "timer2.h"
#include <avr/io.h>
#include <avr/interrupt.h>

/*
 * The callback function to be run every timer tick
 */
static void (*_callback)() = NULL_PTR;
static uint8 _counter = 0;
static uint8 _time = 0;
static boolean _isInit = FALSE;

/*
 * Description :
 * Initializing timer registers to be CTC mode
 */
static void initTimer() {
	TCCR2 = (1 << FOC2) | (1 << WGM21) | (1 << CS21); // turning on timer 2 in Compare mode (WGM21) and chosing prescaler =8 (CS21)
	TCNT2 = 0; //initializing the counting register to be zero
	TIMSK |= (1 << OCIE2); // enable timer 2 compare interrupt
	OCR2 = 250; // setting the compare value to 250
	SREG |= 1 << 7;
	_isInit = TRUE;
}

void TIMER2_startTimer2(uint8 time, void (*callback)(void)) {
	initTimer();
	_callback = callback;
	_time = time;
}

ISR(TIMER2_COMP_vect) {
	_counter++;
	if (_counter == _time) {
		if (_callback != NULL_PTR)
			(*_callback)();
		else {

		}
		_counter = 0;
	}

}

