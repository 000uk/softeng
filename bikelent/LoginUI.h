#pragma once
#include <string.h>
#include "Login.h"

using namespace std;

class Login;

class LoginUI
{
private:
	Login* ctrl;
public:
	void startInterface(Login* ctrl);
	void login(string& currUserID);
};