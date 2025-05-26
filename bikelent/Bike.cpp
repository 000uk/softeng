#include <string>
#include "Bike.h"

using namespace std;

/*
생성자: 자전거 ID와 이름으로 객체를 초기화한다.
*/
Bike::Bike(string bikeID, string bikeName) {
	this->bikeID = bikeID;
	this->bikeName = bikeName;
}

/*
자전거 아이디를 반환한다.
*/
string Bike::getBikeID() {
	return bikeID;
}

/*
자전거 이름을 반환한다.
*/
string Bike::getBikeName() {
	return bikeName;
}

/*
대여 상태를 반환한다.
*/
bool Bike::getStatus() {
	return status;
}

/*
대여 상태를 변경한다.
*/
void Bike::setStatus() {
	status = !status;
}