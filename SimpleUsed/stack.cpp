#include <iostream>
#include <stack>
using namespace std;

// ���� �ڷᱸ��

int main() {
	// int �ڷ����� �����ϴ� ���� ����
	stack<int> st;

	// ���� 4�� ����
	st.push(4);

	// �� �� ���Ҹ� ��
	st.pop();

	// �� �� ���� ���� ���
	cout << st.top() << '\n';

	// ������ ����ִٸ� 1, �ƴϸ� 0
	cout << st.empty() << '\n';

	// ���ÿ� ����Ǿ� �ִ� ������ �� ���
	cout << st.size();
	return 0;
}