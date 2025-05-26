#pragma once
#include <string>
#include "RentBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class RentBikeUI;

class RentBike {
private:
	RentBikeUI* ui;
	BikeCollection* bikeCol;
	RentedBikeCollection* rentedBikeCol;

public:
	RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol);
	string tryGetRentedName(string bikeID);
};