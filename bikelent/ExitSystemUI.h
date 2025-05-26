#pragma once
#include <fstream>
#include "ExitSystem.h"

using namespace std;

class ExitSystem;

// 시스템 종료 위한 바운더리 클래스
class ExitSystemUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	ExitSystem* ctrl = NULL; // 컨트롤러

public:
	ExitSystemUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(ExitSystem* ctrl);
	void shutdown(int& is_program_exit);
};