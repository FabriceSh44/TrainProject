#include "TrainStation.h"

TrainStation::TrainStation(std::string name, int adress)
{
	this->Name = name;
	this->Adress = adress;
}

TrainStation::~TrainStation()
{
	this->Name = nullptr;
}
