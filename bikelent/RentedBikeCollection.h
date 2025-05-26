#pragma once
#include <string.h>
#include "Bike.h"

// ������ ������ ���� �����ϱ� ���� ����ü
struct BikeInfo {
	string bikeID; // ������ ID
	string bikeName; // ������ �̸�
};

// ������ �뿩���� �����ſ� ���� ������ ���� �÷��� Ŭ����
class RentedBikeCollection {
private:
	Bike* rentedBikeList[50]; // ������ �뿩 ���
	int numRentedBikes = 0;// ������ �뿩 ��

public:
	bool isOwned(string bikeID);
	void addBikeInfo(Bike* rentedBike);
	BikeInfo* getBikeInfo();
	int getNumRentedBikes();
};