#pragma once
#include <string.h>
#include "AddBike.h"

class AddBike;

class AddBikeUI
{
private:
	AddBike* ctrl;
public:
	void startInterface(AddBike* ctrl);
	void createNewBike();
};