#pragma once
#include <string.h>
#include "User.h"

class UserCollection {
private:
	User* userList[10];
	int numUsers = 0;

public:
	UserCollection();
	~UserCollection();
	bool isAlreadyExist(string userID);
	User* verifyUserInfo(string userID, string userPW);
	void addUser(string userID, string userPW, int phoneNum);
};