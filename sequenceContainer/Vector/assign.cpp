#include <iostream>
#include <vector>
using namespace std;

/* assign : ���Ϳ� ���ο� ������ �ִµ�, ���� ���Ϳ� �־��� ���ҵ��� �����ȴ�. */

int main()
{
	vector<int> first;
	vector<int> second;
	vector<int> third;

	first.assign(7, 100); // 100�� 7�� �ݺ��ؼ� �ֱ�.

	vector<int>::iterator it;
	it = first.begin() + 1;

	second.assign(it, first.end() - 1);

	int myints[] = { 1776, 7,4 };
	third.assign(myints, myints + 3);

	for (int i = 0; i < first.size(); i++) cout << first[i] << ' ';
	cout << endl;

	for (int i = 0; i < second.size(); i++) cout << second[i] << ' ';
	cout << endl;

	for (int i = 0; i < third.size(); i++) cout << third[i] << ' ';
	cout << endl;

	return 0;
}