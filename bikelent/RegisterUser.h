#pragma once
#include <string>
#include "RegisterUserUI.h"
#include "UserCollection.h"

class RegisterUserUI;

// ȸ�� ���� ����� ����ϴ� ��Ʈ�� Ŭ����
class RegisterUser
{
private:
	RegisterUserUI* ui; // �������̽�
	UserCollection* userCol; // ��ü ȸ�� �÷���

public:
	RegisterUser(RegisterUserUI* ui, UserCollection* userCol);
	bool tryAddNewMember(string userID, string userPW, string phoneNum);
};