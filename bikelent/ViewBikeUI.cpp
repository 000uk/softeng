#include <fstream>
#include <string>
#include "ViewBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

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