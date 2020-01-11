#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
// inner_product
// �� �Է� �������� ������ ����ϴ� �˰���
// �� �Է� �������� ���� ��ġ�� ���� ���� ���� ���� ��� �� �� ���� �������̴�.
// ������ ���� �� ��° �������� ù ��° ������ �������� ũ�ų� ���ƾ��Ѵ�.

int main()
{
	vector<int> vec1;
	for (int i = 1; i < 4; i++)
		vec1.push_back(i);

	vector<int> vec2;
	for (int i = 1; i < 4; i++)
		vec2.push_back(i);

	// �� ��° �Ķ���ʹ� �߰� ���� �ǹ��Ѵ�.
	int Result = inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
	// 14 = 0 + (1 * 1) + (2 * 2) + (3 * 3)
	cout << Result << endl;
	return 0;
}