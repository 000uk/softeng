#pragma once
#include "Logout.h"
#include "User.h"

class Logout;

// �α׾ƿ��� ���� �ٿ���� Ŭ����
class LogoutUI
{
private:
	Logout* ctrl; // ��Ʈ�ѷ�
public:
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};