#include <fstream>
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

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

// ���� ������� ���� �ʱ�ȭ
ofstream out_fp;
ifstream in_fp;
UserCollection userCol;
User* currUser = NULL; // ���� �������� ����


/*
1. ��ü �����ſ� ���� ������ �������� ���� ���� �����ڿ� ���� ������ �����´�.
2. �����ڰ� ���� ��ü ������ ������ �޾ƿ´�.
*/
User* admin = userCol.verifyUserInfo("admin", "admin");
BikeCollection* bikeCol = admin->getBikeCol();

void doTask(); // ���漱��

int main()
{
    in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

    doTask();
}


void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1: { // 1.1. ȸ������
                RegisterUserUI regUI;
                RegisterUser regCtrl(&regUI, &userCol);
                regUI.signup();
                break;
            }
            } break;

        case 2:
            switch (menu_level_2) {
            case 1: {// 2.1. �α���
                LoginUI loginUI;
                Login loginCtrl(&loginUI, &userCol);
                loginUI.login(currUser);
               break;
            }
            case 2: {// 2.2. �α׾ƿ�
                LogoutUI logoutUI;
                Logout logoutCtrl(&logoutUI);
               logoutUI.logout(currUser);
               break;
            }
            } break;
            
        case 3:
            switch (menu_level_2) {
            case 1: { // 3.1. ������ ���
                AddBikeUI addBikeUI;
                AddBike addBike(&addBikeUI, currUser);
                addBikeUI.createNewBike();
                break;
            }
            } break;

        case 4:
            switch (menu_level_2) {
            case 1: { // 4.1. ������ �뿩
                RentBikeUI rentBikeUI;
                RentBike rentBike(&rentBikeUI, currUser, bikeCol);
                rentBikeUI.selectBike();
                break;
            }
            } break;

        case 5:
            switch (menu_level_2) {
            case 1: { // 5.1. ������ �뿩 ����Ʈ
                ViewBikeUI viewBikeUI;
                ViewBike viewBike(&viewBikeUI, currUser);
                viewBikeUI.viewHistory();
                break;
            }
            } break;

        case 6:
            switch (menu_level_2) {
            case 1: { // 6.1. �ý��� ����
                is_program_exit = 1;
                out_fp << "6.1. ����";
                break;
            }
            } break;
        }
    }
}