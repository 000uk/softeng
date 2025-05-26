#pragma once
#include <string>
#include "RentBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class RentBikeUI;

// �����Ÿ� �뿩�ϴ� ����� �����ϴ� ��Ʈ�� Ŭ����
class RentBike {
private:
	RentBikeUI* ui; // �������̽�
	BikeCollection* bikeCol; // ��� ������ ����
	RentedBikeCollection* rentedBikeCol; // Ư�� ������ ������ �뿩 ����

public:
	RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol);
	string tryGetRentedName(string bikeID);
};