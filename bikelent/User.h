#pragma once
#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"

using namespace std;

class User
{
private:
	string userID;
	string userPW;
	int phoneNum;

public:
	User(string userID, string userPW, int phoneNum);
	string getUserID();
	string getUserPW();
	virtual BikeCollection* getBikeCol() = 0;
	virtual RentedBikeCollection* getRentedBikeCol() = 0;
};