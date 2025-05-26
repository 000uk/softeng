#pragma once
#include <string>
#include "LoginUI.h"
#include "UserCollection.h"

class LoginUI;

// 유저의 정보를 받아 시스템에 접속한다.
class Login
{
private:
	LoginUI* ui; // 인터페이스
	UserCollection* userCol; // 모든 유저의 정보를 가진 콜렉션

public:
	Login(LoginUI* ui, UserCollection* userCol);
	User* tryLogin(string userID, string userPW);
};