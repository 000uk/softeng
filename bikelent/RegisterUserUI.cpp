#include <fstream>
#include <string>
#include "RegisterUserUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

/*
생성자: 회원가입 인터페이스를 실행한다.
*/
void RegisterUserUI::startInterface(RegisterUser* ctrl) {
	this->ctrl = ctrl;
	out_fp << "1.1. 회원가입\n";
}

/*
회원가입을 수행한다.
입력파일에서 회원 정보를 받아 회원가입을 시도한다.
성공 시 입력 정보를 기록
*/
void RegisterUserUI::signup() {
	string id, pw, pNum;

	in_fp >> id >> pw >> pNum;

	if (ctrl->tryAddNewMember(id, pw, pNum)) { // 등록에 성공하면 정보 출력
		out_fp << "> " << id << " " << pw << " " << pNum << "\n\n";
	}
}