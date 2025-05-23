#include <iostream>
#include <string>
#include "RegisterUser.h"
#include "RegisterUserUI.h"

using namespace std;

RegisterUser::RegisterUser() {
	this->ui = new RegisterUserUI();
	ui->startInterface(this);
}

void RegisterUser::addNewMember(string userID, string userPW, int phoneNum) {
	for (int i = 0; i < numUserList; i++) {
		if (userID == userList[i].getUserInfo()) {
			cout << "이미 가입된 사용자입니다." << endl;
			return;
		}
	}

	// 일단 이렇게 해놓고,,, collective class 따로 분리하자
	User newUesr(userID, userPW, phoneNum);
	numUserList++;
	cout << userID << userPW << phoneNum << endl;
}