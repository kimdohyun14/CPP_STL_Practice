#include <iostream>
#include <map>
using namespace std;

// map�� ��ųʸ� �ڷᱸ�� (���� �����̳�)
// key �� value �� ���� (key�� ������ ��, �ߺ��� �Ұ���)
// ������ �Ǹ鼭 �ڵ����� �������ش�.
// ����, ����, �˻� ���� ������ O(logN)

int main()
{
	// ����
	map<int, int> m;

	// ����
	m.insert(make_pair(4, 5));
	m[5] = 6;

	// ���
	for (auto elem : m)
	{
		cout << elem.first << "," << elem.second << endl;
	}
	// ������
	cout << "m.size() : " << m.size() << endl;

	// �˻�
	cout << "m.find(4) : ";
	if (m.find(4) != m.end())
	{
		cout << "�˻� ����" << endl;
		cout << "key : " << m.find(4)->first << endl;
		cout << "value : " << m.find(4)->second << endl;
		
		// ����, �˻��� �ؼ� ���� ������ �� �ִ�.
		// �����ϱ� �ȴٸ� const iterator�� ã��.
	}
	else
		cout << "�˻� ����" << endl;

	// ������ ��
	m[6] = 7;
	m[6] = 8; // (����)
	// ���
	for (auto elem : m)
	{
		cout << elem.first << "," << elem.second << endl;
	}
	// ������
	cout << "m.size() : " << m.size() << endl;

	// �ش� key�� ������ ������ ������ ����
	cout << "m.count(7) : " << m.count(7) << endl;
	cout << "m.count(6) : " << m.count(6) << endl;

	// ��� ���� ����
	m.clear();


	return 0;
}