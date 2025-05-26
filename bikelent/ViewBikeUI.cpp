#include <iostream>
#include <string>
#include "ViewBikeUI.h"

using namespace std;

void ViewBikeUI::startInterface(ViewBike* ctrl) {
	this->ctrl = ctrl;
	cout << "5.1. 자전거 대여 리스트" << endl;
}

void ViewBikeUI::viewHistory() {
	BikeInfo* bikeList = ctrl->getRentedBike(); // 이게 지금 struct인 상태
	int bikeCnt = ctrl->getBikeInfoCount();

	for (int i = 0; i < bikeCnt ; i++) {
		cout << "> " << bikeList[i].bikeID << " " << bikeList[i].bikeName << endl;
	}

	delete[] bikeList;
}