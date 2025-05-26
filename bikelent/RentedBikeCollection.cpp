#include <string.h>
#include "RentedBikeCollection.h"

/*
자신이 이미 빌린 자전거인지 확인한다.
*/
bool RentedBikeCollection::isOwned(string bikeID) {
	for (int i = 0; i < numRentedBikes; i++) {
		if (bikeID == rentedBikeList[i]->getBikeID()) {
			return true;
		}
	}
	return false; // 빌린 적 없음
}

/*
자전거 대여 정보를 사용자 대여 목록에 추가
*/
void RentedBikeCollection::addBikeInfo(Bike* rentedBike) {
	rentedBikeList[numRentedBikes++] = rentedBike;
	rentedBike->setStatus(); // 대여 상태 변화
}

/*
대여한 자전거 정보를 구조체로 반환한다.
*/
BikeInfo* RentedBikeCollection::getBikeInfo() {
	BikeInfo* bikeList = new BikeInfo[numRentedBikes];

	for (int i = 0; i < numRentedBikes; i++) {
		bikeList[i] = { rentedBikeList[i]->getBikeID(), rentedBikeList[i]->getBikeName() };
	}

	// 자전거 대여 목록을 순서대로 출력하기 위해 버블정렬 실행
	for (int i = 0; i < numRentedBikes - 1; i++) {
		for (int j = 0; j < numRentedBikes - 1 - i; j++) {
			if (bikeList[j].bikeID > bikeList[j + 1].bikeID) {
				BikeInfo temp = bikeList[j];
				bikeList[j] = bikeList[j + 1];
				bikeList[j + 1] = temp;
			}
		}
	}
	return bikeList;
}

/*
대여중인 자전거의 수를 반환한다.
*/
int RentedBikeCollection::getNumRentedBikes() {
	return this->numRentedBikes;
}