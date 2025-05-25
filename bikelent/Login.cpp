#include <iostream>
#include <string>
#include "Login.h"

using namespace std;

Login::Login(LoginUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this);
}

bool Login::checkUserInfo(string userID, string userPW) {
	if (userCol->verifyUserInfo(userID, userPW)) {
		return true;
	}
	else return false;
}