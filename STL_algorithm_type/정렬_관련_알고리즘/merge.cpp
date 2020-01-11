#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// merge
// �� ���� ���ĵ� ������ ��ĥ �� ����Ѵ�.
// �� ������ ��ġ�� ���� ���� ��ģ ����� �־�� �Ѵ�.
// ��ġ�� ���� �̹� ������ �Ǿ� �־�� �ϸ�, ��ģ ����� ���� �� �ִ� ������ Ȯ��

int main()
{
	vector<int>::iterator Iter;
	vector<int> vec1, vec2, vec3(12);
	
	for (int i = 0; i < 6; i++)
		vec1.push_back(i);

	for (int i = 4; i < 10; i++)
		vec2.push_back(i);

	cout << "vec1�� �ִ� ��" << endl;
	for (Iter = vec1.begin(); Iter != vec1.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	cout << "vec2�� �ִ� ��" << endl;
	for (Iter = vec2.begin(); Iter != vec2.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	// merge �κ�
	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());

	cout << "vec1�� vec2�� merge�� vec3�� �ִ� ��" << endl;
	for (Iter = vec3.begin(); Iter != vec3.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;
	return 0;
}
