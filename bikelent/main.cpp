#include <iostream>
#include <string.h>
#include "RegisterUser.h"
#include "RegisterUserUI.h"

using namespace std;

void doRegister();
void doLogIn();
void doLogOut();
void doRentBike();
void doViewBikeList();
void doAddBikeList();

int main()
{
	doRegister();
}

void doRegister() 
{
	RegisterUserUI regUI;
	RegisterUser regCtrl(&regUI);

	regUI.signUp();
}