#pragma once
#include <string.h>
#include "Bike.h"

class BikeCollection {
private:
	Bike* bikeList[10];
	int numBikes = 0;

public:
	~BikeCollection();
	bool isAlreadyExist(string bikeID);
	void addBike(string bikeID, string bikeName);
};