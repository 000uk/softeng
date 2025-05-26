#pragma once
#include <fstream>
#include <string.h>
#include "AddBike.h"

using namespace std;

class AddBike;

// ������ ������ ���� �ٿ���� Ŭ����
class AddBikeUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	AddBike* ctrl = NULL; // ��Ʈ�ѷ�

public:
	AddBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(AddBike* ctrl);
	void createNewBike();
};