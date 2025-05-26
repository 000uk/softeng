#pragma once
#include <string.h>
#include "BikeCollection.h"

/*
소멸자: 저장된 자전거 객체를 모두 해제한다.
*/
BikeCollection::~BikeCollection() {
	for (int i = 0; i < numBikes; i++) {
		delete bikeList[i];
	}
}

/*
주어진 bikeID에 해당하는 자전거 포인터를 반환한다.
bikeID: 찾을 자전거 ID
return 해당 ID의 자전거 포인터, 없으면 NULL 반환
*/
Bike* BikeCollection::tryGetBikePtr(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return bikeList[i];
		}
	}
	return NULL; // 조건문에서 false 역할
}

/*
주어진 자전거가 대여 중인지 확인한다.
bikeID: 확인할 자전거 ID
return 대여 중이면 true, 아니면 false
*/
bool BikeCollection::isRented(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) { // 이미 존재한 자전거 일때
			return bikeList[i]->getStatus();  // 대여 상태를 바로 반환
		}
	}
	return false;
}

/*
새로운 자전거를 컬렉션에 추가한다.
bikeID: 추가할 자전거 ID
bikeName: 추가할 자전거 이름
*/
void BikeCollection::addBike(string bikeID, string bikeName) {
	bikeList[numBikes++] = new Bike(bikeID, bikeName);
}