#include <string>
#include "Login.h"

using namespace std;

Login::Login(LoginUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this);
}

User* Login::checkUserInfo(string userID, string userPW) {
	return userCol->verifyUserInfo(userID, userPW);
}