#include <iostream>
#include <string>
#include "RegisterUserUI.h"

using namespace std;

void RegisterUserUI::startInterface(RegisterUser* controller) {
	this->ctrl = controller;

	string ID, PW;
	int pNum = 0;

	cout << "아이디 비번 폰번" << endl;
	cin >> ID >> PW >> pNum;

	signUp(ID, PW, pNum);
}

void RegisterUserUI::signUp(string userID, string userPW, int phoneNum) {
	ctrl->addNewMember(userID, userPW, phoneNum);
}