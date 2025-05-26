#pragma once
#include <string>
#include "ViewBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class ViewBikeUI;

// 자전거를 조회하기 위한 컨트롤 클래스
class ViewBike {
private:
	ViewBikeUI* ui; // 인터페이스
	RentedBikeCollection* rentedBikeCol; // 대여중인 자전거 목록

public:
	ViewBike(ViewBikeUI* ui, User* currUser);
	BikeInfo* getRentedBike();
	int getBikeInfoCount();
};