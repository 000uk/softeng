#pragma once
#include "RentBike.h"

class RentBike;

class RentBikeUI {
private:
	RentBike* ctrl;

public:
	void startInterface(RentBike* ctrl);
	void selectBike();
};