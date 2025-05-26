#pragma once
#include <fstream>
#include "ViewBike.h"

using namespace std;

class ViewBike;

// ������ ��ȸ�� ����ϴ� �ٿ���� Ŭ����
class ViewBikeUI {
private:
	ifstream& in_fp;
	ofstream& out_fp;
	ViewBike* ctrl = NULL; // ��Ʈ�ѷ�

public:
	ViewBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(ViewBike* ctrl);
	void viewHistory();
};