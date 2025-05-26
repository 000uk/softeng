#pragma once
#include <string.h>
#include "Bike.h"

struct BikeInfo {
	string bikeID;
	string bikeName;
};

class RentedBikeCollection {
private:
	Bike* rentedBikeList[10];
	int numRentedBikes = 0;

public:
	bool isOwned(string bikeID);
	void addBikeInfo(Bike* rentedBike);
	BikeInfo* getBikeInfo();
	int getNumRentedBikes();
};