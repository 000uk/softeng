#pragma once
#include <string>
#include "LoginUI.h"
#include "UserCollection.h"

class LoginUI;

// ������ ������ �޾� �ý��ۿ� �����Ѵ�.
class Login
{
private:
	LoginUI* ui; // �������̽�
	UserCollection* userCol; // ��� ������ ������ ���� �ݷ���

public:
	Login(LoginUI* ui, UserCollection* userCol);
	User* tryLogin(string userID, string userPW);
};