/*
 * Train.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: fabriceedon
 */

#include "Train.h"


Train::Train(std::string name, int cargoSize, int startingPoint, int speed){
	this->_name = name;
	this->_cargoSize = cargoSize;
	this->_adress = startingPoint;
	this->_speed = speed;
}

void Train::Start() {
	while(true)
	{
		std::this_thread::sleep_for (std::chrono::seconds(1));
		this->_adress += this->_speed;
		std::cout << this->_name<< " is at "<<this->_adress<<"."<< std::endl;
	}
}
