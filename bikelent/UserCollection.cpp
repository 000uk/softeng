#include <string.h>
#include "UserCollection.h"
#include "Manager.h"
#include "Member.h"

/*
사용자를 생성한다.
*/
UserCollection::UserCollection() {
	userList[numUsers++] = new Manager("admin", "admin"); // 관리자의 계정은 주어진 상태
}

/*
동적할당한 등록된 모든 사용자를 헤제한다.
*/
UserCollection::~UserCollection() {
	for (int i = 0; i < numUsers; i++) {
		delete userList[i];
	}
}

/*
새 회원을 사용자 클래스에 추가한다.
*/
void UserCollection::addUser(string userID, string userPW, string phoneNum) {
	Member* newMember = new Member(userID, userPW, phoneNum);
	userList[numUsers++] = newMember; // 다형성
}

/*
특정 사용자 ID가 이미 존재하는지 확인
*/
bool UserCollection::isExist(string userID) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID()) {
			return true;
		}
	}
	return false;
}

/*
로그인을 위해 사용자의 아이디와 비밀번호를 검증한다.
성공 시 해당 사용자의 포인터를 반환한다.
*/
User* UserCollection::verifyUserInfo(string userID, string userPW) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID() &&
			userPW == userList[i]->getUserPW()) {
			return userList[i]; // 사용자 포인터 반환
		}
	}
	return NULL;
}