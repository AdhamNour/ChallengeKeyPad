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


/*
 * Description:
 * this function is reponsable to inizialize the hardware
 */

void APPLICATION_setup(){
	MULTIPLEXED7SEG_init();
	KEYPAD_init();
}

/*
 * Description:
 * this is the main loop of the application
 */

void APPLICATION_loop(){
	MULTIPLEXED7SEG_displayNumber(KEYPAD_getPressedKey());
//	MULTIPLEXED7SEG_displayNumber(99);

}
