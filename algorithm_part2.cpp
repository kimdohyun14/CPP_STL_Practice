// https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool findEven(int x)
{
	return x % 2 == 0 ? true : false;
}

bool findOdd(int x)
{
	return x % 2 == 0 ? false : true;
}

bool cmp(const int& a, const int& b)
{
	// ��������
	return a < b;
}

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	vector<int> v = { 6,8,1,2,4,2,4,2,3,4,4 };

	/* count �κ�
       count(begin, end, value)
       [begin, end)�� ���ԵǾ� �ִ� ���� �߿��� value�� ������ ã��
       �ð� ���⵵ O(N)
	   */
	cout << "1�� ���� : " << count(v.begin(), v.end(), 1) << endl;

	/* count_if(begin, end, p)
	   [begin, end)�� ���ԵǾ� �ִ� ���� �߿��� ���� p�� �ش��ϴ� ���� ������ ã��
	   */
	int even = count_if(v.begin(), v.end(), findEven);
	int odd = count_if(v.begin(), v.end(), findOdd);
	cout << "¦���� ���� : " << even << endl;
	cout << "Ȧ���� ���� : " << odd << endl;

	/* find �κ�
	   find(begin, end, value)
	   [begin, end)�� ���ԵǾ� �ִ� ���� �߿��� value�� iterator ��ȯ
	   */
	for (int i = 1; i <= 5; ++i)
	{
		auto it = find(v.begin(), v.end(), i);
		cout << i << "�� ��ġ : ";
		if (it == v.end())
			cout << "�𸥴�" << endl;
		else
			cout << (it - v.begin()) << endl;
	}

	/* find_if(begin, end, value)
	   [begin, end)�� ���ԵǾ� �ִ� ���� �߿��� ���� p�� �ش��ϴ� ���� iterator ��ȯ
	   */
	auto even_idx = find_if(v.begin(), v.end(), findEven);
	auto odd_idx = find_if(v.begin(), v.end(), findOdd);

	/* �� �Լ� ��� ��á������ end�� ��ȯ
	   �ð� ���⵵ O(N)
	   */
	cout << "ù ��° ¦�� : " << (even_idx - v.begin()) << endl;
	cout << "ù ��° Ȧ�� : " << (odd_idx - v.begin()) << endl;
	
	/* sort �κ�
	   sort(begin, end)
	   [begin, end)�� < �� �������� ����

	   sort(begin, end, cmp)
	   [begin, end)�� cmp �������� ����
	   sort()�� �����ķ� ��� O(NlogN)�� �ð����⵵
	   cmp�� ��� const�� &�� ������.
	   */

	vector<int> a = { 5,3,2,1,4,1 };
	// �������� �����ϱ�
	sort(a.begin(), a.end(), greater<int>());
	print(a);

	// cmp ����� �Լ� ����
	sort(a.begin(), a.end(), cmp);
	print(a);

	/* stable sort �κ�
	   stable_sort(begin, end)
	   [begin, end)�� < �� �������� ����

	   stable_sort(begin, end, cmp)
	   [begin, end)�� cmp�� �������� ����

	   stable Sorting�� ���� ���� �ִ� ��� �����ϱ� ���� ������ �����Ǵ� ���� �˰���
	   */
	stable_sort(a.begin(), a.end());
	print(a);
	stable_sort(a.begin(), a.end(), cmp);
	print(a);

	/* Binary Search
	   binary_search(begin, end, value)
	   [begin, end)���� value�� ã���� true, �� ã���� false
	   
	   binary_search(begin, end, value, cmp)
	   [begin, end)���� value�� cmp�� �������� ã���� true, �� ã���� false
	   */
	if (binary_search(a.begin(), a.end(), 5))
		cout << "5�� ã�Ҵ�." << endl;
	else
		cout << "ã�� ���ߴ�." << endl;

	/* ���밪 ���ϱ�
	   #include <cmath> ����
	   abs()�� ����ؼ� ���밪�� ���Ѵ�.
	   */
	vector<int> b = { -1,2,-10 };
	for (int x : b)
		cout << abs(x) << ' ';
	cout << endl;
	return 0;
}