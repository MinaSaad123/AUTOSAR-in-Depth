/*
 * DoorLockAlgoSW.c
 *
 *     Author: Mina Saad
 *
 */

//---------------<Include>
#include "RTE_Gen/Rte_DoorLockAlgoSW.h"

//===============================================================================//
//                                 Macros
//===============================================================================//
#define LedOn  0
#define LedOff 1
//---------------------------------------------------------------------------------


/*****************************************************
 * Runnable: 	DoorLockAlgo
 * Period:		0.012
 *****************************************************/
void DoorLockAlgo_Runnable(void)
{
	uint8 DoorState = 0;

	//Read DoorState from RTE SR interface
	DoorState = Rte_IRead_DoorLockAlgoSW_DoorLockAlgo_Rport_SR_DoorState_DoorState();

	if (DoorState)
	{
		//Door is opened
		Rte_Call_Rport_CS_LedSwitch_LED_Switch(LedOn);

	} else
	{
		Rte_Call_Rport_CS_LedSwitch_LED_Switch(LedOff);
	}


}
