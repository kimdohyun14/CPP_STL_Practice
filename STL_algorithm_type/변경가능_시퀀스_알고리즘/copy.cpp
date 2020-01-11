#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

// copy
// �����̳ʿ� ������ �Ͱ� ���� �ڷ����� �����ϴ� �ٸ� �����̳ʿ� �����ϰ� ���� ��

int main()
{
	vector<int> vec1(10);
	generate(vec1.begin(), vec1.end(), rand);

	cout << "vec1�� ��� �����͸� vec2�� copy" << endl;

	vector<int> vec2(10);
	// ù ��°�� �� ��° �Ķ���ʹ� �����Ϸ��� ���۰� ������ �����̸�,
	// �� ��° �Ķ���ʹ� �ٿ� ���� ��� ������ ���� ��ġ�� ����Ŵ
	copy(vec1.begin(), vec1.end(), vec2.begin());
	for (vector<int>::iterator IterPos = vec2.begin(); IterPos != vec2.end(); ++IterPos)
		cout << *IterPos << endl;
	cout << endl;

	cout << "vec1�� ��� �����͸� list1�� copy" << endl;
	list<int> list1(10);
	copy(vec1.begin(), vec1.end(), list1.begin());

	for (list<int>::iterator IterPos2 = list1.begin(); IterPos2 != list1.end(); ++IterPos2)
		cout << *IterPos2 << endl;
	cout << endl;

	return 0;
}