#include <fstream>
#include <string>
#include "ViewBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void ViewBikeUI::startInterface(ViewBike* ctrl) {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	this->ctrl = ctrl;
	out_fp << "5.1. 자전거 대여 리스트\n";
}

void ViewBikeUI::viewHistory() {
	BikeInfo* bikeList = ctrl->getRentedBike(); // 이게 지금 struct인 상태
	int bikeCnt = ctrl->getBikeInfoCount();

	for (int i = 0; i < bikeCnt ; i++) {
		out_fp << "> " << bikeList[i].bikeID << " " << bikeList[i].bikeName << "\n";
	}

	delete[] bikeList;
}