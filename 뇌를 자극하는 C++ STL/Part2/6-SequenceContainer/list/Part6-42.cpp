#include <iostream>
#include <list>
#include <functional>
using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// list�� algorithm�� sort�� ����� �� ����. (vector, deque�� ���� ���� �ݺ����̹Ƿ� ����)
	// �׷��� ������ ��ü ���� �Լ� sort()�� ����Ѵ�.
	lt.sort(); // ��������(less) ����
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(greater<int>()); // ��������(greater) ����
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}