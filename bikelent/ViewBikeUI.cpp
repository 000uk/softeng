#include <iostream>
#include <string>
#include "ViewBikeUI.h"

using namespace std;

void ViewBikeUI::startInterface(ViewBike* ctrl) {
	this->ctrl = ctrl;
	cout << "5.1. ������ �뿩 ����Ʈ" << endl;
}

void ViewBikeUI::viewHistory() {
	BikeInfo* bikeList = ctrl->getRentedBike(); // �̰� ���� struct�� ����
	int bikeCnt = ctrl->getBikeInfoCount();

	for (int i = 0; i < bikeCnt ; i++) {
		cout << "> " << bikeList[i].bikeID << " " << bikeList[i].bikeName << endl;
	}

	delete[] bikeList;
}