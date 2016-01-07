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
	auto pointerOnTrain = new TrainStation(name, adress);
	this->_trainStations.push_back(pointerOnTrain);
	return;
}

void RailRoad::GenerateTrain(std::string name, int adress, double speed) {
	auto pointerOnTrain = new Train(name, 50, adress, speed, *this);
	this->_trains.push_back(pointerOnTrain);
	return;
}

void StartTrain(Train* train) {
	train->Start();
}

void RailRoad::StartTrains() {

	std::vector<std::thread *> thread_vector;

	for (Train* train : this->_trains) {
		std::cout << train->getName() << std::endl;
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
	int precAdress = startAdress;
	int curAdress = startAdress;
	while (speed-- > 0) {
		precAdress = curAdress;
		curAdress = (curAdress + 1) % this->_distance;
		for (TrainStation* trainStation : this->_trainStations) {
			if (curAdress == trainStation->getAdress()) {
				std::cout << "Arrived at train station "
						<< trainStation->getName() << std::endl;
				return curAdress;
			}
		}
		for (Train* train : this->_trains) {
			if (curAdress == train->getAdress()) {
				std::cout << "Train \"" << train->getName()
						<< "\" is already at " << curAdress << std::endl;
				return precAdress;
			}
		}
	}
	return curAdress;
}
