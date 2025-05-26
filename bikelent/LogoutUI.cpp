#include <fstream>
#include <string>
#include "LogoutUI.h"

using namespace std;

LogoutUI::LogoutUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
로그아웃 인터페이스 시작
*/
void LogoutUI::startInterface(Logout* ctrl) {
	this->ctrl = ctrl;
	out_fp << "2.2. 로그아웃\n";
}

/*
로그아웃을 처리한다.
현재 사용자의 ID를 출력하며 시스템 접속 종료를 처리한다.
*/
void LogoutUI::logout(User*& currUser) {
	out_fp << "> " << currUser->getUserID() << "\n\n";
	// 현재 로그인된 사용자의 포인터를 참조로 넘겨 로그아웃 진행
	ctrl->finishAccess(currUser);
}