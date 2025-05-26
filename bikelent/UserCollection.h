#pragma once
#include <string.h>
#include "User.h"

// �������� ������ �����ϱ� ���� �÷��� Ŭ����
class UserCollection {
private:
	User* userList[50]; // ��� �������� ����Ʈ
	int numUsers = 0; // ���� ��

public:
	UserCollection();
	~UserCollection();
	bool isExist(string userID);
	User* verifyUserInfo(string userID, string userPW);
	void addUser(string userID, string userPW, string phoneNum);
};