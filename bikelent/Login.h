#pragma once
#include <string>
#include "LoginUI.h"
#include "UserCollection.h"

using namespace std;

class LoginUI;

class Login
{
private:
	LoginUI* ui;
	UserCollection* userCol;

public:
	Login(LoginUI* ui, UserCollection* userCol);
	bool checkUserInfo(string userID, string userPW);
};