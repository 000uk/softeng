#pragma once
#include "LogoutUI.h"
#include "User.h"

class LogoutUI;

// 시스템 접속을 종료한다.
class Logout
{
private:
	LogoutUI* ui; // 인터페이스

public:
	Logout(LogoutUI* ui);
	void finishSystem(User*& currUser);
};