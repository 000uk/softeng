#include <string>
#include "User.h"

using namespace std;

/*
����ڸ� �����Ѵ�.
*/
User::User(string userID, string userPW, string phoneNum) {
	this->userID = userID;
	this->userPW = userPW;
	this->phoneNum = phoneNum;
}

/*
���̵� ��ȯ�Ѵ�.
*/
string User::getUserID() {
	return userID;
}

/*
��й�ȣ�� ��ȯ�Ѵ�.
*/
string User::getUserPW() {
	return userPW;
}