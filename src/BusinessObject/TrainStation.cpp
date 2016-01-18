#include "TrainStation.h"

TrainStation::TrainStation(std::string name, int adress)
{
	this->_name = name;
	this->_adress = adress;
	this->_packageToSendQueue = new std::queue<Package>();
	this->_packageReceivedQueue = new std::queue<Package>();
}

TrainStation::~TrainStation()
{
	this->_name = nullptr;
}

void TrainStation::Open() {

}
