#include <string>
#include "RentBike.h"

/*
������: UI, ���� �����, ��ü ������ ����Ʈ�� �޴´�.
*/
RentBike::RentBike(RentBikeUI* ui, User* currUser, BikeCollection* bikeCol) {
	this->ui = ui;
	this->bikeCol = bikeCol;
	this->rentedBikeCol = currUser->getRentedBikeCol();

	ui->startInterface(this);
}

/*
����ڰ� �����Ÿ� �뿩�� �� �ִ��� Ȯ���Ѵ�.
�����ϸ� �������� �̸��� ��ȯ�Ѵ�.
*/
string RentBike::tryGetRentedName(string bikeID) {
	// ID�� �ش��ϴ� �����Ÿ� ��ȸ�Ѵ�. �ִٸ� ������ ��ü ������ �޴´�.
	Bike* selectedBike = bikeCol->tryGetBikePtr(bikeID);

	if (selectedBike && // ������ ��ü ������ �ִ� -> �̹� ��ϵ� ������ -> true
		!(bikeCol->isRented(bikeID)) && // �뿩���� �ƴϴ� -> true
		!(rentedBikeCol->isOwned(bikeID))) { // �ڽ��� �뿩�� �͵� �ƴϴ� -> true
		rentedBikeCol->addBikeInfo(selectedBike);
		return selectedBike->getBikeName();
	}
	else return ""; // �뿩 �Ұ��� �� �� ���ڿ� ��ȯ, ���� ������ false ����
}