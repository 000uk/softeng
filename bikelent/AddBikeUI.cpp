#include <fstream>
#include <string>
#include "AddBikeUI.h"

using namespace std;

AddBikeUI::AddBikeUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
시작 인터페이스: 자전거 등록 메뉴 시작을 알리고, 컨트롤러 객체를 연결한다.
ctrl: AddBike 컨트롤러 객체 포인터
*/
void AddBikeUI::startInterface(AddBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "3.1. 자전거 등록\n";
}

/*
새로운 자전거를 생성한다.
입력 파일에서 자전거 ID와 이름을 읽고, 컨트롤러에 등록 요청을 한다.
등록 성공 시 등록된 자전거 정보를 출력한다.
*/
void AddBikeUI::createNewBike() {
	string id, name;
	in_fp >> id >> name; // 파일로 부터 입력받음

	if (ctrl->addNewBike(id, name)) { // 성공적으로 등록 된다면 출력
		out_fp << "> " << id << " " << name << "\n\n";
	}
}