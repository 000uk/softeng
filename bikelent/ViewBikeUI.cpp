#include <fstream>
#include <string>
#include "ViewBikeUI.h"

using namespace std;

ViewBikeUI::ViewBikeUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
ViewBike ��Ʈ�ѷ��� �޾� UI �ʱ� ��� ����
*/
void ViewBikeUI::startInterface(ViewBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "5.1. ������ �뿩 ����Ʈ\n";
}

/*
�뿩�� ������ ��� ���
*/
void ViewBikeUI::viewHistory() {
	BikeInfo* bikeList = ctrl->getRentedBike(); // ����ü
	int bikeCnt = ctrl->getBikeInfoCount(); // ����ü ����Ʈ�� ��

	for (int i = 0; i < bikeCnt ; i++) {
		out_fp << "> " << bikeList[i].bikeID << " " << bikeList[i].bikeName << "\n";
	}
	out_fp << "\n";

	delete[] bikeList; // �����Ҵ��� ���� bikeList�� �����Ѵ�.
}