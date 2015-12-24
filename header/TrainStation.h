#ifndef TRAINSTATION_H_
#define TRAINSTATION_H_
#include <string>

class TrainStation{
public:
	TrainStation(std::string name, int adress);
	~TrainStation();
	std::string Name;
	std::string Adress;
};

#endif /* TRAINSTATION_H_ */
