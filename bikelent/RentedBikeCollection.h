#pragma once
#include <string.h>
#include "Bike.h"

class RentedBikeCollection {
private:
	Bike* rentedBikeList[10];
	int numRentedBikes = 0;

public:
	bool isOwned(string bikeID);
	void addBikeInfo(Bike* rentedBike);
};