#pragma once
#include "RentBike.h"

class RentBike;

// 자전거 대여 기능을 수행하는 바운더리 클래스
class RentBikeUI {
private:
	RentBike* ctrl; // 컨트롤러

public:
	void startInterface(RentBike* ctrl);
	void selectBike();
};