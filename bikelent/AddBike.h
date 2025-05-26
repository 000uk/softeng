#pragma once
#include <string>
#include "AddBikeUI.h"
#include "BikeCollection.h"
#include "User.h"

class AddBikeUI;

// 자전거 생성을 관리하는 컨트롤 클래스
class AddBike
{
private:
	AddBikeUI* ui; // 인터페이스
	BikeCollection* bikeCol; // 자전거 데이터를 관리

public:
	AddBike(AddBikeUI* ui, User* currUser);
	bool addNewBike(string bikeID, string bikeName);
};