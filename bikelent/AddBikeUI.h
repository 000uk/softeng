#pragma once
#include <fstream>
#include <string.h>
#include "AddBike.h"

using namespace std;

class AddBike;

// 자전거 생성을 위한 바운더리 클래스
class AddBikeUI
{
private:
	ifstream& in_fp;
	ofstream& out_fp;
	AddBike* ctrl = NULL; // 컨트롤러

public:
	AddBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(AddBike* ctrl);
	void createNewBike();
};