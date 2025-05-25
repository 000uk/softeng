#pragma once
#include <string>
#include "AddBikeUI.h"
#include "BikeCollection.h"

using namespace std;

class AddBikeUI;

class AddBike
{
private:
	AddBikeUI* ui;
	BikeCollection* bikeCol;

public:
	AddBike(AddBikeUI* ui, BikeCollection* BikeCol);
	bool addNewBike(string bikeID, string bikeName);
};