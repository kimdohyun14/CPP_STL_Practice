#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> mp1;

	// insert case 1:
	mp1.insert(map<int, int>::value_type(1, 1));
	mp1.insert(map<int, int>::value_type(2, 4));
	mp1.insert(map<int, int>::value_type(3, 2));
	mp1.insert(map<int, int>::value_type(4, 8));
	mp1.insert(map<int, int>::value_type(5, 9));

	// insert case 2:
	mp1[6] = 11;
	mp1[7] = 22;

	// operator[] ������ ���ԻӸ� �ƴ϶� ������ ����
	mp1[1] = 100;

	// insert case 3:
	map<int, int> mp2;
	mp2[8] = 3;
	mp2[9] = 10;
	mp1.insert(mp2.begin(), mp2.end());

	// const�� �ݺ��ڿ� ������, ���� �Ұ���!
	map<int, int>::const_iterator iter;
	cout << "map1 : ";
	for (iter = mp1.begin(); iter != mp1.end(); iter++)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// search case 1:
	map<int, int>::iterator FindIter = mp1.find(9);
	if (FindIter != mp1.end())
	{
		// �˻��� �ؼ� ������ �� �ִ�.
		FindIter->second = 999;
	}

	cout << "map1 : ";
	for (iter = mp1.begin(); iter != mp1.end(); iter++)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// search case 2:
	if (mp1.count(8)) // ������ ������ 1, �ƴϸ� 0�� return
	{
		cout << "map���� key 8�� ���¸� ������ �ֽ��ϴ�." << endl;
	}

	cout << endl;

	// erase case 1:
	mp1.erase(mp1.begin());

	cout << "map1 : ";
	for (iter = mp1.begin(); iter != mp1.end(); iter++)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// erase case 2:
	iter = mp1.begin();
	iter++;
	iter++;

	mp1.erase(iter, mp1.end());

	cout << "map1 : ";
	for (iter = mp1.begin(); iter != mp1.end(); iter++)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// erase case 3:
	int remove_key2_cnt = mp1.erase(2);
	int remove_key3_cnt = mp1.erase(3);

	cout << "map1 : ";
	for (iter = mp1.begin(); iter != mp1.end(); iter++)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	cout << "������ ����" << endl;
	cout << "key�� 2�� ������ ������ ���� : " << remove_key2_cnt << endl;
	cout << "key�� 3�� ������ ������ ���� : " << remove_key3_cnt << endl;
	cout << endl;


	// string ���
	map<int, string> mp3;
	mp3[1] = "Apple";
	mp3[2] = "Banana";
	mp3[3] = "Cheeze";
	mp3[4] = "Coconut";

	cout << "mp3 : ";
	map<int, string>::const_iterator iter2;
	for (iter2 = mp3.begin(); iter2 != mp3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	// lower_bound, upper_bound, equal_range
	map<int, int> mp4;
	mp4.insert(map<int, int>::value_type(1, 10));
	mp4.insert(map<int, int>::value_type(2, 20));
	mp4.insert(map<int, int>::value_type(3, 30));
	mp4.insert(map<int, int>::value_type(4, 40));

	pair<map<int, int>::const_iterator, map<int, int>::const_iterator> p1, p2, p3;

	p1 = mp4.equal_range(2);
	cout << "key 2�� lower_bound : ";
	cout << "[" << p1.first->first << "," << p1.first->second << "]" << endl;
	cout << "key 2�� upper_bound : ";
	cout << "[" << p1.second->first << "," << p1.second->second << "]" << endl << endl;

	p2 = mp4.equal_range(3);
	cout << "key 3�� lower_bound : ";
	cout << "[" << p2.first->first << "," << p2.first->second << "]" << endl;
	cout << "key 3�� upper_bound : ";
	cout << "[" << p2.second->first << "," << p2.second->second << "]" << endl << endl;

	p3 = mp4.equal_range(4);
	if ((p3.first == mp4.end()) || (p3.second == mp4.end()))
	{
		cout << "key 4�� lower_bound�� ������, key 4�� upper_bound�� �����ϴ�. " << endl;
	}
	else
	{
		cout << "key 4�� lower_bound : ";
		cout << "[" << p3.first->first << "," << p3.first->second << "]" << endl;
		cout << "key 4�� upper_bound : ";
		cout << "[" << p3.second->first << "," << p3.second->second << "]" << endl << endl;
	}

	return 0;
}