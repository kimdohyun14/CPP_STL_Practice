#include <iostream>
#include <queue>
using namespace std;

// ť �ڷᱸ��

int main() {
	// int �ڷ����� �����ϴ� ť ����
	queue<int> q;

	// ���� 4�� ����
	q.push(4);

	// ���� ��
	q.pop();

	// ���� �� ���
	cout << q.front() << '\n';

	// ť�� ����ִٸ� 1 �ƴϸ� 0
	cout << q.empty() << '\n';

	// ť�� ����Ǿ� �ִ� ������ �� ���
	cout << q.size() << '\n';
	return 0;
}