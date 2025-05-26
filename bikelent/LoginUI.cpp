#include <fstream>
#include <string>
#include "LoginUI.h"

#include <iostream>

using namespace std;

LoginUI::LoginUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
로그인 인터페이스 시작
*/
void LoginUI::startInterface(Login* ctrl) {
	this->ctrl = ctrl; // 로그인 컨트롤러
	out_fp << "2.1. 로그인\n";
}

/*
로그인을 처리한다.
입력파일에서 ID, PW를 읽고 로그인을 시도한다.
그 후 결과를 출력한다.
*/
void LoginUI::login(User*& currUser) {
	string ID, PW;
	int pNum = 0;

	in_fp >> ID >> PW;

	// 로그인 성공 시 현재 사용자 설정
	currUser = ctrl->tryLogin(ID, PW);
	if (currUser) { // 로그인 실패시 nullptr이므로 false과 같은 역할
		out_fp << "> " << ID << " " << PW << "\n\n";
	}
}