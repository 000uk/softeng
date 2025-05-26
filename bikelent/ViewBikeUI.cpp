#include <fstream>
#include <string>
#include "ViewBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

/*
ViewBike 컨트롤러를 받아 UI 초기 출력 실행
*/
void ViewBikeUI::startInterface(ViewBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "5.1. 자전거 대여 리스트\n";
}

/*
대여한 자전거 목록 출력
*/
void ViewBikeUI::viewHistory() {
	BikeInfo* bikeList = ctrl->getRentedBike(); // 구조체
	int bikeCnt = ctrl->getBikeInfoCount(); // 구조체 리스트의 수

	for (int i = 0; i < bikeCnt ; i++) {
		out_fp << "> " << bikeList[i].bikeID << " " << bikeList[i].bikeName << "\n";
	}
	out_fp << "\n";

	delete[] bikeList; // 동적할당이 끝난 bikeList는 해제한다.
}