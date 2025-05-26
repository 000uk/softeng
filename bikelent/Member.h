#pragma once
#include <string.h>
#include "User.h"

class Member : public User
{
private:
	RentedBikeCollection* rentedBikeCol;

public:
	Member(string userID, string userPW, int phoneNum = 0);
	~Member();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};