################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/Ej1TEST.cpp \
../test/Ej2TEST.cpp \
../test/Ej3TEST.cpp \
../test/Ej4TEST.cpp \
../test/Ej5TEST.cpp 

OBJS += \
./test/Ej1TEST.o \
./test/Ej2TEST.o \
./test/Ej3TEST.o \
./test/Ej4TEST.o \
./test/Ej5TEST.o 

CPP_DEPS += \
./test/Ej1TEST.d \
./test/Ej2TEST.d \
./test/Ej3TEST.d \
./test/Ej4TEST.d \
./test/Ej5TEST.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


