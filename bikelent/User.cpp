#include <string>
#include "User.h"

using namespace std;

User::User(string userID, string userPW, int phoneNum) {
	this->userID = userID;
	this->userPW = userPW;
	this->phoneNum = phoneNum;
}

string User::getUserInfo() {
	return userID;
}