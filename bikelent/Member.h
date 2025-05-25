#pragma once
#include "User.h"

class Member : public User {
private:

public:
	Member(string userID, string userPW, int phoneNum);
};