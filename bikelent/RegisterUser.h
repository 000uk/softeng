#pragma once
#include <string>
#include "RegisterUserUI.h"
#include "UserCollection.h"

using namespace std;

class RegisterUserUI;

class RegisterUser
{
private:
	RegisterUserUI* ui;
	UserCollection* userCol;

public:
	RegisterUser(RegisterUserUI* ui, UserCollection* userCol);
	bool addNewMember(string userID, string userPW, int phoneNum);
};