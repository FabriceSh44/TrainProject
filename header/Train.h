/*
 * Train.h
 *
 *  Created on: Dec 18, 2015
 *      Author: fabriceedon
 */

#ifndef HEADER_TRAIN_H_
#define HEADER_TRAIN_H_

#include <string>
#include <iostream>
#include <chrono>
#include <thread>

class Train{
public:
	Train(std::string name, int cargoSize, int startingPoint, int speed);
	void Start();

	int getAdress() const {
		return _adress;
	}

	int getCargoSize() const {
		return _cargoSize;
	}

	const std::string& getName() const {
		return _name;
	}

	int getSpeed() const {
		return _speed;
	}

private:
	std::string _name;
	int _adress;
	int _speed;
	int _cargoSize;
};

#endif /* HEADER_TRAIN_H_ */
