#pragma once
#include <string.h>
#include "User.h"

// ȸ�� ������ �����ϴ� ��ƼƼ Ŭ����, User Ŭ������ ����� �޴´�.
class Member : public User
{
private:
	RentedBikeCollection* rentedBikeCol; // ȸ���� �ڽ��� ���� �����ſ� ���� ������ ���´�.

public:
	Member(string userID, string userPW, string phoneNum = "");
	~Member();
	virtual BikeCollection* getBikeCol();
	virtual RentedBikeCollection* getRentedBikeCol();
};