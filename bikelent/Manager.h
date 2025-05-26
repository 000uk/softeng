#pragma once
#include <string.h>
#include "User.h"

class Manager : public User
{
private:
	BikeCollection* bikeCol;

public:
	Manager(string userID, string userPW, int phoneNum = 0);
	~Manager();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};