#pragma once
#include <string.h>
#include "User.h"
#include "BikeCollection.h"

class Manager : public User
{
private:
	BikeCollection* bikeCol;

public:
	Manager(string userID, string userPW, int phoneNum = 0);
	~Manager();
	virtual BikeCollection* getBikeCol();
};