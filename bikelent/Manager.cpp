#include <string>
#include "Manager.h"

using namespace std;

/*
생성자: 관리자의 정보를 초기화하고 자전거 컬렉션을 생성한다.
*/
Manager::Manager(string userID, string userPW, string phoneNum)
	: User(userID, userPW, phoneNum) {
	this->bikeCol = new BikeCollection(); // 동적할당
}

/*
관리자가 동적할당한 자전거 컬렉션을 해제한다.
*/
Manager::~Manager() {
	delete bikeCol;
}

/*
자전거 컬렉션에 바로 접근할 수 있고 객체 포인터를 반환한다.
*/
BikeCollection* Manager::getBikeCol() {
	return bikeCol;
}

/*
관리자는 대여를 할 수 없다.
*/
RentedBikeCollection* Manager::getRentedBikeCol() {
	return NULL;
}