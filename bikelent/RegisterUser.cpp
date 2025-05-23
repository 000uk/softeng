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
			cout << "�̹� ���Ե� ������Դϴ�." << endl;
			return;
		}
	}

	// �ϴ� �̷��� �س���,,, collective class ���� �и�����
	User newUesr(userID, userPW, phoneNum);
	numUserList++;
	cout << userID << userPW << phoneNum << endl;
}