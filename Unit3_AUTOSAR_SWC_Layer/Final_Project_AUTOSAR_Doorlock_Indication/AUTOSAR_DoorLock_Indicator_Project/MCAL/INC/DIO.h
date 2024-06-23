/*
 * DIO.h
 *
 *  Created on: Apr 22, 2024
 *      Author: mina
 */

#ifndef DIO_H_
#define DIO_H_

//---------------<Include>
#include "Stm32f103c6_GPIO_Driver.h"

unsigned char Dio_ReadChannel  (unsigned char ID);
void          Dio_writeChannel (unsigned char ID, unsigned char Level);

//DIO IDs (PortA)
#define DIO_door_ID GPIO_PIN_3
#define LED_ID      GPIO_PIN_7

//Port Used
#define GPIO_Port_Used  GPIOA


#endif /* DIO_H_ */
