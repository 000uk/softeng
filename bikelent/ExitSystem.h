#pragma once
#include "ExitSystemUI.h"

class ExitSystemUI;

// �ý����� �����Ѵ�.
class ExitSystem
{
private:
	ExitSystemUI* ui; // �������̽�

public:
	ExitSystem(ExitSystemUI* ui);
	void finishSystem(int& is_program_exit);
};