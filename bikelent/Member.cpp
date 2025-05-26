#include <string>
#include "Member.h"

using namespace std;

/*
생성자: 회원 정보를 초기화하며 각 회원에게 할당된 대여 자전거 컬렉션을 생성한다.
*/
Member::Member(string userID, string userPW, string phoneNum)
	: User(userID, userPW, phoneNum) {
	this->rentedBikeCol = new RentedBikeCollection(); // 동적할당
}

/*
각 회원이 동적할당한 대여 자전거 컬렉션을 해제한다.
*/
Member::~Member() {
	delete rentedBikeCol;
}

/*
멤버는 전체 자전거를 관리하지 않는다.
*/
BikeCollection* Member::getBikeCol() {
	return NULL;
}

/*
멤버에 할당된 대여 자전거 컬렉션 포인터를 반환한다.
*/
RentedBikeCollection* Member::getRentedBikeCol() {
	return rentedBikeCol;
}