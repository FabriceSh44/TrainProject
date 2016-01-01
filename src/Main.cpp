
#include "Main.h"

int main(int argc, char **argv) {
	RailRoad* railRoad = new RailRoad(100);
	railRoad->GenerateTrainStation("Station 1", 0);
	railRoad->GenerateTrainStation("Station 2", 50);
	railRoad->GenerateTrain("Slow train", 3, 1);
	railRoad->GenerateTrain("Fast train", 0, 2);
	railRoad->StartTrains();

}
