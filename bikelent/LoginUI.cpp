#include <iostream>
#include <string>
#include "LoginUI.h"

using namespace std;

void LoginUI::startInterface(Login* ctrl) {
	this->ctrl = ctrl;
	cout << "2.1. ·Î±×ÀÎ" << endl;
}

void LoginUI::login(string& currUserID) {
	string ID, PW;
	int pNum = 0;

	cin >> ID >> PW;

	if (ctrl->checkUserInfo(ID, PW)) {
		cout << "> " << ID << " " << PW << endl;
		currUserID = ID;
	}
}