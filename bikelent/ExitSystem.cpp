#include <string>
#include "ExitSystem.h"

using namespace std;

/*
생성자: UI 객체를 받아 시스템 종료 인터페이스를 시작한다.
*/
ExitSystem::ExitSystem(ExitSystemUI* ui) {
	this->ui = ui;

	ui->startInterface(this);
}

/*
시스템을 종료한다.
*/
void ExitSystem::finishSystem(int& is_program_exit) {
	is_program_exit = 1;
}