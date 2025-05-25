#pragma once
#include <string.h>
#include "User.h"

#include "BikeCollection.h"

class Member : public User
{
private:
	
public:
	Member(string userID, string userPW, int phoneNum = 0);
	BikeCollection* getBikeCol();
};