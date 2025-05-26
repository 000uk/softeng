#pragma once
#include "RegisterUser.h"

class RegisterUser;

// 회원 등록을 담당하는 바운더리 클래스
class RegisterUserUI
{
private:
	RegisterUser* ctrl; // 컨트롤러
public:
	void startInterface(RegisterUser* ctrl);
	void signup();
};