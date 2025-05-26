#pragma once
#include <string.h>
#include "User.h"

// 회원 정보를 저장하는 엔티티 클래스, User 클래스의 상속을 받는다.
class Member : public User
{
private:
	RentedBikeCollection* rentedBikeCol; // 회원은 자신이 빌린 자전거에 대한 정보만 갖는다.

public:
	Member(string userID, string userPW, string phoneNum = "");
	~Member();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};