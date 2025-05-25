#pragma once
#include "User.h"

class Manager : public User {
private:

public:
	Manager(string userID, string userPW, int phoneNum);
};