#pragma once
#include <fstream>
#include "ExitSystem.h"

using namespace std;

class ExitSystem;

// �ý��� ���� ���� �ٿ���� Ŭ����
class ExitSystemUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	ExitSystem* ctrl = NULL; // ��Ʈ�ѷ�

public:
	ExitSystemUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(ExitSystem* ctrl);
	void shutdown(int& is_program_exit);
};