#include <iostream>
#include <string>
#include "RentBikeUI.h"

using namespace std;

void RentBikeUI::startInterface(RentBike* ctrl) {
	this->ctrl = ctrl;
	cout << "4.1. ������ �뿩" << endl;
}

void RentBikeUI::selectBike() {
	string id;

	cin >> id;

	string name = ctrl->tryGetRentedName(id);

	if (name != "") { // ��ϵ� �����Ű� �ִٸ�
		cout << "> " << id << " " << name << endl;
	}
}