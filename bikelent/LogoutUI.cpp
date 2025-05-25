#include <iostream>
#include <string>
#include "LogoutUI.h"

using namespace std;

void LogoutUI::startInterface(Logout* ctrl) {
	this->ctrl = ctrl;
	cout << "2.2. ·Î±×¾Æ¿ô" << endl;
}

void LogoutUI::logout(string& currUserID) {
	cout << "> " << currUserID << endl;
	ctrl->finishSystem(currUserID);
}