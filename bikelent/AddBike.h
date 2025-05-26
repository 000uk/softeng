#pragma once
#include <string>
#include "AddBikeUI.h"
#include "BikeCollection.h"
#include "User.h"

class AddBikeUI;

// ������ ������ �����ϴ� ��Ʈ�� Ŭ����
class AddBike
{
private:
	AddBikeUI* ui; // �������̽�
	BikeCollection* bikeCol; // ������ �����͸� ����

public:
	AddBike(AddBikeUI* ui, User* currUser);
	bool addNewBike(string bikeID, string bikeName);
};