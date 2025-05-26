#pragma once
#include <string.h>
#include "BikeCollection.h"

BikeCollection::~BikeCollection() {
	for (int i = 0; i < numBikes; i++) {
		delete bikeList[i];
	}
}

Bike* BikeCollection::tryGetBikePtr(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return bikeList[i];
		}
	}
	return NULL;
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