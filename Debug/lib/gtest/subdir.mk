################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../lib/gtest/gtest-all.cc 

CC_DEPS += \
./lib/gtest/gtest-all.d 

OBJS += \
./lib/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
lib/gtest/%.o: ../lib/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


