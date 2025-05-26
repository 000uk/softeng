#pragma once
#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"

using namespace std;

// 유저의 정보를 담고있는 엔티티 클래스
class User
{
private:
	string userID; // 아이디
	string userPW; // 비밀번호
	string phoneNum; // 전화번호

public:
	User(string userID, string userPW, string phoneNum = "");
	string getUserID();
	string getUserPW();
	virtual BikeCollection* getBikeCol() = 0; // 순수가상함수
	virtual RentedBikeCollection* getRentedBikeCol() = 0; // 순수가상함수
};