 /******************************************************************************
 *
 * Module: Timer 2
 *
 * File Name: timer2.h
 *
 * Description: Header file for the AVR timer2 driver
 *
 * Author: Adham Nour
 *
 *******************************************************************************/

#ifndef TIMER2_H_
#define TIMER2_H_

#include "../../std_types.h"

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
/*
 * Description :
 * call the <callback> function every <time> milliseconds
 */
void TIMER2_startTimer2 (uint8 time,void (*callback)(void));

#endif /* TIMER2_H_ */
