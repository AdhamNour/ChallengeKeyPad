 /******************************************************************************
 *
 * Module: The Application
 *
 * File Name: Application.c
 *
 * Description: Header file for the Two Common Cathod Multiplexed Seven Segement driver
 * with no decoder IC
 *
 * Author: Adham Nour
 *
 *******************************************************************************/
#include "application.h"
#include "../HAL/Multiplixed7Seg/multiplexed7seg.h"
#include "../HAL/Keypad/Keypad.h"
#include "avr/io.h"

/*
 * Description:
 * this function is reponsable to inizialize the hardware
 */

void APPLICATION_setup(){
	MULTIPLEXED7SEG_init();
	KEYPAD_init();
	DDRA = 0xFF;
	PORTA=0xFF;
}

/*
 * Description:
 * this is the main loop of the application
 */

void APPLICATION_loop(){

	uint8 x = KEYPAD_getPressedKey();//	MULTIPLEXED7SEG_displayNumber(99);
	if(x<=16){
		PORTA =x;
	}

}
