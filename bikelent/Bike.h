#pragma once
#include <string>

using namespace std;

// 자전거 하나하나의 정보를 담고 있는 엔티티 클래스
class Bike
{
private:
	string bikeID; // 자전거 아이디
	string bikeName; // 자전거 이름
	bool status = false; // 대여상태는 기본적으로 false

public:
	Bike(string bikeID, string bikeName);
	string getBikeID();
	string getBikeName();
	bool getStatus();
	void setStatus();
};