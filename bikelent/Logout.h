#pragma once
#include "LogoutUI.h"
#include "User.h"

class LogoutUI;

// �ý��� ������ �����Ѵ�.
class Logout
{
private:
	LogoutUI* ui; // �������̽�

public:
	Logout(LogoutUI* ui);
	void finishSystem(User*& currUser);
};