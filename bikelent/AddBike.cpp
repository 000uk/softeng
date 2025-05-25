#include <iostream>
#include <string>
#include "AddBike.h"

using namespace std;

AddBike::AddBike(AddBikeUI* ui, User* currUser) {
	this->ui = ui;
	this->bikeCol = currUser->getBikeCol();

	ui->startInterface(this);
}

bool AddBike::addNewBike(string bikeID, string bikeName) {
	if (!bikeCol->isAlreadyExist(bikeID)) {
		bikeCol->addBike(bikeID, bikeName);
		return true;
	}
	else return false;
}