#pragma once
#include <string.h>
#include "UserCollection.h"

UserCollection::UserCollection() {
	string ID = "admin";
	string PW = "admin";

	userList[numUsers++] = new Manager(ID, PW, 0);
}

UserCollection::~UserCollection() {
	for (int i = 0; i < numUsers; i++) {
		delete userList[i];
	}
}

void UserCollection::addUser(string userID, string userPW, int phoneNum) {
	userList[numUsers++] = new Member(userID, userPW, phoneNum);
}

bool UserCollection::isAlreadyExist(string userID) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID()) {
			return true;
		}
	}
	return false;
}

bool UserCollection::verifyUserInfo(string userID, string userPW) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID() &&
			userPW == userList[i]->getUserPW()) { // enteredID? 이런식으로 이름 바꿀까 고민
			return true;
		}
	}
	return false;
}