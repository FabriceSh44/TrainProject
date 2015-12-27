/*
 * RailRoad.h
 *
 *  Created on: Dec 18, 2015
 *      Author: fabriceedon
 */

#ifndef HEADER_RAILROAD_H_
#define HEADER_RAILROAD_H_

#include <string>
#include <vector>
#include <thread>
#include <chrono>

#include "Train.h"
#include "TrainStation.h"
class Train;
class RailRoad {
public:

	RailRoad(int distance);
	void GenerateTrainStation(std::string name, int adress);
	void GenerateTrain(std::string name, int adress, double speed);

	void StartTrains();
	int RequestMoveTo(int startAdress, int speed);

	int getDistance() const {
		return _distance;
	}

private:
	int _distance;
	std::vector<TrainStation> _trainStations;
	std::vector<Train> _trains;
	int GetFreeAdress(int adress);
};

#endif /* HEADER_RAILROAD_H_ */
