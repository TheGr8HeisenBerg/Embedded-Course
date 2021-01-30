################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Timer0_Compare_Mode.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: Timer0_Compare_Mode.elf secondary-outputs

# Tool invocations
Timer0_Compare_Mode.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Timer0_Compare_Mode.map -mmcu=atmega16 -o "Timer0_Compare_Mode.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Timer0_Compare_Mode.lss: Timer0_Compare_Mode.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Timer0_Compare_Mode.elf  >"Timer0_Compare_Mode.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Timer0_Compare_Mode.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 Timer0_Compare_Mode.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Timer0_Compare_Mode.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
