#include <string>
#include "ViewBike.h"

/*
ui�� ���� ������� ����ڸ� �޾� �ʱ�ȭ�ϳ�.
*/
ViewBike::ViewBike(ViewBikeUI* ui, User* currUser) {
	this->ui = ui;
	// ���� �������� ����ڷ� ���� �뿩���� ������ ����� �޴´�.
	this->rentedBikeCol = currUser->getRentedBikeCol(); 

	ui->startInterface(this);
}

/*
���� ����ڰ� �뿩�� ������ ���� ����� ��ȯ�Ѵ�.
*/
BikeInfo* ViewBike::getRentedBike() {
	return rentedBikeCol->getBikeInfo(); // rentedBikeCol�� ����ڸ��� ����
}

/*
����ڰ� �뿩�� �������� ���� ��ȯ
*/
int ViewBike::getBikeInfoCount() {
	return rentedBikeCol->getNumRentedBikes();
}