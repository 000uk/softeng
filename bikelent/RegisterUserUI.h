#pragma once
#include <string.h>
#include "RegisterUser.h"

using namespace std;

class RegisterUser;

class RegisterUserUI
{
private:
	RegisterUser* ctrl;
public:
	void startInterface(RegisterUser* ctrl);
	void signUp();
};