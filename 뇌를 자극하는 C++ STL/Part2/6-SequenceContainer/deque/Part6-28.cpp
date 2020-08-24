#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(4, 100);
	deque<int> dq(4, 100);

	// vector�� �޸� ���Ҵ��� �� ��, ���Ҹ� �����Ѵ�.
	v.push_back(200);
	// deque�� �޸� �Ҵ縸 ���ָ� �ȴ�.
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << ' ';
	cout << endl;

	return 0;
}