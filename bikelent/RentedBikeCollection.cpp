#pragma once
#include <string.h>
#include "RentedBikeCollection.h"

bool RentedBikeCollection::isOwned(string bikeID) {
	for (int i = 0; i < numRentedBikes; i++) {
		if (bikeID == rentedBikeList[i]->getBikeID()) {
			return true;
		}
	}
	return false;
}

void RentedBikeCollection::addBikeInfo(Bike* rentedBike) {
	rentedBikeList[numRentedBikes++] = rentedBike;
	rentedBike->setStatus();
}

BikeInfo* RentedBikeCollection::getBikeInfo() {
	BikeInfo* bikeList = new BikeInfo[numRentedBikes];

	for (int i = 0; i < numRentedBikes; i++) {
		bikeList[i] = { rentedBikeList[i]->getBikeID(), rentedBikeList[i]->getBikeName() };
	}

	return bikeList;
}

int RentedBikeCollection::getNumRentedBikes() {
	return this->numRentedBikes;
}