#pragma once
#include <string.h>
#include "User.h"

// 유저들의 정보를 관리하기 위한 컬렉션 클래스
class UserCollection {
private:
	User* userList[50]; // 모든 유저들의 리스트
	int numUsers = 0; // 유저 수

public:
	UserCollection();
	~UserCollection();
	bool isExist(string userID);
	User* verifyUserInfo(string userID, string userPW);
	void addUser(string userID, string userPW, string phoneNum);
};