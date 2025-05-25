#include <iostream>
#include <string.h>
#include "RegisterUser.h"
#include "RegisterUserUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "AddBike.h"
#include "AddBikeUI.h"
#include "UserCollection.h"
#include "BikeCollection.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogin(UserCollection* userCol, string& currUserID);
void doLogout(string& currUserID);
void doAddBikeList(string currUserID, BikeCollection* bikeCol);
void doRentBike();
void doViewBikeList();

int main()
{
	UserCollection userCol;
	BikeCollection bikeCol;
	//string currUserID = "";
	string currUserID = "admin";

	//doRegister(&userCol);
	//doLogin(&userCol, currUserID);
	//doLogout(currUserID);
	doAddBikeList(currUserID, &bikeCol);
}

void doRegister(UserCollection* userCol)
{
	RegisterUserUI regUI;
	RegisterUser regCtrl(&regUI, userCol);

	regUI.signup();
}

void doLogin(UserCollection* userCol, string& currUserID)
{
	LoginUI loginUI;
	Login loginCtrl(&loginUI, userCol);

	loginUI.login(currUserID);
}

void doLogout(string& currUserID) {
	LogoutUI logoutUI;
	Logout logoutCtrl(&logoutUI);

	logoutUI.logout(currUserID);
}

void doAddBikeList(string currUserID, BikeCollection* bikeCol) {
	if (currUserID == "admin") {
		AddBikeUI addBikeUI;
		AddBike addBike(&addBikeUI, bikeCol);

		addBikeUI.createNewBike();
	}
}