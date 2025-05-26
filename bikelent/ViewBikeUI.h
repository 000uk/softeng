#pragma once
#include "ViewBike.h"

class ViewBike;

// 자전거 조회를 담당하는 바운더리 클래스
class ViewBikeUI {
private:
	ViewBike* ctrl; // 컨트롤러

public:
	void startInterface(ViewBike* ctrl);
	void viewHistory();
};