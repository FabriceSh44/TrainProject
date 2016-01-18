#ifndef TRAINSTATION_H_
#define TRAINSTATION_H_
#include "package.h"
#include <string>
#include <queue>

class TrainStation{
public:
	TrainStation(std::string name, int adress);
	~TrainStation();
	void Open();

	const int getAdress() const {
		return _adress;
	}

	const std::string& getName() const {
		return _name;
	}

private:
	std::string _name;
	std::queue<Package> _packageToSendQueue;
	std::queue<Package> _packageReceivedQueue;
	int _adress;
};

#endif /* TRAINSTATION_H_ */
