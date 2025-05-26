#pragma once
#include "Logout.h"
#include "User.h"

class Logout;

// 로그아웃을 위한 바운더리 클래스
class LogoutUI
{
private:
	Logout* ctrl; // 컨트롤러
public:
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};