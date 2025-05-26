#include <string>
#include "ViewBike.h"


ViewBike::ViewBike(ViewBikeUI* ui, User* currUser) {
	this->ui = ui;
	this->rentedBikeCol = currUser->getRentedBikeCol();

	ui->startInterface(this);
}

BikeInfo* ViewBike::getRentedBike() {
	return rentedBikeCol->getBikeInfo();
}

int ViewBike::getBikeInfoCount() {
	return rentedBikeCol->getNumRentedBikes();
}