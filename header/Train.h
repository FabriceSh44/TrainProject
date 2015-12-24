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

class Train{
public:
	Train(std::string name, int cargoSize, int startingPoint, double speed);
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

	double getSpeed() const {
		return _speed;
	}

private:
	std::string _name;
	int _adress;
	double _speed;
	int _cargoSize;
};




#endif /* HEADER_TRAIN_H_ */
