#pragma once
#include <string>
#include "ViewBikeUI.h"
#include "User.h"
#include "RentedBikeCollection.h"

class ViewBikeUI;

// �����Ÿ� ��ȸ�ϱ� ���� ��Ʈ�� Ŭ����
class ViewBike {
private:
	ViewBikeUI* ui; // �������̽�
	RentedBikeCollection* rentedBikeCol; // �뿩���� ������ ���

public:
	ViewBike(ViewBikeUI* ui, User* currUser);
	BikeInfo* getRentedBike();
	int getBikeInfoCount();
};