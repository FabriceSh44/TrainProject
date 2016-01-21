#ifndef TRAINSTATION_H_
#define TRAINSTATION_H_
#include "package.h"
#include <string>
#include <queue>
#include <thread>
#include <iostream>

using namespace std;

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
	std::queue<Package>* _packageToSendQueue;
	std::queue<Package>* _packageReceivedQueue;
	std::thread* retrievalThread;
	std::thread* postThread;
	int _adress;
	void StartToSendCounter();
	void StartClientCollectionCounter();

};

#endif /* TRAINSTATION_H_ */
