#include <string.h>
#include "RentedBikeCollection.h"

/*
�ڽ��� �̹� ���� ���������� Ȯ���Ѵ�.
*/
bool RentedBikeCollection::isOwned(string bikeID) {
	for (int i = 0; i < numRentedBikes; i++) {
		if (bikeID == rentedBikeList[i]->getBikeID()) {
			return true;
		}
	}
	return false; // ���� �� ����
}

/*
������ �뿩 ������ ����� �뿩 ��Ͽ� �߰�
*/
void RentedBikeCollection::addBikeInfo(Bike* rentedBike) {
	rentedBikeList[numRentedBikes++] = rentedBike;
	rentedBike->setStatus(); // �뿩 ���� ��ȭ
}

/*
�뿩�� ������ ������ ����ü�� ��ȯ�Ѵ�.
*/
BikeInfo* RentedBikeCollection::getBikeInfo() {
	BikeInfo* bikeList = new BikeInfo[numRentedBikes];

	for (int i = 0; i < numRentedBikes; i++) {
		bikeList[i] = { rentedBikeList[i]->getBikeID(), rentedBikeList[i]->getBikeName() };
	}

	// ������ �뿩 ����� ������� ����ϱ� ���� �������� ����
	for (int i = 0; i < numRentedBikes - 1; i++) {
		for (int j = 0; j < numRentedBikes - 1 - i; j++) {
			if (bikeList[j].bikeID > bikeList[j + 1].bikeID) {
				BikeInfo temp = bikeList[j];
				bikeList[j] = bikeList[j + 1];
				bikeList[j + 1] = temp;
			}
		}
	}
	return bikeList;
}

/*
�뿩���� �������� ���� ��ȯ�Ѵ�.
*/
int RentedBikeCollection::getNumRentedBikes() {
	return this->numRentedBikes;
}