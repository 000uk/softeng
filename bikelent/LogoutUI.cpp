#include <fstream>
#include <string>
#include "LogoutUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void LogoutUI::startInterface(Logout* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "2.2. ·Î±×¾Æ¿ô\n";
}

void LogoutUI::logout(User*& currUser) {
	out_fp << "> " << currUser->getUserID() << "\n";
	ctrl->finishSystem(currUser);
}