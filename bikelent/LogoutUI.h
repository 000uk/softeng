#pragma once
#include <string.h>
#include "Logout.h"
#include "User.h"

using namespace std;

class Logout;

class LogoutUI
{
private:
	Logout* ctrl;
public:
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};