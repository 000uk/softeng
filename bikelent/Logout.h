#pragma once
#include <string>
#include "LogoutUI.h"

using namespace std;

class LogoutUI;

class Logout
{
private:
	LogoutUI* ui;

public:
	Logout(LogoutUI* ui);
	void finishSystem(string& currUserID);
};