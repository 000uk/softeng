#include <fstream>
#include <string>
#include "RegisterUserUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void RegisterUserUI::startInterface(RegisterUser* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "1.1. 회원가입\n";
}

void RegisterUserUI::signup() {
	string id, pw;
	int pNum = 0;

	in_fp >> id >> pw >> pNum;

	if (ctrl->addNewMember(id, pw, pNum)) {
		out_fp << "> " << id << " " << pw << " " << pNum << "\n";
	}
}