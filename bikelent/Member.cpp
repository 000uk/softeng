#include <string>
#include "Member.h"

using namespace std;

/*
������: ȸ�� ������ �ʱ�ȭ�ϸ� �� ȸ������ �Ҵ�� �뿩 ������ �÷����� �����Ѵ�.
*/
Member::Member(string userID, string userPW, string phoneNum)
	: User(userID, userPW, phoneNum) {
	this->rentedBikeCol = new RentedBikeCollection(); // �����Ҵ�
}

/*
�� ȸ���� �����Ҵ��� �뿩 ������ �÷����� �����Ѵ�.
*/
Member::~Member() {
	delete rentedBikeCol;
}

/*
����� ��ü �����Ÿ� �������� �ʴ´�.
*/
BikeCollection* Member::getBikeCol() {
	return NULL;
}

/*
����� �Ҵ�� �뿩 ������ �÷��� �����͸� ��ȯ�Ѵ�.
*/
RentedBikeCollection* Member::getRentedBikeCol() {
	return rentedBikeCol;
}