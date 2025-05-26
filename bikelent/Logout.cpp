#include <string>
#include "Logout.h"

using namespace std;

/*
생성자: UI 객체를 받아 로그아웃 인터페이스를 시작한다.
*/
Logout::Logout(LogoutUI* ui) {
	this->ui = ui;

	ui->startInterface(this);
}

/*
시스템을 종료한다.
현재 로그인 중인 사용자의 포인터를 NULL로 바꾸며 로그아웃 상태로 만든다.
*/
void Logout::finishAccess(User*& currUser) {
	currUser = NULL;
}