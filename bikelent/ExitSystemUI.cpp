#include <fstream>
#include <string>
#include "ExitSystemUI.h"

using namespace std;

ExitSystemUI::ExitSystemUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
시스템종료 인터페이스 시작
*/
void ExitSystemUI::startInterface(ExitSystem* ctrl) {
	this->ctrl = ctrl;
	out_fp << "6.1. 종료\n";
}

/*
시스템을 종료한다.
*/
void ExitSystemUI::shutdown(int& is_program_exit) {
	ctrl->finishSystem(is_program_exit);
}