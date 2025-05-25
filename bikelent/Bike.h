#pragma once
#include <string>

using namespace std;

class Bike
{
private:
	string bikeID;
	string bikeName;

public:
	Bike(string bikeID, string bikeName);
	string getBikeID();
	string getBikeName();
};