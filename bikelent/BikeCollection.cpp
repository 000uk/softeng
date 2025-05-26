#pragma once
#include <string.h>
#include "BikeCollection.h"

/*
�Ҹ���: ����� ������ ��ü�� ��� �����Ѵ�.
*/
BikeCollection::~BikeCollection() {
	for (int i = 0; i < numBikes; i++) {
		delete bikeList[i];
	}
}

/*
�־��� bikeID�� �ش��ϴ� ������ �����͸� ��ȯ�Ѵ�.
bikeID: ã�� ������ ID
return �ش� ID�� ������ ������, ������ NULL ��ȯ
*/
Bike* BikeCollection::tryGetBikePtr(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) {
			return bikeList[i];
		}
	}
	return NULL; // ���ǹ����� false ����
}

/*
�־��� �����Ű� �뿩 ������ Ȯ���Ѵ�.
bikeID: Ȯ���� ������ ID
return �뿩 ���̸� true, �ƴϸ� false
*/
bool BikeCollection::isRented(string bikeID) {
	for (int i = 0; i < numBikes; i++) {
		if (bikeID == bikeList[i]->getBikeID()) { // �̹� ������ ������ �϶�
			return bikeList[i]->getStatus();  // �뿩 ���¸� �ٷ� ��ȯ
		}
	}
	return false;
}

/*
���ο� �����Ÿ� �÷��ǿ� �߰��Ѵ�.
bikeID: �߰��� ������ ID
bikeName: �߰��� ������ �̸�
*/
void BikeCollection::addBike(string bikeID, string bikeName) {
	bikeList[numBikes++] = new Bike(bikeID, bikeName);
}