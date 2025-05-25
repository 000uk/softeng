#include <iostream>
#include <string>
#include "RegisterUser.h"

using namespace std;

RegisterUser::RegisterUser(RegisterUserUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this);
}

bool RegisterUser::addNewMember(string userID, string userPW, int phoneNum) {
	if (userCol->isNewUser(userID)) {
		userCol->addUser(userID, userPW, phoneNum);
		return true;
	}
	else return false;
}