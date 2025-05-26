#pragma once
#include <string>
#include "RegisterUserUI.h"
#include "UserCollection.h"

class RegisterUserUI;

// 회원 가입 기능을 담당하는 컨트롤 클래스
class RegisterUser
{
private:
	RegisterUserUI* ui; // 인터페이스
	UserCollection* userCol; // 전체 회원 컬렉션

public:
	RegisterUser(RegisterUserUI* ui, UserCollection* userCol);
	bool tryAddNewMember(string userID, string userPW, string phoneNum);
};