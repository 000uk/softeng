#include <fstream>
#include <string>
#include "RegisterUserUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

/*
������: ȸ������ �������̽��� �����Ѵ�.
*/
void RegisterUserUI::startInterface(RegisterUser* ctrl) {
	this->ctrl = ctrl;
	out_fp << "1.1. ȸ������\n";
}

/*
ȸ�������� �����Ѵ�.
�Է����Ͽ��� ȸ�� ������ �޾� ȸ�������� �õ��Ѵ�.
���� �� �Է� ������ ���
*/
void RegisterUserUI::signup() {
	string id, pw, pNum;

	in_fp >> id >> pw >> pNum;

	if (ctrl->tryAddNewMember(id, pw, pNum)) { // ��Ͽ� �����ϸ� ���� ���
		out_fp << "> " << id << " " << pw << " " << pNum << "\n\n";
	}
}