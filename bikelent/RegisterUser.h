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

	// 이런거 나중에 collective class로 분해해야 할 거같음
	User* userList = NULL;
	int numUserList = 0;

public:
	RegisterUser(RegisterUserUI* ui);
	void addNewMember(string userID, string userPW, int phoneNum);
};