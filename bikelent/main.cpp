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
#include "ExitSystem.h"
#include "ExitSystemUI.h"
#include "UserCollection.h"
#include "BikeCollection.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask(User* currUser, BikeCollection* bikeCol, UserCollection& userCol, ifstream& in_fp, ofstream& out_fp); // ���漱��

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    ofstream out_fp;
    ifstream in_fp;

    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    /*
    1. ��ü �����ſ� ���� ������ �������� ���� ���� �����ڿ� ���� ������ �����´�.
    2. �����ڰ� ���� ��ü ������ ������ �޾ƿ´�.
    */
    UserCollection userCol;
    User* admin = userCol.verifyUserInfo("admin", "admin");
    BikeCollection* bikeCol = admin->getBikeCol();
    User* currUser = NULL; // ���� �������� ����

    doTask(currUser, bikeCol, userCol, in_fp, out_fp);
}

void doTask(User* currUser, BikeCollection* bikeCol, UserCollection& userCol, ifstream& in_fp, ofstream& out_fp)
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
                RegisterUserUI regUI(in_fp, out_fp);
                RegisterUser regCtrl(&regUI, &userCol);
                regUI.signup();
                break;
            }
            } break;

        case 2:
            switch (menu_level_2) {
            case 1: {// 2.1. �α���
                LoginUI loginUI(in_fp, out_fp);
                Login loginCtrl(&loginUI, &userCol);
                loginUI.login(currUser);
               break;
            }
            case 2: {// 2.2. �α׾ƿ�
                LogoutUI logoutUI(in_fp, out_fp);
                Logout logoutCtrl(&logoutUI);
               logoutUI.logout(currUser);
               break;
            }
            } break;
            
        case 3:
            switch (menu_level_2) {
            case 1: { // 3.1. ������ ���
                AddBikeUI addBikeUI(in_fp, out_fp);
                AddBike addBike(&addBikeUI, currUser);
                addBikeUI.createNewBike();
                break;
            }
            } break;

        case 4:
            switch (menu_level_2) {
            case 1: { // 4.1. ������ �뿩
                RentBikeUI rentBikeUI(in_fp, out_fp);
                RentBike rentBike(&rentBikeUI, currUser, bikeCol);
                rentBikeUI.selectBike();
                break;
            }
            } break;

        case 5:
            switch (menu_level_2) {
            case 1: { // 5.1. ������ �뿩 ����Ʈ
                ViewBikeUI viewBikeUI(in_fp, out_fp);
                ViewBike viewBike(&viewBikeUI, currUser);
                viewBikeUI.viewHistory();
                break;
            }
            } break;

        case 6:
            switch (menu_level_2) {
            case 1: { // 6.1. �ý��� ����
                ExitSystemUI exitUI(in_fp, out_fp);
                ExitSystem exitSystem(&exitUI);
                exitUI.shutdown(is_program_exit);
                break;
            }
            } break;
        }
    }
}