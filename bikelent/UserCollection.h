#pragma once
#include <string.h>
#include "User.h"
#include "Member.h"
#include "Manager.h"

class UserCollection {
private:
	User* userList[10];
	int numUsers = 0;

public:
	UserCollection();
	~UserCollection();
	bool isAlreadyExist(string userID);
	bool verifyUserInfo(string userID, string userPW);
	void addUser(string userID, string userPW, int phoneNum);
};