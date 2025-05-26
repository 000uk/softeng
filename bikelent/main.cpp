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
#include "RentBike.h"
#include "RentBikeUI.h"
#include "ViewBike.h"
#include "ViewBikeUI.h"
#include "UserCollection.h"
#include "BikeCollection.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogin(UserCollection* userCol, User*& currUser);
void doLogout(User*& currUser);
void doAddBikeList(User* currUser);
void doRentBike(User* currUser, BikeCollection* bikeCol);
void doViewBikeList(User* currUser);

int main()
{
	UserCollection userCol;
	User* currUser = NULL; // 현재 접속중인 유저

	User* admin = userCol.verifyUserInfo("admin", "admin");
	BikeCollection* bikeCol = admin->getBikeCol();

	// admin
	doLogin(&userCol, currUser);
	doAddBikeList(currUser);
	doLogout(currUser);

	// user
	doRegister(&userCol);
	doLogin(&userCol, currUser);
	doRentBike(currUser, bikeCol);
	doViewBikeList(currUser);
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

void doRentBike(User* currUser, BikeCollection* bikeCol) {
	RentBikeUI rentBikeUI;
	RentBike rentBike(&rentBikeUI, currUser, bikeCol);

	rentBikeUI.selectBike();
}

void doViewBikeList(User* currUser) {
	ViewBikeUI viewBikeUI;
	ViewBike viewBike(&viewBikeUI, currUser);

	viewBikeUI.viewHistory();
}