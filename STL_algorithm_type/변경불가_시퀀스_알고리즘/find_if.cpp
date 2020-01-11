#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// find_if
// ����Ǵ� �ڷ����� �⺻�� �ƴ� struct�� ��ü�� ��쿡�� find_if�� �������.

// Ư�� ���� ������ �ִ� ���� ã��
struct User
{
	int Money;
	int Level;
};

struct FindMoneyUser
{
	// ���������� ������ �����͸� �����ؼ� ���Ѵ�.
	bool operator() (User& user) const
	{
		return user.Money == CompareMoney;
	}
	int CompareMoney;
};

int main()
{
	vector<User> Users;
	
	User user1; user1.Level = 10; user1.Money = 2000;
	User user2; user2.Level = 5; user2.Money = -10;
	User user3; user3.Level = 20; user3.Money = 35000;

	Users.push_back(user1);
	Users.push_back(user2);
	Users.push_back(user3);

	vector<User>::iterator FindUser;

	FindMoneyUser tFindMoneyUser; // ���� t�� ����ü�� �ǹ�
	tFindMoneyUser.CompareMoney = 2000; // 2000���� ������ �ִ� ����� ã�� �ʹ�.
	FindUser = find_if(Users.begin(), Users.end(), tFindMoneyUser);
	if (FindUser != Users.end())
		cout << "�����ϰ� �ִ� ����: " << FindUser->Money << "�Դϴ�." << endl;
	else
		cout << "������ �����ϴ�." << endl;
	return 0;
}