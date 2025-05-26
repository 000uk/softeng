#pragma once
#include "ViewBike.h"

class ViewBike;

class ViewBikeUI {
private:
	ViewBike* ctrl;

public:
	void startInterface(ViewBike* ctrl);
	void viewHistory();
};