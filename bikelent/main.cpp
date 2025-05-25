#include <iostream>
#include <string.h>
#include "UserCollection.h"
#include "RegisterUser.h"
#include "RegisterUserUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogin(UserCollection* userCol, string& currUserID);
void doLogout(string& currUserID);
void doRentBike();
void doViewBikeList();
void doAddBikeList();

int main()
{
	UserCollection userCol;
	string currUserID = "";

	doRegister(&userCol);

	doLogin(&userCol, currUserID);

	doLogout(currUserID);
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