#pragma once
#include <string>

using namespace std;

// ������ �ϳ��ϳ��� ������ ��� �ִ� ��ƼƼ Ŭ����
class Bike
{
private:
	string bikeID; // ������ ���̵�
	string bikeName; // ������ �̸�
	bool status = false; // �뿩���´� �⺻������ false

public:
	Bike(string bikeID, string bikeName);
	string getBikeID();
	string getBikeName();
	bool getStatus();
	void setStatus();
};