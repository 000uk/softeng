#include <string>
#include "Logout.h"

using namespace std;

/*
������: UI ��ü�� �޾� �α׾ƿ� �������̽��� �����Ѵ�.
*/
Logout::Logout(LogoutUI* ui) {
	this->ui = ui;

	ui->startInterface(this);
}

/*
�ý����� �����Ѵ�.
���� �α��� ���� ������� �����͸� NULL�� �ٲٸ� �α׾ƿ� ���·� �����.
*/
void Logout::finishAccess(User*& currUser) {
	currUser = NULL;
}