#include <iostream>
#include <string>
#include "LoginUI.h"

using namespace std;

void LoginUI::startInterface(Login* ctrl) {
	this->ctrl = ctrl;
	cout << "2.1. ·Î±×ÀÎ" << endl;
}

void LoginUI::login(User*& currUser) {
	string ID, PW;
	int pNum = 0;

	cin >> ID >> PW;

	currUser = ctrl->tryLogin(ID, PW);
	if (currUser) {
		cout << "> " << ID << " " << PW << endl;
	}
}