#include <string>
#include "Member.h"

using namespace std;

Member::Member(string userID, string userPW, int phoneNum)
	: User(userID, userPW, phoneNum) {
	this->rentedBikeCol = new RentedBikeCollection();
}

Member::~Member() {
	delete rentedBikeCol;
}

BikeCollection* Member::getBikeCol() {
	return NULL;
}

RentedBikeCollection* Member::getRentedBikeCol() {
	return rentedBikeCol;
}