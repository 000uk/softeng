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

bool UserCollection::isNewUser(string userID) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserInfo()) {
			return false;
		}
	}
	return true;
}