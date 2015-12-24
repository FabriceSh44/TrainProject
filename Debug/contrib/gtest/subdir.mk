################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../contrib/gtest/gtest-all.cc 

CC_DEPS += \
./contrib/gtest/gtest-all.d 

OBJS += \
./contrib/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
contrib/gtest/%.o: ../contrib/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/Users/fabriceedon/Dev/Cpp/TrainProject/contrib" -I"/Users/fabriceedon/Dev/Cpp/TrainProject/header" -O0 -g3 -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


