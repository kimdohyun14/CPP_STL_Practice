#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator normal_iter = v.begin() + 3;
	vector<int>::reverse_iterator reverse_iter(normal_iter);

	cout << "������ �ݺ����� ��: " << *normal_iter << endl;
	cout << "������ �ݺ����� ��: " << *reverse_iter << endl << endl;
}