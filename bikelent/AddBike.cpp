#include <string>
#include "AddBike.h"

AddBike::AddBike(AddBikeUI* ui, User* currUser) {
	this->ui = ui;
	this->bikeCol = currUser->getBikeCol();

	ui->startInterface(this);
}

bool AddBike::addNewBike(string bikeID, string bikeName) {
	if (!bikeCol->tryGetBikePtr(bikeID)) {
		bikeCol->addBike(bikeID, bikeName);
		return true;
	}
	else return false;
}