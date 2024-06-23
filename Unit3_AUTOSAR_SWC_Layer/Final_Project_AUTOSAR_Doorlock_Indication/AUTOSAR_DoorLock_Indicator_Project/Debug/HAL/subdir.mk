################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/EEPROM_Slave.c 

OBJS += \
./HAL/EEPROM_Slave.o 

C_DEPS += \
./HAL/EEPROM_Slave.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/EEPROM_Slave.o: ../HAL/EEPROM_Slave.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/HAL/INC" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/Autosar_Implementation/AutosarIncludeFiles" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/MCAL/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"HAL/EEPROM_Slave.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

