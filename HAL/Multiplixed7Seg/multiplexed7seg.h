 /******************************************************************************
 *
 * Module: Multiplexed Seven Segements
 *
 * File Name: multiplexed7seg.h
 *
 * Description: Header file for the Two Common Cathod Multiplexed Seven Segement driver
 * with no decoder IC
 *
 * Author: Adham Nour
 *
 *******************************************************************************/

#ifndef MULTIPLIXED7SEG_MULTIPLEXED7SEG_H_
#define MULTIPLIXED7SEG_MULTIPLEXED7SEG_H_

#include "../../common_macros.h"
#include "../../MCAL/GPIO/gpio.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define SEVEN_SEG_OUTPUT_PORT PORTA_ID
#define SEVEN_SEG_START_PIN PIN1_ID
#define SEVEN_SEG_CONTROL_PORT PORTC_ID
#define SEVEN_SEG_CONTROL_START_PIN PIN6_ID

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description:
 * initilze the sevensegs
 */
void MULTIPLEXED7SEG_init();
/*
 * Description:
 * The functions displays the output on the seven segement
 * the maximum number to display is 99
 */
void MULTIPLEXED7SEG_displayNumber(uint8 num);

#endif /* MULTIPLIXED7SEG_MULTIPLEXED7SEG_H_ */
