#pragma once
#include <string.h>
#include "User.h"

// 관리자 정보를 저장하는 엔티티 클래스, User 클래스의 상속을 받는다.
class Manager : public User
{
private:
	BikeCollection* bikeCol; // 관리자는 전체 자전거를 관리한다.

public:
	Manager(string userID, string userPW, string phoneNum = "");
	~Manager();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};