#pragma once
#include <string>

using namespace std;

class Bike
{
private:
	string bikeID;
	string bikeName;
	bool status = false;

public:
	Bike(string bikeID, string bikeName);
	string getBikeID();
	string getBikeName();
	bool getStatus();
	void setStatus();
};