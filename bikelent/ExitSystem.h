#pragma once
#include "ExitSystemUI.h"

class ExitSystemUI;

// 시스템을 종료한다.
class ExitSystem
{
private:
	ExitSystemUI* ui; // 인터페이스

public:
	ExitSystem(ExitSystemUI* ui);
	void finishSystem(int& is_program_exit);
};