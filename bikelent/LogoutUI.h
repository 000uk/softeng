#pragma once
#include <fstream>
#include "Logout.h"
#include "User.h"

using namespace std;

class Logout;

// 로그아웃을 위한 바운더리 클래스
class LogoutUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	Logout* ctrl = NULL; // 컨트롤러

public:
	LogoutUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};