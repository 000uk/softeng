#include <iostream>
#include <string>
#include "AddBikeUI.h"

using namespace std;

void AddBikeUI::startInterface(AddBike* ctrl) {
	this->ctrl = ctrl;
	cout << "3.1. ������ ���" << endl;
}

void AddBikeUI::createNewBike() {
	string id, name;

	cin >> id >> name;

	if (ctrl->addNewBike(id, name)) {
		cout << "> " << id << " " << name << endl;
	}
}