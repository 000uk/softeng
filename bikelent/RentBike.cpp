#include <string>
#include "RentBike.h"

RentBike::RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol) {
	this->ui = ui;
	this->bikeCol = bikeCol;
	this->rentedBikeCol = currUser->getRentedBikeCol();

	ui->startInterface(this);
}

string RentBike::tryGetRentedName(string bikeID) {
	Bike* selectedBike = bikeCol->tryGetBikePtr(bikeID);

	if (selectedBike && 
		!(bikeCol->isRented(bikeID)) &&
		!(rentedBikeCol->isOwned(bikeID))) {
		rentedBikeCol->addBikeInfo(selectedBike);
		return selectedBike->getBikeName();
	}
	else return "";
}