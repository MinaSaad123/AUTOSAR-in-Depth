/*
 * DIO.C
 *
 *      Author: Mina Saad
 */

//--------------<Include>
#include "DIO.h"

unsigned char Dio_ReadChannel  (unsigned char ID)
{
	return ( MCAL_GPIO_ReadPin(GPIO_Port_Used, ID) );
}

void Dio_writeChannel (unsigned char ID, unsigned char Level)
{
	return ( MCAL_GPIO_WritePin(GPIO_Port_Used, Level, ID) );

}


