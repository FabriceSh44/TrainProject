/*
 * package.h
 *
 *  Created on: Jan 18, 2016
 *      Author: fabriceedon
 */

#ifndef HEADER_PACKAGE_H_
#define HEADER_PACKAGE_H_
class Package {
public:
	Package(int destination, int origin, bool isPrioritary) :
			_destination(destination), _origin(origin), _isPrioritary(isPrioritary){};

	int getDestination() const {
		return _destination;
	}

	bool isIsPrioritary() const {
		return _isPrioritary;
	}

	int getOrigin() const {
		return _origin;
	}

private:
	int _destination;
	int _origin;
	bool _isPrioritary;
};

#endif /* HEADER_PACKAGE_H_ */
