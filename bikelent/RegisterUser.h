#pragma once
#include <string>
#include "RegisterUserUI.h"
#include "User.h"

using namespace std;

class RegisterUserUI;

class RegisterUser
{
private:
	RegisterUserUI* ui;

	// �̷��� ���߿� collective class�� �����ؾ� �� �Ű���
	User* userList = NULL;
	int numUserList = 0;

public:
	RegisterUser(RegisterUserUI* ui);
	void addNewMember(string userID, string userPW, int phoneNum);
};