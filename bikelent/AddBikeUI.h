#pragma once
#include <string.h>
#include "AddBike.h"

class AddBike;

// ������ ������ ���� �ٿ���� Ŭ����
class AddBikeUI
{
private:
	AddBike* ctrl; // ��Ʈ�ѷ�
public:
	void startInterface(AddBike* ctrl);
	void createNewBike();
};