#pragma once
#include <fstream>
#include "RegisterUser.h"

using namespace std;

class RegisterUser;

// ȸ�� ����� ����ϴ� �ٿ���� Ŭ����
class RegisterUserUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	RegisterUser* ctrl = NULL; // ��Ʈ�ѷ�

public:
	RegisterUserUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(RegisterUser* ctrl);
	void signup();
};