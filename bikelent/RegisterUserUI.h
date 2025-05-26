#pragma once
#include <fstream>
#include "RegisterUser.h"

using namespace std;

class RegisterUser;

// 회원 등록을 담당하는 바운더리 클래스
class RegisterUserUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	RegisterUser* ctrl = NULL; // 컨트롤러

public:
	RegisterUserUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(RegisterUser* ctrl);
	void signup();
};