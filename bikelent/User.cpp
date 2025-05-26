#include <string>
#include "User.h"

using namespace std;

/*
사용자를 생성한다.
*/
User::User(string userID, string userPW, string phoneNum) {
	this->userID = userID;
	this->userPW = userPW;
	this->phoneNum = phoneNum;
}

/*
아이디를 반환한다.
*/
string User::getUserID() {
	return userID;
}

/*
비밀번호를 반환한다.
*/
string User::getUserPW() {
	return userPW;
}