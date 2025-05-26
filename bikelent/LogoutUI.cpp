#include <fstream>
#include <string>
#include "LogoutUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

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
	ctrl->finishSystem(currUser);
}