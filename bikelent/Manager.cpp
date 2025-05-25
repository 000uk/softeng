#include <string>
#include "Manager.h"

using namespace std;

Manager::Manager(string userID, string userPW, int phoneNum)
	: User(userID, userPW, phoneNum) {
	this->bikeCol = new BikeCollection();
}

Manager::~Manager() {
	delete bikeCol;
}

BikeCollection* Manager::getBikeCol() {
	return bikeCol;
}