#include <stdio.h>
#include <string.h>
#include "RegisterUser.h"
#include "RegisterUserUI.h"

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
	RegisterUser* regCtrl = new RegisterUser;
}