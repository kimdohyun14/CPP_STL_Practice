#include <iostream>
#include <set>
using namespace std;

// �������� ����Ʈ�� (AVL Ʈ��)
// ���� ���԰� ����, Ž�� ���� ������ O(logN)�� �����Ѵ�.

int main() {
	// int �ڷ����� �����ϴ� �������� ����Ʈ�� ����
	set<int> s;

	// ���� 5�� ����
	s.insert(5);

	// ���� 6���� ������ ���Ҹ� ã�´�
	// �ִٸ� �ش� ������ �ּҰ��� ����
	// ���ٸ� s.end()�� �����Ѵ�.
	if (s.find(6) != s.end())
		cout << "����" << '\n';
	else
		cout << "����" << '\n';

	// ����� ������ �� ����
	cout << s.size() << '\n';

	// ��� ���� ����
	s.clear();

	// 2��° ���� ����
	s.erase(++s.begin());
	return 0;
}