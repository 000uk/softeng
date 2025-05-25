#include <string>
#include "Member.h"

using namespace std;

Member::Member(string userID, string userPW, int phoneNum)
	: User(userID, userPW, phoneNum) {
}

BikeCollection* Member::getBikeCol() {
	return NULL;
}