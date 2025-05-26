#include <iostream>
#include <string>
#include "RentBikeUI.h"

using namespace std;

void RentBikeUI::startInterface(RentBike* ctrl) {
	this->ctrl = ctrl;
	cout << "4.1. 자전거 대여" << endl;
}

void RentBikeUI::selectBike() {
	string id;

	cin >> id;

	string name = ctrl->tryGetRentedName(id);

	if (name != "") { // 등록된 자전거가 있다면
		cout << "> " << id << " " << name << endl;
	}
}