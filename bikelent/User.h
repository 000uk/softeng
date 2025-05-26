#pragma once
#include <string>
#include "BikeCollection.h"
#include "RentedBikeCollection.h"

using namespace std;

// ������ ������ ����ִ� ��ƼƼ Ŭ����
class User
{
private:
	string userID; // ���̵�
	string userPW; // ��й�ȣ
	string phoneNum; // ��ȭ��ȣ

public:
	User(string userID, string userPW, string phoneNum = "");
	string getUserID();
	string getUserPW();
	virtual BikeCollection* getBikeCol() = 0; // ���������Լ�
	virtual RentedBikeCollection* getRentedBikeCol() = 0; // ���������Լ�
};