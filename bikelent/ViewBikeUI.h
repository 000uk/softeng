#pragma once
#include <fstream>
#include "ViewBike.h"

using namespace std;

class ViewBike;

// 자전거 조회를 담당하는 바운더리 클래스
class ViewBikeUI {
private:
	ifstream& in_fp;
	ofstream& out_fp;
	ViewBike* ctrl = NULL; // 컨트롤러

public:
	ViewBikeUI(ifstream& in_fp, ofstream& out_fp);
	void startInterface(ViewBike* ctrl);
	void viewHistory();
};