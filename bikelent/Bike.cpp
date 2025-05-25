#include <string>
#include "Bike.h"

using namespace std;

Bike::Bike(string bikeID, string bikeName) {
	this->bikeID = bikeID;
	this->bikeName = bikeName;
}

string Bike::getBikeID() {
	return bikeID;
}

string Bike::getBikeName() {
	return bikeName;
}

bool Bike::getStatus() {
	return status;
}

void Bike::setStatus() {
	status = !status;
}