#pragma once
#include <string.h>
#include "Bike.h"

// ��� �������� ������ ����ϰ� �ִ� Ŭ����
class BikeCollection {
private:
	Bike* bikeList[50]; // ������ ����Ʈ
	int numBikes = 0; // �������� ��

public:
	~BikeCollection();
	Bike* tryGetBikePtr(string bikeID);
	bool isRented(string bikeID);
	void addBike(string bikeID, string bikeName);
};