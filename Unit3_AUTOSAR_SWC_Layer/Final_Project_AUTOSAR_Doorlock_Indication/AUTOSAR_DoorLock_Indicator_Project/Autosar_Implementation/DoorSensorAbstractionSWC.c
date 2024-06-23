/*
 * DoorSensorAbstractionSWC.c
 *
 *      Author: Mina Saad
 */

//---------------<Include>
#include "RTE_Gen/Rte_DoorSensorAbstractionSWC.h"
#include "DIO.h"

//===============================================================================//
//                                 Macros
//===============================================================================//
#define LedOn  0
#define LedOff 1
//---------------------------------------------------------------------------------

/*****************************************************
 * Port: 		Pport_CS_LedSwitch
 * Interface:	IF_CS_LedSwitch
 * Operation:	LED_Switch
 *****************************************************/
Std_ReturnType LedSwitch_Runnable(uint8 LED_State)
{
	if (LED_State == LedOn)
	{
		Dio_writeChannel(GPIO_PIN_7, LedOn);

		return RTE_E_IF_CS_LedSwitch_E_Ok;

	} else if ( LED_State == LedOff)
	{
		Dio_writeChannel(GPIO_PIN_7, LedOff);

		return RTE_E_IF_CS_LedSwitch_E_Not_Ok;

	} else
	{
		return RTE_E_IF_CS_LedSwitch_E_Not_Ok;
	}

}


 /*****************************************************
  * Runnable: 	ReadDoorSensor
  * Period:		0.01
  *****************************************************/
void ReadDoorSensor_Runnable(void)
{
	uint8 DoorState = 0;

	//Read GPIO Pin 3
	DoorState = Dio_ReadChannel(DIO_door_ID);

	//Write DoorState to RTE SR interface
	Rte_IWrite_DoorSensorAbstractionSWC_ReadDoorSensor_Pport_SR_DoorState_DoorState(DoorState);

}
