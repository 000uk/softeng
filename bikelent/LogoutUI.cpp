#include <fstream>
#include <string>
#include "LogoutUI.h"

using namespace std;

LogoutUI::LogoutUI(ifstream& in_fp, ofstream& out_fp)
	:in_fp(in_fp), out_fp(out_fp) {}

/*
�α׾ƿ� �������̽� ����
*/
void LogoutUI::startInterface(Logout* ctrl) {
	this->ctrl = ctrl;
	out_fp << "2.2. �α׾ƿ�\n";
}

/*
�α׾ƿ��� ó���Ѵ�.
���� ������� ID�� ����ϸ� �ý��� ���� ���Ḧ ó���Ѵ�.
*/
void LogoutUI::logout(User*& currUser) {
	out_fp << "> " << currUser->getUserID() << "\n\n";
	// ���� �α��ε� ������� �����͸� ������ �Ѱ� �α׾ƿ� ����
	ctrl->finishAccess(currUser);
}