#include <iostream>
#include <string>
#include "LoginUI.h"

using namespace std;

void LoginUI::startInterface(Login* ctrl) {
	this->ctrl = ctrl;
	cout << "아이디 비번" << endl;
}

void LoginUI::login() {
	string ID, PW;
	int pNum = 0;

	cin >> ID >> PW;

	if (ctrl->checkUserInfo(ID, PW)) {
		cout << ID << " " << PW << endl;
	}
}