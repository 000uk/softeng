#pragma once
#include "Logout.h"
#include "User.h"

class Logout;

class LogoutUI
{
private:
	Logout* ctrl;
public:
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};