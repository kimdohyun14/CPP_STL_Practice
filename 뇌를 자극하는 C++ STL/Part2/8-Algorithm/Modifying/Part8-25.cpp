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

	vector<int> v2(5);
	vector<int>::iterator iter;
	iter = copy(v1.begin(), v1.end(), v2.begin()); // ������ �� �ݺ��ڸ� ��ȯ�Ѵ�.
	cout << "v2 ������ ����: " << *(iter - 1) << endl;

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