#include <iostream>
#include <string>
#include "RegisterUserUI.h"

using namespace std;

void RegisterUserUI::startInterface(RegisterUser* ctrl) {
	this->ctrl = ctrl;
	cout << "���̵� ��� ����" << endl;
}

void RegisterUserUI::signup() {
	string ID, PW;
	int pNum = 0;

	cin >> ID >> PW >> pNum;

	if (ctrl->addNewMember(ID, PW, pNum)) {
		cout << ID << " " << PW << " " << pNum << endl;
	}
}