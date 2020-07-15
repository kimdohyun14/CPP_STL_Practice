#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void Print(vector<T>& vec)
{
	for (auto elem : vec)
	{
		cout << elem << ' ';
	}

	cout << endl;
}

int main()
{
	vector<int> v = { 5,6,6,7,7,5,5 };
	Print(v);

	auto iter = unique(v.begin(), v.end());

	// [5 6 7 5] 7 5 5
	Print(v);

	// 7
	cout << *iter << endl << endl;

	// 7 5 5
	for (auto i = iter; i != v.end(); ++i)
	{
		cout << *i << endl;
	}

	// 7 5 5 �κ��� �����.
	v.erase(iter, v.end());

	// 5 6 7 5 (�ߺ��� �� ����)
	// �̴� �Ʒ��� ����� ���� ����� �����´�.
	// v.erase(unique(v.begin(), v.end()));
	Print(v);
	return 0;
}