################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/Timer2/timer2.c 

OBJS += \
./MCAL/Timer2/timer2.o 

C_DEPS += \
./MCAL/Timer2/timer2.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/Timer2/%.o: ../MCAL/Timer2/%.c MCAL/Timer2/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g3 -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


