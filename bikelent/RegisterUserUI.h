#pragma once
#include "RegisterUser.h"

class RegisterUser;

// ȸ�� ����� ����ϴ� �ٿ���� Ŭ����
class RegisterUserUI
{
private:
	RegisterUser* ctrl; // ��Ʈ�ѷ�
public:
	void startInterface(RegisterUser* ctrl);
	void signup();
};