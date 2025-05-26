#include <fstream>
#include <string>
#include "RentBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void RentBikeUI::startInterface(RentBike* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "4.1. ������ �뿩\n";
}

void RentBikeUI::selectBike() {
	string id;

	in_fp >> id;

	string name = ctrl->tryGetRentedName(id);

	if (name != "") { // ��ϵ� �����Ű� �ִٸ�
		out_fp << "> " << id << " " << name << "\n";
	}
}