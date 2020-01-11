#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
// find (���� �Ұ� ������ �˰���)
// �����̳ʿ� �ִ� ������ �� ���ϴ� ���� ã�� �˰���

// vector, list, deque�� ���� ���
// ���� �����̳��� ���� ����� find()������ ������ �ִ�.

// ĳ���� ������ �˻� ����
int main()
{
	vector<int> CharItems;
	CharItems.push_back(12);
	CharItems.push_back(100);
	CharItems.push_back(77);

	vector<int>::iterator FindIter;

	// [ó�� ~ ��)���� 12�� ã�´�.
	FindIter = find(CharItems.begin(), CharItems.end(), 12);
	if (FindIter != CharItems.end())
		cout << "CharItem 12�� ã�Ҵ�." << endl;
	else
		cout << "CharItem 12�� ����." << endl;

	// [�� ��° ~ ��)���� 12�� ã�´�.
	FindIter = find(++CharItems.begin(), CharItems.end(), 12);
	if (FindIter != CharItems.end())
		cout << "CharItem 12�� ã�Ҵ�." << endl;
	else
		cout << "CharItem 12�� ����." << endl;
}