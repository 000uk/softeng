#pragma once
#include <string.h>
#include "Bike.h"

// 자전거 정보를 쉽게 전달하기 위한 구조체
struct BikeInfo {
	string bikeID; // 자전거 ID
	string bikeName; // 자전거 이름
};

// 유저가 대여중인 자전거에 대한 정보를 가진 컬렉션 클래스
class RentedBikeCollection {
private:
	Bike* rentedBikeList[50]; // 자전거 대여 목록
	int numRentedBikes = 0;// 자전거 대여 수

public:
	bool isOwned(string bikeID);
	void addBikeInfo(Bike* rentedBike);
	BikeInfo* getBikeInfo();
	int getNumRentedBikes();
};