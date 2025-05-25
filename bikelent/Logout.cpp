#include <iostream>
#include <string>
#include "Logout.h"

using namespace std;

Logout::Logout(LogoutUI* ui) {
	this->ui = ui;

	ui->startInterface(this);
}

void Logout::finishSystem(User*& currUser) {
	currUser = NULL;
}