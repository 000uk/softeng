#pragma once
#include <string>
#include "ViewBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class ViewBikeUI;

class ViewBike {
private:
	ViewBikeUI* ui;
	RentedBikeCollection* rentedBikeCol;

public:
	ViewBike(ViewBikeUI* ui, User* currUser);
	BikeInfo* getRentedBike();
	int getBikeInfoCount();
};