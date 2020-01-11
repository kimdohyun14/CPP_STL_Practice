#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// for_each
// ���������� �����̳ʿ� ��� �����͸� �Լ��� �Ķ���ͷ� �Ѱܼ� �Լ��� �����Ű�� �˰���

// �������� �÷��� �ð� ���� ����
struct User
{
	int UID;
	int PlayTime;
};

struct UpdatePlayTime
{
	void operator() (User& user)
	{
		user.PlayTime += PlayTime;
	}
	int PlayTime;
};

int main()
{
	vector<User> Users;

	User user1; user1.UID = 1; user1.PlayTime = 40000;
	User user2; user2.UID = 2; user2.PlayTime = 0;
	User user3; user3.UID = 3; user3.PlayTime = 25000;

	Users.push_back(user1);
	Users.push_back(user2);
	Users.push_back(user3);

	// ���� �÷��� �ð�
	vector<User>::iterator IterUser;
	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "UID : " << IterUser->UID << "�� �� �÷��� �ð�: " << IterUser->PlayTime << endl;
	}
	cout << endl;

	// ��� �������� ���� �÷��� �ð��� ��������.
	UpdatePlayTime updatePlayTime;
	updatePlayTime.PlayTime = 200;

	// �� ��° �������� ����
	for_each(Users.begin() + 1, Users.end(), updatePlayTime);

	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "UID : " << IterUser->UID << "�� �� �÷��� �ð�: " << IterUser->PlayTime << endl;
	}
	cout << endl;

	return 0;
}