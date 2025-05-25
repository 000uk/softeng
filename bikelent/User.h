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
	User(string userID, string userPW, int phoneNum);
	string getUserID();
	string getUserPW();
};