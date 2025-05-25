#include <iostream>
#include <string.h>
#include "UserCollection.h"
#include "RegisterUser.h"
#include "RegisterUserUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"

#include "AddBike.h"
#include "AddBikeUI.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogin(UserCollection* userCol, string& currUserID);
void doLogout(string& currUserID);
void doAddBikeList(string currUserID);
void doRentBike();
void doViewBikeList();

int main()
{
	UserCollection userCol;
	string currUserID = "";

	doRegister(&userCol);
	doLogin(&userCol, currUserID);
	doLogout(currUserID);

	doAddBikeList(currUserID);
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

void doAddBikeList(string currUserID) {
	if (currUserID != "admin") {
		AddBikeUI addBikeUI;
		AddBike addBike(&addBikeUI);

		addBike.createNewBike();
	}
}