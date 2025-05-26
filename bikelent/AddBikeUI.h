#pragma once
#include <string.h>
#include "AddBike.h"

class AddBike;

// 자전거 생성을 위한 바운더리 클래스
class AddBikeUI
{
private:
	AddBike* ctrl; // 컨트롤러
public:
	void startInterface(AddBike* ctrl);
	void createNewBike();
};