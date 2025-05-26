#pragma once
#include <fstream>
#include "Login.h"
#include "User.h"

using namespace std;

class Login;

// 로그인을 위한 바운더리 클래스
class LoginUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	Login* ctrl = NULL; // 컨트롤러

public:
	LoginUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};