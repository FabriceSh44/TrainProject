/*
 * Train.cpp
 *
 *  Created on: Dec 18, 2015
 *      Author: fabriceedon
 */

#include "Train.h"

Train::Train(std::string name, int cargoSize, int startingPoint, int speed,
		RailRoad& railRoad) :
		_name(name), _adress(startingPoint), _speed(
				speed), _cargoSize(cargoSize), _railRoad(railRoad) {
}

std::mutex railRoad_access_lock;
void Train::Start() {
	while (true) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		railRoad_access_lock.lock();
		this->_adress = _railRoad.RequestMoveTo(this->_adress, this->_speed);
		std::cout << this->_name << " is at " << this->_adress << "."
				<< std::endl;
		railRoad_access_lock.unlock();
	}
}
