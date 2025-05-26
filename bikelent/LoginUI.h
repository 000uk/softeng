#pragma once
#include <fstream>
#include "Login.h"
#include "User.h"

using namespace std;

class Login;

// �α����� ���� �ٿ���� Ŭ����
class LoginUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	Login* ctrl = NULL; // ��Ʈ�ѷ�

public:
	LoginUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(Login* ctrl);
	void login(User*& currUser);
};