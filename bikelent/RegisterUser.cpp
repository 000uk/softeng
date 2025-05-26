#include <iostream>
#include <string>
#include "RegisterUser.h"

using namespace std;

/*
생성자: UI와 현재 전체 사용자 정보를 받아 초기화하고 UI 인터페이스를 시작한다.
*/
RegisterUser::RegisterUser(RegisterUserUI* ui, UserCollection* userCol) {
	this->ui = ui;
	this->userCol = userCol;

	ui->startInterface(this);
}

/*
새로운 회원을 회원 컬렉션에 등록한다.
성공시 true 반환
*/
bool RegisterUser::tryAddNewMember(string userID, string userPW, string phoneNum) {
	if (!userCol->isExist(userID)) { // 중복이 없을시 추가
		userCol->addUser(userID, userPW, phoneNum);
		return true;
	}
	else return false;
}