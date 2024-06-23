/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Mina Saad
 ******************************************************************************
 */

#include "Stm32f103x8.h"
#include "Stm32f103c6_I2C_Driver.h"
#include "Stm32f103c6_RCC_Driver.h"
#include "Stm32f103c6_SPI_Driver.h"
#include "Stm32f103c6_EXTI_Driver.h"
#include "Stm32f103c6_GPIO_Driver.h"
#include "Stm32f103c6_Uart_Driver.h"
#include "../Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.h"
#include "../Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.h"

void MCU_Init ()
{
	//================================GPIO Init================================//
	E_GPIOA_CLK_EN(); //Enable GPIOA Clock

	//PA3 ----> Door sensor
	GPIO_Config_t PinCfg_DoorSensor;

	PinCfg_DoorSensor.GPIO_PinNumber = GPIO_PIN_3;
	PinCfg_DoorSensor.GPIO_MODE = GPIO_MODE_INPUT_Floating;
	MCAL_GPIO_INIT(GPIOA, &PinCfg_DoorSensor);

	//PA7 ----> Led On/Off

	PinCfg_DoorSensor.GPIO_PinNumber = GPIO_PIN_7;
	PinCfg_DoorSensor.GPIO_MODE = GPIO_MODE_OUTPUT_PP;
	PinCfg_DoorSensor.GPIO_Output_SPEED = GPIO_OUTPUT_SPEED_10M;
	MCAL_GPIO_INIT(GPIOA, &PinCfg_DoorSensor);

}


void StartOS ()
{
	unsigned char i = 0;

	while (1)
	{

		if (i == 10)
		{
            ReadDoorSensor_Runnable();
			i++;

		} else if (i == 12)
		{
			//RTE_Event_12ms
			DoorLockAlgo_Runnable();

			i = 0;

		} else
		{
			i++;
		}
	}


}

int main(void)
{
	//Init MCU
	MCU_Init ();

	//Start OS
	StartOS();

	while (1);




}




