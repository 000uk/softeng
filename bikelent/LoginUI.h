#pragma once
#include "Login.h"
#include "User.h"

class Login;

// �α����� ���� �ٿ���� Ŭ����
class LoginUI
{
private:
	Login* ctrl; // ��Ʈ�ѷ�
public:
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};