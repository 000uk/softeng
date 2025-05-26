#include <string>
#include "Bike.h"

using namespace std;

/*
������: ������ ID�� �̸����� ��ü�� �ʱ�ȭ�Ѵ�.
*/
Bike::Bike(string bikeID, string bikeName) {
	this->bikeID = bikeID;
	this->bikeName = bikeName;
}

/*
������ ���̵� ��ȯ�Ѵ�.
*/
string Bike::getBikeID() {
	return bikeID;
}

/*
������ �̸��� ��ȯ�Ѵ�.
*/
string Bike::getBikeName() {
	return bikeName;
}

/*
�뿩 ���¸� ��ȯ�Ѵ�.
*/
bool Bike::getStatus() {
	return status;
}

/*
�뿩 ���¸� �����Ѵ�.
*/
void Bike::setStatus() {
	status = !status;
}