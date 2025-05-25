#pragma once
#include <string>
#include "LoginUI.h"
#include "UserCollection.h"

class LoginUI;

class Login
{
private:
	LoginUI* ui;
	UserCollection* userCol;

public:
	Login(LoginUI* ui, UserCollection* userCol);
	User* tryLogin(string userID, string userPW);
};