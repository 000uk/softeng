#pragma once
#include "ViewBike.h"

class ViewBike;

// ������ ��ȸ�� ����ϴ� �ٿ���� Ŭ����
class ViewBikeUI {
private:
	ViewBike* ctrl; // ��Ʈ�ѷ�

public:
	void startInterface(ViewBike* ctrl);
	void viewHistory();
};