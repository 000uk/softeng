#pragma once
#include "Login.h"
#include "User.h"

class Login;

// 로그인을 위한 바운더리 클래스
class LoginUI
{
private:
	Login* ctrl; // 컨트롤러
public:
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};