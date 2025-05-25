#pragma once
#include <string.h>
#include "UserCollection.h"
#include "Manager.h"
#include "Member.h"

UserCollection::UserCollection() {
	userList[numUsers++] = new Manager("admin", "admin"); // �������� ������ �־��� ����
}

UserCollection::~UserCollection() {
	for (int i = 0; i < numUsers; i++) {
		delete userList[i];
	}
}

void UserCollection::addUser(string userID, string userPW, int phoneNum) {
	Member* newMember = new Member(userID, userPW, phoneNum);
	userList[numUsers++] = newMember;
}

bool UserCollection::isExist(string userID) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID()) {
			return true;
		}
	}
	return false;
}

User* UserCollection::verifyUserInfo(string userID, string userPW) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID() &&
			userPW == userList[i]->getUserPW()) {
			return userList[i];
		}
	}
	return NULL;
}