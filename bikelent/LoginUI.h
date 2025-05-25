#pragma once
#include <string.h>
#include "Login.h"
#include "User.h"

using namespace std;

class Login;

class LoginUI
{
private:
	Login* ctrl;
public:
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};