#include <fstream>
#include <string>
#include "LoginUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void LoginUI::startInterface(Login* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "2.1. ·Î±×ÀÎ\n";
}

void LoginUI::login(User*& currUser) {
	string ID, PW;
	int pNum = 0;

	in_fp >> ID >> PW;

	currUser = ctrl->tryLogin(ID, PW);
	if (currUser) {
		out_fp << "> " << ID << " " << PW << "\n";
	}
}