#include <string>
#include "Manager.h"

using namespace std;

/*
������: �������� ������ �ʱ�ȭ�ϰ� ������ �÷����� �����Ѵ�.
*/
Manager::Manager(string userID, string userPW, string phoneNum)
	: User(userID, userPW, phoneNum) {
	this->bikeCol = new BikeCollection(); // �����Ҵ�
}

/*
�����ڰ� �����Ҵ��� ������ �÷����� �����Ѵ�.
*/
Manager::~Manager() {
	delete bikeCol;
}

/*
������ �÷��ǿ� �ٷ� ������ �� �ְ� ��ü �����͸� ��ȯ�Ѵ�.
*/
BikeCollection* Manager::getBikeCol() {
	return bikeCol;
}

/*
�����ڴ� �뿩�� �� �� ����.
*/
RentedBikeCollection* Manager::getRentedBikeCol() {
	return NULL;
}