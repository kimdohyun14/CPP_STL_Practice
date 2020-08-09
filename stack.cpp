#include <iostream>
#include <stack>
using namespace std;

// stack - �����̳� �����
// LIFO ���
// ��� ����� ������ �� �̿�
// �������� ����ϰ� ���� ��

int main()
{
	stack<int> s;

	s.push(10);
	s.push(1);
	s.push(1000);
	s.push(502);

	cout << "s.size() : " << s.size() << endl;   // 4
	cout << "s.empty() : " << s.empty() << endl; // 0
	cout << "s.top() : " << s.top() << endl << endl; // 502

	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}