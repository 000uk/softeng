#include <iostream>
#include <string>
#include "RegisterUserUI.h"

using namespace std;

void RegisterUserUI::startInterface(RegisterUser* ctrl) {
	this->ctrl = ctrl;
	cout << "1.1. 회원가입" << endl;
}

void RegisterUserUI::signup() {
	string id, pw;
	int pNum = 0;

	cin >> id >> pw >> pNum;

	if (ctrl->addNewMember(id, pw, pNum)) {
		cout << "> " << id << " " << pw << " " << pNum << endl;
	}
}