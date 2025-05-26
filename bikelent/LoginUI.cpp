#include <fstream>
#include <string>
#include "LoginUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

/*
�α��� �������̽� ����
*/
void LoginUI::startInterface(Login* ctrl) {
	this->ctrl = ctrl; // �α��� ��Ʈ�ѷ�
	out_fp << "2.1. �α���\n";
}

/*
�α����� ó���Ѵ�.
�Է����Ͽ��� ID, PW�� �а� �α����� �õ��Ѵ�.
�� �� ����� ����Ѵ�.
*/
void LoginUI::login(User*& currUser) {
	string ID, PW;
	int pNum = 0;

	in_fp >> ID >> PW;

	// �α��� ���� �� ���� ����� ����
	currUser = ctrl->tryLogin(ID, PW);
	if (currUser) { // �α��� ���н� nullptr�̹Ƿ� false�� ���� ����
		out_fp << "> " << ID << " " << PW << "\n\n";
	}
}