#include <fstream>
#include <string>
#include "AddBikeUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;
extern ofstream out_fp;
extern ifstream in_fp;

/*
���� �������̽�: ������ ��� �޴� ������ �˸���, ��Ʈ�ѷ� ��ü�� �����Ѵ�.
ctrl: AddBike ��Ʈ�ѷ� ��ü ������
*/
void AddBikeUI::startInterface(AddBike* ctrl) {
	this->ctrl = ctrl;
	out_fp << "3.1. ������ ���\n";
}

/*
���ο� �����Ÿ� �����Ѵ�.
�Է� ���Ͽ��� ������ ID�� �̸��� �а�, ��Ʈ�ѷ��� ��� ��û�� �Ѵ�.
��� ���� �� ��ϵ� ������ ������ ����Ѵ�.
*/
void AddBikeUI::createNewBike() {
	string id, name;
	in_fp >> id >> name; // ���Ϸ� ���� �Է¹���

	if (ctrl->addNewBike(id, name)) { // ���������� ��� �ȴٸ� ���
		out_fp << "> " << id << " " << name << "\n\n";
	}
}