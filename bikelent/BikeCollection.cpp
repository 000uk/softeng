#pragma once
#include <string.h>
#include "BikeCollection.h"

BikeCollection::~BikeCollection() {
	for (int i = 0; i < numBikes; i++) {
		delete bikeList[i];
	}
}

void BikeCollection::addBike(string bikeID, string bikeName) {
	bikeList[numBikes++] = new Bike(bikeID, bikeName);
}

bool BikeCollection::isAlreadyExist(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return true;
		}
	}
	return false;
}