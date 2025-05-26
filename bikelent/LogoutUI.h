#pragma once
#include <fstream>
#include "Logout.h"
#include "User.h"

using namespace std;

class Logout;

// �α׾ƿ��� ���� �ٿ���� Ŭ����
class LogoutUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	Logout* ctrl = NULL; // ��Ʈ�ѷ�

public:
	LogoutUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(Logout* ctrl);
	void logout(User*& currUser);
};