#include <fstream>
#include <string>
#include "RentBikeUI.h"

using namespace std;

RentBikeUI::RentBikeUI(ifstream& in_fp, ofstream& out_fp) 
	:in_fp(in_fp), out_fp(out_fp) {}

/*
������ �뿩 �������̽��� �����Ѵ�.
*/
void RentBikeUI::startInterface(RentBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "4.1. ������ �뿩\n";
}

/*
�뿩�� �������� id�� �Է¹����� �뿩�� �õ��Ѵ�.
���� �� �������� ������ ��µȴ�.
*/
void RentBikeUI::selectBike() {
	string id;

	in_fp >> id;

	string name = ctrl->tryGetRentedName(id);

	if (name != "") { // ��ϵ� �����Ű� �ִٸ�
		out_fp << "> " << id << " " << name << "\n\n";
	}
}