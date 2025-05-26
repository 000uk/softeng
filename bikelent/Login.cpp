#include <string>
#include "Login.h"

using namespace std;

/*
생성자: UI와 사용자 컬렉션을 받아 초기화하고 로그인 인터페이스를 시작한다.
ui: 로그인 UI 객체 포인터
userCol: 사용자 컬렉션 객체 포인터
*/
Login::Login(LoginUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this); // UI 시작, 자신을 UI로 전달
}

/*
사용자 ID와 비밀번호를 받아 로그인 시도한다.
userID: 로그인할 사용자 ID
userPW : 로그인할 사용자 비밀번호
return 로그인 성공 시 해당 User 포인터, 실패 시 nullptr 반환
*/
User* Login::tryLogin(string userID, string userPW) {
	// verifyUserInfo 함수의 결과를 바로 리턴
	return userCol->verifyUserInfo(userID, userPW);
}