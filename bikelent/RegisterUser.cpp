#include <iostream>
#include <string>
#include "RegisterUser.h"

using namespace std;

/*
������: UI�� ���� ��ü ����� ������ �޾� �ʱ�ȭ�ϰ� UI �������̽��� �����Ѵ�.
*/
RegisterUser::RegisterUser(RegisterUserUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this);
}

/*
���ο� ȸ���� ȸ�� �÷��ǿ� ����Ѵ�.
������ true ��ȯ
*/
bool RegisterUser::tryAddNewMember(string userID, string userPW, string phoneNum) {
	if (!userCol->isExist(userID)) { // �ߺ��� ������ �߰�
		userCol->addUser(userID, userPW, phoneNum);
		return true;
	}
	else return false;
}