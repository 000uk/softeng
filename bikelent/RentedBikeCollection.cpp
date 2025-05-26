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