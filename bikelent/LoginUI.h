#pragma once
#include "Login.h"
#include "User.h"

class Login;

class LoginUI
{
private:
	Login* ctrl;
public:
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};