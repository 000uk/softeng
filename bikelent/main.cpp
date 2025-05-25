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
void doLogin(UserCollection* userCol, User*& currUser);
void doLogout(User*& currUser);
void doAddBikeList(User* currUser);
void doRentBike();
void doViewBikeList();

int main()
{
	UserCollection userCol;
	BikeCollection bikeCol;
	User* currUser = NULL;

	doRegister(&userCol);
	doLogin(&userCol, currUser);
	//doLogout(currUser);
	doAddBikeList(currUser);
}

void doRegister(UserCollection* userCol)
{
	RegisterUserUI regUI;
	RegisterUser regCtrl(&regUI, userCol);

	regUI.signup();
}

void doLogin(UserCollection* userCol, User*& currUser)
{
	LoginUI loginUI;
	Login loginCtrl(&loginUI, userCol);

	loginUI.login(currUser);
}

void doLogout(User*& currUser) {
	LogoutUI logoutUI;
	Logout logoutCtrl(&logoutUI);

	logoutUI.logout(currUser);
}

void doAddBikeList(User* currUser) {
	AddBikeUI addBikeUI;
	AddBike addBike(&addBikeUI, currUser);

	addBikeUI.createNewBike();
}