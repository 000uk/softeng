#include <fstream>
#include <string>
#include "RentBikeUI.h"

using namespace std;

RentBikeUI::RentBikeUI(ifstream& in_fp, ofstream& out_fp) 
	:in_fp(in_fp), out_fp(out_fp) {}

/*
자전거 대여 인터페이스를 시작한다.
*/
void RentBikeUI::startInterface(RentBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "4.1. 자전거 대여\n";
}

/*
대여할 자전거의 id를 입력받으며 대여를 시도한다.
성공 시 자전거의 정보가 출력된다.
*/
void RentBikeUI::selectBike() {
	string id;

	in_fp >> id;

	string name = ctrl->tryGetRentedName(id);

	if (name != "") { // 등록된 자전거가 있다면
		out_fp << "> " << id << " " << name << "\n\n";
	}
}