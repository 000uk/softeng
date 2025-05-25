#include <iostream>
#include <string.h>
#include "RegisterUser.h"
#include "RegisterUserUI.h"
#include "UserCollection.h"

using namespace std;

void doRegister(UserCollection* userCol);
void doLogIn();
void doLogOut();
void doRentBike();
void doViewBikeList();
void doAddBikeList();

int main()
{
	UserCollection userCol;

	doRegister(&userCol);
}

void doRegister(UserCollection* userCol)
{
	RegisterUserUI regUI;
	
	RegisterUser regCtrl(&regUI, userCol);

	regUI.signUp();
}