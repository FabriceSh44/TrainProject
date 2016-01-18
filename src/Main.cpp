
#include "Main.h"

int main(int argc, char **argv) {
	RailRoad* railRoad = new RailRoad(100);
	railRoad->GenerateTrainStation("Station 1", 0);
	railRoad->GenerateTrainStation("Station 2", 50);
	railRoad->GenerateTrain("Slow train", 0, 1);
	railRoad->GenerateTrain("Fast train", 3, 2);
	railRoad->OpenTrainStations();
	railRoad->StartTrains();

}
