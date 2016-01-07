#ifndef TRAINSTATION_H_
#define TRAINSTATION_H_
#include <string>

class TrainStation{
public:
	TrainStation(std::string name, int adress);
	~TrainStation();

	const int getAdress() const {
		return Adress;
	}

	const std::string& getName() const {
		return Name;
	}

private:
	std::string Name;
	int Adress;
};

#endif /* TRAINSTATION_H_ */
