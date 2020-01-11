#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// generate (���� ���� ������ �˰���)
// �����̳��� Ư�� ������ Ư�� ������ ä��� ���� ��

// generate�� ����ؼ� ������ ���� �����͸� �����ϴ� ����
struct User
{
	int UID;
	int RaceType;
	int Sex;
	int Money;
};

struct SetUserInfo
{
	SetUserInfo()
	{
		UserCount = 0;
	}

	User operator() ()
	{
		User user;
		++UserCount;

		user.UID = UserCount;
		user.Money = 2000;
		
		if (0 == (UserCount % 2))
		{
			user.RaceType = 1;
			user.Sex = 1;
			user.Money += 1000;
		}
		else
		{
			user.RaceType = 0;
			user.Sex = 0;
		}
		return user;
	}
	int UserCount;
};

int main()
{
	vector<User> Users(5);

	generate(Users.begin(), Users.end(), SetUserInfo());

	char szUserInfo[256] = { 0, }; // �ʱ�ȭ

	vector<User>::iterator IterUser;
	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		sprintf(szUserInfo, "UID %d, RaceType : %d, Sex : %d, Money : %d",
			IterUser->UID, IterUser->RaceType, IterUser->Sex, IterUser->Money);

		cout << szUserInfo << endl;
	}

	return 0;
}