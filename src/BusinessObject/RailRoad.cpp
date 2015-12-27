/*
 * RailRoad.cpp
 *
 *  Created on: Dec 19, 2015
 *      Author: fabriceedon
 */
#include "RailRoad.h"

RailRoad::RailRoad(int distance) {
	this->_distance = distance;
}

void RailRoad::GenerateTrainStation(std::string name, int adress) {
	TrainStation trainStation = TrainStation(name, adress);
	this->_trainStations.push_back(trainStation);
	return;
}

void RailRoad::GenerateTrain(std::string name, int adress, double speed) {
	Train train = Train(name, 50, adress, speed, *this);
	this->_trains.push_back(train);
	return;
}

void StartTrain(Train train) {
	train.Start();
}

void RailRoad::StartTrains() {

	std::vector<std::thread *> thread_vector;

	for (Train train : this->_trains) {
		thread_vector.push_back(new std::thread(StartTrain, train));
	}

	for (std::thread* t : thread_vector) {
		t->join();
		delete t;
	}
	std::cout << "Exit RailRoad" << std::endl;

	return;
}

int RailRoad::RequestMoveTo(int startAdress, int speed) {
	int finalAdress = startAdress;
	int curAdress = startAdress;
	while (speed-- > 0) {
		curAdress = (curAdress + 1) % this->_distance;
		bool oneTrainIsHere = false;
		for (Train train : this->_trains) {
			if (curAdress == train.getAdress()) {
				oneTrainIsHere = true;
				break;
			}
		}
		if (!oneTrainIsHere) {
			finalAdress = curAdress;
		}
	}
	return finalAdress;
}

int RailRoad::GetFreeAdress(int adress) {

	return adress;
}
