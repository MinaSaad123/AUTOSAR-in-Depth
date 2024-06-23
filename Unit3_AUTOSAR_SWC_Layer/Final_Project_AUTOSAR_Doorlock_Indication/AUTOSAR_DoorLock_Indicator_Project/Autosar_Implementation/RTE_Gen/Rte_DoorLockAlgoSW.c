/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_DoorLockAlgoSW_.c
 * Generated on: Mon Apr 22 23:49:45 EET
 ********************************************************************/

#include "string.h"
#include "Rte_DoorLockAlgoSW.h"

Rte_DE_uint8 ReadDoorSensor_Pport_SR_DoorState_DoorState;
Rte_DE_uint8 DoorLockAlgo_Rport_SR_DoorState_DoorState;

const Rte_CDS_DoorLockAlgoSW Rte_Instance_DoorLockAlgoSW = {
&ReadDoorSensor_Pport_SR_DoorState_DoorState
};

const Rte_CDS_DoorLockAlgoSW * const Rte_Inst_DoorLockAlgoSW = &Rte_Instance_DoorLockAlgoSW;


Std_ReturnType DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch_Buffer_retcode = RTE_E_OK;

FunctionPtr_DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch Rte_Call_DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch_Delegate = 0;

uint8 Rte_IRead_DoorLockAlgoSW_DoorLockAlgo_Rport_SR_DoorState_DoorState (void)
{
	return (Rte_Inst_DoorLockAlgoSW)->DoorLockAlgo_Rport_SR_DoorState_DoorState->value;
}
Std_ReturnType Rte_Call_DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch (uint8 LED_State)
{
	Std_ReturnType __result = DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch_Buffer_retcode;
	if ( Rte_Call_DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch_Delegate != 0 ) {
		__result = Rte_Call_DoorLockAlgoSW_Rport_CS_LedSwitch_LED_Switch_Delegate(LED_State);
	}
	LedSwitch_Runnable(LED_State);

	return __result;
}
