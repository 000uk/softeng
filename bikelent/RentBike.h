#pragma once
#include <string>
#include "RentBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class RentBikeUI;

// 자전거를 대여하는 기능을 수행하는 컨트롤 클래스
class RentBike {
private:
	RentBikeUI* ui; // 인터페이스
	BikeCollection* bikeCol; // 모든 자전거 정보
	RentedBikeCollection* rentedBikeCol; // 특정 유저의 자전거 대여 정보

public:
	RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol);
	string tryGetRentedName(string bikeID);
};