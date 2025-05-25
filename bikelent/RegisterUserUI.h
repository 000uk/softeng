#pragma once
#include "RegisterUser.h"

class RegisterUser;

class RegisterUserUI
{
private:
	RegisterUser* ctrl;
public:
	void startInterface(RegisterUser* ctrl);
	void signup();
};