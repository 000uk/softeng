#include <iostream>
#include <string.h>
#include "UserCollection.h"

#include "RegisterUser.h"
#include "RegisterUserUI.h"

#include "Login.h"
#include "LoginUI.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogin(UserCollection* userCol);
void doLogout();
void doRentBike();
void doViewBikeList();
void doAddBikeList();

int main()
{
	UserCollection userCol;

	doRegister(&userCol);

	doLogin(&userCol);
}

void doRegister(UserCollection* userCol)
{
	RegisterUserUI regUI;
	RegisterUser regCtrl(&regUI, userCol);

	regUI.signup();
}

void doLogin(UserCollection* userCol)
{
	LoginUI loginUI;
	Login loginCtrl(&loginUI, userCol);

	loginUI.login();
}