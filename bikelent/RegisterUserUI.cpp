#include <fstream>
#include <string>
#include "RegisterUserUI.h"

using namespace std;

RegisterUserUI::RegisterUserUI(ifstream& in_fp, ofstream& out_fp) 
	:in_fp(in_fp), out_fp(out_fp) {}

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