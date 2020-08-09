//https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	/* Rotate
	*  rotate(begin, mid, end)
	*  [begin, end)�� mid �������� �������� ȸ����Ų��.
	   
	*  �ð� ���⵵ : O(N)
	   */
	vector<int> a = { 0,1,2,3,4,5 };

	for (int i = 0; i < a.size(); ++i)
	{
		// ������ �ݺ���(Forward Iterator)
		// vector�� ��Ұ� �������� �� ĭ�� �̵��Ѵ�.
		rotate(a.begin(), a.begin() + 1, a.end());
		print(a);
	}
	/*
	1 2 3 4 5 0
	2 3 4 5 0 1
	3 4 5 0 1 2
	4 5 0 1 2 3
	5 0 1 2 3 4
	0 1 2 3 4 5
	*/

	cout << endl;
	for (int i = 0; i < a.size(); ++i)
	{
		// ������ �ݺ���(Reverse Iterator)
		// vector�� ��Ұ� ���������� �� ĭ�� �̵��Ѵ�.
		rotate(a.rbegin(), a.rbegin() + 1, a.rend());
		print(a);
	}
	cout << endl;
	/*
	5 0 1 2 3 4
	4 5 0 1 2 3
	3 4 5 0 1 2
	2 3 4 5 0 1
	1 2 3 4 5 0
	0 1 2 3 4 5
	*/

	/* fill
	*  fill(begin, end, value)
	*  [begin, end)�� value�� ä���.
	*  �ð����⵵ : O(N)
	   */
	vector<int> b = { 1,5,6,8,9 };
	print(b);
	fill(b.begin(), b.end(), 7);
	print(b);
	cout << endl;

	/* Ÿ�� Ȯ���ϱ�
	   #include <typeinfo>
	   typeid(target).name()���� Ȯ��
	   */

	cout << typeid(int).name() << endl;
	cout << typeid("hello").name() << endl;

	return 0;
}