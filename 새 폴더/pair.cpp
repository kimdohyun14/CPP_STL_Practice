#include <iostream>
using namespace std;

// pair�� 2���� �����͸� ������ �� �ִ� �����̴�.
// �� ����� 1���� first, 2���� second�� �Ǻ��Ѵ�.

int main() {
	// int, int �ڷ����� �����ϴ� ���� ����
	pair<int, int> p;

	// (4,5)�� ����
	p = make_pair(4, 5);

	// c++11���� ����
	p = { 4,5 };
	return 0;
}