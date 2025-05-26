#include <string>
#include "ViewBike.h"

/*
ui와 현재 사용중인 사용자를 받아 초기화하낟.
*/
ViewBike::ViewBike(ViewBikeUI* ui, User* currUser) {
	this->ui = ui;
	// 현재 접속중인 사용자로 부터 대여중인 자전거 목록을 받는다.
	this->rentedBikeCol = currUser->getRentedBikeCol(); 

	ui->startInterface(this);
}

/*
현재 사용자가 대여한 자전거 정보 목록을 반환한다.
*/
BikeInfo* ViewBike::getRentedBike() {
	return rentedBikeCol->getBikeInfo(); // rentedBikeCol은 사용자마다 존재
}

/*
사용자가 대여한 자전거의 수를 반환
*/
int ViewBike::getBikeInfoCount() {
	return rentedBikeCol->getNumRentedBikes();
}