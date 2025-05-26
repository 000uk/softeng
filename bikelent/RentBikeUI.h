#pragma once
#include <fstream>
#include "RentBike.h"

using namespace std;

class RentBike;

// ������ �뿩 ����� �����ϴ� �ٿ���� Ŭ����
class RentBikeUI {
private:
	ifstream& in_fp;
	ofstream& out_fp;
	RentBike* ctrl = NULL; // ��Ʈ�ѷ�

public:
	RentBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(RentBike* ctrl);
	void selectBike();
};