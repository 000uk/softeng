#pragma once
#include "RentBike.h"

class RentBike;

// ������ �뿩 ����� �����ϴ� �ٿ���� Ŭ����
class RentBikeUI {
private:
	RentBike* ctrl; // ��Ʈ�ѷ�

public:
	void startInterface(RentBike* ctrl);
	void selectBike();
};