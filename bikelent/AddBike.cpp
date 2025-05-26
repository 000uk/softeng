#include <string>
#include "AddBike.h"

/*
생성자: UI와 현재 사용자 정보를 받아 초기화하고 UI 인터페이스를 시작한다.
*/
AddBike::AddBike(AddBikeUI* ui, User* currUser) {
    this->ui = ui;
    this->bikeCol = currUser->getBikeCol(); // 현재 사용자의 자전거 컬렉션 가져오기

    ui->startInterface(this); // UI 시작, 자신을 UI로 전달
}

/*
 새로운 자전거를 자전거 컬렉션에 추가한다.
 성공적으로 추가하면 true, 이미 존재하면 false 반환
*/
bool AddBike::addNewBike(string bikeID, string bikeName) {
    // 동일한 자전거가 이미 존재하는지 확인
    if (!bikeCol->tryGetBikePtr(bikeID)) {
        bikeCol->addBike(bikeID, bikeName);  // 없으면 추가
        return true;
    }
    else
        return false;  // 이미 존재하면 실패 반환
}