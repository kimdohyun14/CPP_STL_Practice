#include <iostream>
#include <algorithm>
using namespace std;

// pair�� ����ϸ� �� �ڷ��� T1�� T2�� ���� �� �ִ�.
// ù ��° �ڷ� : first, �� ��° �ڷ� : second ����
// make_pair( ), { } �� insert ����
// ��� ������
// <algorithm>, <vector>

int main()
{
	pair<int, int> p1 = make_pair(1, 2);
	cout << p1.first << ' ' << p1.second << endl;

	p1 = pair<int, int>(3, 4);
	cout << p1.first << ' ' << p1.second << endl;
	return 0;
}