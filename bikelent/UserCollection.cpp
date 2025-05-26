#include <string.h>
#include "UserCollection.h"
#include "Manager.h"
#include "Member.h"

/*
����ڸ� �����Ѵ�.
*/
UserCollection::UserCollection() {
	userList[numUsers++] = new Manager("admin", "admin"); // �������� ������ �־��� ����
}

/*
�����Ҵ��� ��ϵ� ��� ����ڸ� �����Ѵ�.
*/
UserCollection::~UserCollection() {
	for (int i = 0; i < numUsers; i++) {
		delete userList[i];
	}
}

/*
�� ȸ���� ����� Ŭ������ �߰��Ѵ�.
*/
void UserCollection::addUser(string userID, string userPW, string phoneNum) {
	Member* newMember = new Member(userID, userPW, phoneNum);
	userList[numUsers++] = newMember; // ������
}

/*
Ư�� ����� ID�� �̹� �����ϴ��� Ȯ��
*/
bool UserCollection::isExist(string userID) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID()) {
			return true;
		}
	}
	return false;
}

/*
�α����� ���� ������� ���̵�� ��й�ȣ�� �����Ѵ�.
���� �� �ش� ������� �����͸� ��ȯ�Ѵ�.
*/
User* UserCollection::verifyUserInfo(string userID, string userPW) {
	for (int i = 0; i < numUsers; i++) {
		if (userID == userList[i]->getUserID() &&
			userPW == userList[i]->getUserPW()) {
			return userList[i]; // ����� ������ ��ȯ
		}
	}
	return NULL;
}