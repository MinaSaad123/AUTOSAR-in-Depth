################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.c \
../Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.c 

OBJS += \
./Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.o \
./Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.o 

C_DEPS += \
./Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.d \
./Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.d 


# Each subdirectory must supply rules for building sources it contributes
Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.o: ../Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/HAL/INC" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/Autosar_Implementation/AutosarIncludeFiles" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/MCAL/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Autosar_Implementation/RTE_Gen/Rte_DoorLockAlgoSW.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.o: ../Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/HAL/INC" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/Autosar_Implementation/AutosarIncludeFiles" -I"C:/Users/HP/STM32CubeIDE/workspace_1.4.0/AUTOSAR_DoorLock_Indicator_Project/MCAL/INC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Autosar_Implementation/RTE_Gen/Rte_DoorSensorAbstractionSWC.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

