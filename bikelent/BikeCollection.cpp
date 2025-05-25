#pragma once
#include <string.h>
#include "BikeCollection.h"

BikeCollection::~BikeCollection() {
	for (int i = 0; i < numBikes; i++) {
		delete bikeList[i];
	}
}

bool BikeCollection::isExist(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return true;
		}
	}
	return false;
}

bool BikeCollection::isRented(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return bikeList[i]->getStatus();
		}
	}
	return false;
}

void BikeCollection::addBike(string bikeID, string bikeName) {
	bikeList[numBikes++] = new Bike(bikeID, bikeName);
}