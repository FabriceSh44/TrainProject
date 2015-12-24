/*
 * Train.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: fabriceedon
 */

#include "Train.h"


Train::Train(std::string name, int cargoSize, int startingPoint, double speed){
	this->_name = name;
	this->_cargoSize = cargoSize;
	this->_adress = startingPoint;
	this->_speed = speed;
}

void Train::Start() {
	std::cout << this->_name<< " started"<<std::endl;
	//std::this_thread::sleep_for (std::chrono::seconds(5));
}
