#include <string>
#include "ExitSystem.h"

using namespace std;

/*
������: UI ��ü�� �޾� �ý��� ���� �������̽��� �����Ѵ�.
*/
ExitSystem::ExitSystem(ExitSystemUI* ui) {
	this->ui = ui;

	ui->startInterface(this);
}

/*
�ý����� �����Ѵ�.
*/
void ExitSystem::finishSystem(int& is_program_exit) {
	is_program_exit = 1;
}