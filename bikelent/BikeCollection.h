#pragma once
#include <string.h>
#include "Bike.h"

// 모든 자전거의 정보를 담당하고 있는 클래스
class BikeCollection {
private:
	Bike* bikeList[50]; // 자전거 리스트
	int numBikes = 0; // 자전거의 수

public:
	~BikeCollection();
	Bike* tryGetBikePtr(string bikeID);
	bool isRented(string bikeID);
	void addBike(string bikeID, string bikeName);
};