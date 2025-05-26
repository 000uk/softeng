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

// 파일 입출력을 위한 초기화
ofstream out_fp;
ifstream in_fp;
UserCollection userCol;
User* currUser = NULL; // 현재 접속중인 유저


/*
1. 전체 자전거에 대한 정보를 가져오기 위해 먼저 관리자에 대한 정보를 가져온다.
2. 관리자가 가진 전체 자전거 정보를 받아온다.
*/
User* admin = userCol.verifyUserInfo("admin", "admin");
BikeCollection* bikeCol = admin->getBikeCol();

void doTask(); // 전방선언

int main()
{
    in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

    doTask();
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1:
            switch (menu_level_2) {
            case 1: { // 1.1. 회원가입
                RegisterUserUI regUI;
                RegisterUser regCtrl(&regUI, &userCol);
                regUI.signup();
                break;
            }
            } break;

        case 2:
            switch (menu_level_2) {
            case 1: {// 2.1. 로그인
                LoginUI loginUI;
                Login loginCtrl(&loginUI, &userCol);
                loginUI.login(currUser);
               break;
            }
            case 2: {// 2.2. 로그아웃
                LogoutUI logoutUI;
                Logout logoutCtrl(&logoutUI);
               logoutUI.logout(currUser);
               break;
            }
            } break;
            
        case 3:
            switch (menu_level_2) {
            case 1: { // 3.1. 자전거 등록
                AddBikeUI addBikeUI;
                AddBike addBike(&addBikeUI, currUser);
                addBikeUI.createNewBike();
                break;
            }
            } break;

        case 4:
            switch (menu_level_2) {
            case 1: { // 4.1. 자전거 대여
                RentBikeUI rentBikeUI;
                RentBike rentBike(&rentBikeUI, currUser, bikeCol);
                rentBikeUI.selectBike();
                break;
            }
            } break;

        case 5:
            switch (menu_level_2) {
            case 1: { // 5.1. 자전거 대여 리스트
                ViewBikeUI viewBikeUI;
                ViewBike viewBike(&viewBikeUI, currUser);
                viewBikeUI.viewHistory();
                break;
            }
            } break;

        case 6:
            switch (menu_level_2) {
            case 1: { // 6.1. 시스템 종료
                is_program_exit = 1;
                out_fp << "6.1. 종료";
                break;
            }
            } break;
        }
    }
}