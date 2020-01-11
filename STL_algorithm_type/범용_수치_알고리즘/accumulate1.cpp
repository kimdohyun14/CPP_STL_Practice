#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
// accumulate
// ���� ��ġ �˰���
// ������ ������ ���� ������ ��� ���� ���� ����Ѵ�.
// �⺻������ ���ϱ� ���길 ������ �����ڸ� ����ϸ� ���ϱ� �̿��� ���굵 �����ϴ�.

int main()
{
	vector<int>::iterator Iter;
	vector<int> vec1;

	for (int i = 1; i < 5; i++)
		vec1.push_back(i);

	// vec1�� �ִ� ��
	for (Iter = vec1.begin(); Iter != vec1.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	// vec1�� �ִ� ������ ���Ѵ�.
	int Result1 = accumulate(vec1.begin(), vec1.end(), 0);
	// vec1�� �ִ� ������ ���� �� 10�� ���Ѵ�.
	int Result2 = accumulate(vec1.begin(), vec1.end(), 10);

	cout << Result1 << ", " << Result2 << endl;
	return 0;
}