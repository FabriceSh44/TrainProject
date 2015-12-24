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

class RailRoad {
public:

	RailRoad(int distance);
	void GenerateTrainStation(std::string name, int adress);
	void GenerateTrain(std::string name, int adress, double speed);
	void StartTrains();

	int getDistance() const {
		return distance;
	}

private:
	int distance;
	std::vector<TrainStation> _trainStations;
	std::vector<Train> _trains;
};




#endif /* HEADER_RAILROAD_H_ */
