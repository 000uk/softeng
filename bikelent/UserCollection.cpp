#pragma once
#include <string.h>
#include "UserCollection.h"

UserCollection::UserCollection() {
	userList[numUsers++] = new User("admin", "admin"); // �������� ������ �־��� ����
}

UserCollection::~UserCollection() {
	for (int i = 0; i < numUsers; i++) {
		delete userList[i];
	}
}

void UserCollection::addUser(string userID, string userPW, int phoneNum) {
	userList[numUsers++] = new User(userID, userPW, phoneNum);
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
			userPW == userList[i]->getUserPW()) { // enteredID? �̷������� �̸� �ٲܱ� ���
			return true;
		}
	}
	return false;
}