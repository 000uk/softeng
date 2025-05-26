#pragma once
#include <string.h>
#include "User.h"

// ������ ������ �����ϴ� ��ƼƼ Ŭ����, User Ŭ������ ����� �޴´�.
class Manager : public User
{
private:
	BikeCollection* bikeCol; // �����ڴ� ��ü �����Ÿ� �����Ѵ�.

public:
	Manager(string userID, string userPW, string phoneNum = "");
	~Manager();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};