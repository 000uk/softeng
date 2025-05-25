#include <iostream>
#include <string>
#include "AddBike.h"

using namespace std;

AddBike::AddBike(AddBikeUI* ui, BikeCollection* bikeCol) {
	this->ui = ui;
	this->bikeCol = bikeCol;

	ui->startInterface(this);
}

bool AddBike::addNewBike(string bikeID, string bikeName) {
	if (!bikeCol->isAlreadyExist(bikeID)) {
		bikeCol->addBike(bikeID, bikeName);
		return true;
	}
	else return false;
}