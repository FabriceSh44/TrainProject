#include "TrainStation.h"

TrainStation::TrainStation(std::string name, int adress) :
		_name(name), _adress(adress) {
	this->_packageToSendQueue = new std::queue<Package>();
	this->_packageReceivedQueue = new std::queue<Package>();
}

TrainStation::~TrainStation() {
	this->_name = nullptr;
}

void ClientPostTheirPacket(std::queue<Package>* packageToSendQueue) {
	while (true) {
		double randomValue = rand() % 100 / 100;

		if (randomValue > 0.90) {
			Package package = Package(0, 50, false);
			packageToSendQueue->push(package);
			std::cout << "Package from " << package.getOrigin() << " to "
					<< package.getDestination() << " has been posted";
		}
	}
}

void ClientRetrieveTheirPacket(std::queue<Package>* packageReceivedQueue) {
	while (true) {
		double randomValue = rand() % 100 / 100;

		if (randomValue > 0.90) {
			Package package = packageReceivedQueue->front();
			packageReceivedQueue->pop();
			std::cout << "Package from " << package.getOrigin() << " to "
					<< package.getDestination() << " has been retrieved";
		}
	}
}

void TrainStation::StartClientCollectionCounter() {
	retrievalThread = new std::thread(ClientRetrieveTheirPacket, _packageReceivedQueue);
}

void TrainStation::StartToSendCounter() {
	postThread = new std::thread(ClientPostTheirPacket, _packageToSendQueue);
}

void TrainStation::Open() {
	StartToSendCounter();
	StartClientCollectionCounter();
}

