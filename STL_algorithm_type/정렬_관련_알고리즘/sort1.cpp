#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// sort
// �����̳ʿ� �ִ� �����͵��� �������� �Ǵ� ������������ ���� �� �� ���
// �������� �ڷ����� �⺻���̶�� STL�� �ִ� greater�� less �� �����ڸ� ���
// string�� ���Ŀ��� ����� �����ϸ�, �� ���� ���ĺ� ������ ���ĵȴ�.

int main()
{
	vector<int> vec1(10);
	vector<int> vec2(10);
	vector<int> vec3(10);
	vector<int>::iterator Iter1;

	generate(vec1.begin(), vec1.end(), rand);
	generate(vec2.begin(), vec2.end(), rand);
	generate(vec3.begin(), vec3.end(), rand);

	// �������� ����
	cout << "vec1 ���� �ϱ� ��" << endl;
	for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec1.begin(), vec1.end());

	cout << "vec1 �������� ����" << endl;
	for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl << endl;

	// �������� ����
	cout << "vec2 ���� �ϱ� ��" << endl;
	for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec2.begin(), vec2.end(), greater<int>());

	cout << "vec2 �������� ����" << endl;
	for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl << endl;

	// �Ϻθ� �������� ����
	cout << "vec3 ���� �ϱ� ��" << endl;
	for (Iter1 = vec3.begin(); Iter1 != vec3.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec3.begin() + 5, vec3.end(), greater<int>());
	cout << "vec3 �Ϻθ� �������� ����" << endl;
	for (Iter1 = vec3.begin(); Iter1 != vec3.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	return 0;
}