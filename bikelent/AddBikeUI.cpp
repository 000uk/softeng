#include <fstream>
#include <string>
#include "AddBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void AddBikeUI::startInterface(AddBike* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "3.1. 자전거 등록\n";
}

void AddBikeUI::createNewBike() {
	string id, name;

	in_fp >> id >> name;

	if (ctrl->addNewBike(id, name)) {
		out_fp << "> " << id << " " << name << "\n";
	}
}