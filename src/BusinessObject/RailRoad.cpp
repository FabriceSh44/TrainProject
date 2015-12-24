
/*
 * RailRoad.cpp
 *
 *  Created on: Dec 19, 2015
 *      Author: fabriceedon
 */
#include "RailRoad.h"

RailRoad::RailRoad(int distance) {
	this->distance=distance;
}

void RailRoad::GenerateTrainStation(std::string name, int adress) {
	TrainStation trainStation = TrainStation(name, adress);
	this->_trainStations.push_back(trainStation);
	return;
}

void RailRoad::GenerateTrain(std::string name, int adress, double speed) {
	Train train = Train(name,50,adress,speed);
	this->_trains.push_back(train);
	return;
}

void StartTrain(Train train)
{
	train.Start();
}

void RailRoad::StartTrains() {

	for(Train train : this->_trains)
	{
		std::thread t(StartTrain,train);
	}

	std::this_thread::sleep_for (std::chrono::seconds(5));
	std::cout<<"test"<<std::endl;


	return;
}


