################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BusinessObject/RailRoad.cpp \
../src/BusinessObject/Train.cpp \
../src/BusinessObject/TrainStation.cpp 

OBJS += \
./src/BusinessObject/RailRoad.o \
./src/BusinessObject/Train.o \
./src/BusinessObject/TrainStation.o 

CPP_DEPS += \
./src/BusinessObject/RailRoad.d \
./src/BusinessObject/Train.d \
./src/BusinessObject/TrainStation.d 


# Each subdirectory must supply rules for building sources it contributes
src/BusinessObject/%.o: ../src/BusinessObject/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I"/Users/fabriceedon/Dev/Cpp/TrainProject/contrib" -I"/Users/fabriceedon/Dev/Cpp/TrainProject/header" -O0 -g3 -Wall -Wextra -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


