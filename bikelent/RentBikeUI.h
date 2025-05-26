#pragma once
#include <fstream>
#include "RentBike.h"

using namespace std;

class RentBike;

// 자전거 대여 기능을 수행하는 바운더리 클래스
class RentBikeUI {
private:
	ifstream& in_fp;
	ofstream& out_fp;
	RentBike* ctrl = NULL; // 컨트롤러

public:
	RentBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(RentBike* ctrl);
	void selectBike();
};