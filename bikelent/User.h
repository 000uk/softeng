#pragma once
#include <string>

using namespace std;

class User
{
private:
	string userID;
	string userPW;
	int phoneNum;

public:
	User(string userID, string userPW, int phoneNum = 0);
	string getUserID();
	string getUserPW();
};