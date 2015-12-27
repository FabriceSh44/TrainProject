
#include "Main.h"

int main(int argc, char **argv) {
	RailRoad* railRoad = new RailRoad(100);
	//railRoad->GenerateTrainStation("Station 1", 0);
	//railRoad->GenerateTrainStation("Station 2", 50);
	railRoad->GenerateTrain("Slow train", 3, 2);
	railRoad->GenerateTrain("Fast train", 0, 5);
	//Trains move speed every 1 seconde. They try to access Railroad(Adress:Adress+speed).
	//If one of the block Adress+x is taken, they take Adress +  x -1
	railRoad->StartTrains();

}
