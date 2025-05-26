#include <string>
#include "RentBike.h"

/*
생성자: UI, 현재 사용자, 전체 자전거 리스트를 받는다.
*/
RentBike::RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol) {
	this->ui = ui;
	this->bikeCol = bikeCol;
	this->rentedBikeCol = currUser->getRentedBikeCol();

	ui->startInterface(this);
}

/*
사용자가 자전거를 대여할 수 있는지 확인한다.
가능하면 자전거의 이름을 반환한다.
*/
string RentBike::tryGetRentedName(string bikeID) {
	// ID에 해당하는 자전거를 조회한다. 있다면 자전거 객체 정보를 받는다.
	Bike* selectedBike = bikeCol->tryGetBikePtr(bikeID);

	if (selectedBike && // 자전거 객체 정보가 있다 -> 이미 등록된 자전거 -> true
		!(bikeCol->isRented(bikeID)) && // 대여중이 아니다 -> true
		!(rentedBikeCol->isOwned(bikeID))) { // 자신이 대여한 것도 아니다 -> true
		rentedBikeCol->addBikeInfo(selectedBike);
		return selectedBike->getBikeName();
	}
	else return ""; // 대여 불가능 시 빈 문자열 반환, 조건 문에서 false 역할
}