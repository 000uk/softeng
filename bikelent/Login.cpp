#include <string>
#include "Login.h"

using namespace std;

/*
������: UI�� ����� �÷����� �޾� �ʱ�ȭ�ϰ� �α��� �������̽��� �����Ѵ�.
ui: �α��� UI ��ü ������
userCol: ����� �÷��� ��ü ������
*/
Login::Login(LoginUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this); // UI ����, �ڽ��� UI�� ����
}

/*
����� ID�� ��й�ȣ�� �޾� �α��� �õ��Ѵ�.
userID: �α����� ����� ID
userPW : �α����� ����� ��й�ȣ
return �α��� ���� �� �ش� User ������, ���� �� nullptr ��ȯ
*/
User* Login::tryLogin(string userID, string userPW) {
	// verifyUserInfo �Լ��� ����� �ٷ� ����
	return userCol->verifyUserInfo(userID, userPW);
}