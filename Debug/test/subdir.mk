################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/AllTests.cpp \
../test/FooTest.cpp 

OBJS += \
./test/AllTests.o \
./test/FooTest.o 

CPP_DEPS += \
./test/AllTests.d \
./test/FooTest.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/Users/fabriceedon/Dev/Cpp/TrainProject/contrib" -I"/Users/fabriceedon/Dev/Cpp/TrainProject/header" -O0 -g3 -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


