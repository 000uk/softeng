#include <fstream>
#include <string>
#include "ExitSystemUI.h"

using namespace std;

ExitSystemUI::ExitSystemUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
�ý������� �������̽� ����
*/
void ExitSystemUI::startInterface(ExitSystem* ctrl) {
	this->ctrl = ctrl;
	out_fp << "6.1. ����\n";
}

/*
�ý����� �����Ѵ�.
*/
void ExitSystemUI::shutdown(int& is_program_exit) {
	ctrl->finishSystem(is_program_exit);
}