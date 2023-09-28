################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Multiplixed7Seg/multiplexed7seg.c 

OBJS += \
./HAL/Multiplixed7Seg/multiplexed7seg.o 

C_DEPS += \
./HAL/Multiplixed7Seg/multiplexed7seg.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Multiplixed7Seg/%.o: ../HAL/Multiplixed7Seg/%.c HAL/Multiplixed7Seg/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


