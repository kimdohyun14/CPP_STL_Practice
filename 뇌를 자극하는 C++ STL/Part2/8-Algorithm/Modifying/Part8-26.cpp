#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(10);
	vector<int>::iterator iter;
	// [v1.begin(), v1.end())�� ��� ���Ҹ�
	// [iter, v2.end())�� �������� ������ ���Һ��� ����
	iter = copy_backward(v1.begin(), v1.end(), v2.end());
	cout << "v2 ù ����: " << *iter << endl;

	cout << "v1: ";
	for (const auto& n : v1)
		cout << n << " ";
	cout << endl;

	cout << "v2: ";
	for (const auto& n : v2)
		cout << n << " ";
	cout << endl;

	return 0;
}