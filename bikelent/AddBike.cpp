#include <string>
#include "AddBike.h"

/*
������: UI�� ���� ����� ������ �޾� �ʱ�ȭ�ϰ� UI �������̽��� �����Ѵ�.
*/
AddBike::AddBike(AddBikeUI* ui, User* currUser) {
    this->ui = ui;
    this->bikeCol = currUser->getBikeCol(); // ���� ������� ������ �÷��� ��������

    ui->startInterface(this); // UI ����, �ڽ��� UI�� ����
}

/*
 ���ο� �����Ÿ� ������ �÷��ǿ� �߰��Ѵ�.
 ���������� �߰��ϸ� true, �̹� �����ϸ� false ��ȯ
*/
bool AddBike::addNewBike(string bikeID, string bikeName) {
    // ������ �����Ű� �̹� �����ϴ��� Ȯ��
    if (!bikeCol->tryGetBikePtr(bikeID)) {
        bikeCol->addBike(bikeID, bikeName);  // ������ �߰�
        return true;
    }
    else
        return false;  // �̹� �����ϸ� ���� ��ȯ
}