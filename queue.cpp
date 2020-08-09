#include <iostream>
#include <queue>
using namespace std;

// queue - �����̳� �����
// FIFO ���
// BFS ����� ����.

int main()
{
	queue<int> q;

	q.push(10);
	q.push(15);
	q.push(30);
	q.push(2);

	cout << "q.size() : " << q.size() << endl;   // 4
	cout << "q.empty() : " << q.empty() << endl; // 0 (false)
	cout << "q.front() : " << q.front() << endl; // 10
	cout << "q.back() :" << q.back() << endl << endl; // 2

	// ���� ���Ǵ� ���
	// queue���� �ϳ��� ���� ����ϰ� ���Ѵ�.
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}