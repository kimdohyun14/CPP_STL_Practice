#include <iostream>
#include <queue>
using namespace std;

// priority_queue �켱���� ť - �����̳� �����
// queue�� FIFO ����̸�, priority_queue�� min-heap, max-heap����
// push�� pop�� O(logN)���� ó��
// �ִ���� ������ ���� max-heap
// �ּҺ��� ������ ���� min-heap
// ���������� ���ͽ�Ʈ�� �˰��򿡼� ����Ѵ�.

struct Node
{
	int start;
	int end;
	int value;
};

class A
{
public:
	bool operator()(Node a, Node b)
	{
		// value ��������
		return a.value < b.value;
	}
};

int main()
{
	// defalut�� max-heap ������ �۵�
	priority_queue<int> pq;

	pq.push(10);
	pq.push(20);
	pq.push(25);
	pq.push(40);
	pq.push(50);
	pq.push(5);

	cout << "pq.size() : " << pq.size() << endl;
	cout << "pq.empty() : " << pq.empty() << endl;
	cout << "pq.top() : " << pq.top() << endl << endl;

	while (!pq.empty())
	{
		cout << pq.top() << ' ';
		pq.pop();
	}

	cout << endl;

	// ���� �ڵ�� ����
	priority_queue<int, vector<int>, less<int>> pq2;

	// priority_queue<�ڷ���, ����ü, �� ������>
	// �ڷ��� (int, double, class ���..)
	/* ����ü
 	   �⺻������ vector<�ڷ���>���� ����.
	   priority_queue�� �����δ� vector������ ���ư��� �ִٴ� ��
	   vector�� �ƴ϶� deque<�ڷ���>���� �־ �� ���ư�.
	   STL���� ���� �����ϱ⿡ ����� �ڷᱸ���� �� ��.
	*/

	/* �� ������
	   �⺻������ less<�ڷ���>���� ����.
	   �̰��� STL���� �⺻���� �����ϴ� �� ������ Ŭ�����̸�,
	   �̰��� ������ ū �ͺ��� ���´�.

	   greater<�ڷ���>�� ������ ���� �ͺ��� ���´�.
	*/

	pq2.push(3);
	pq2.push(1);
	pq2.push(4);
	pq2.push(1);
	pq2.push(5);
	pq2.push(9);

	while (!pq2.empty())
	{
		cout << pq2.top() << ' ';
		pq2.pop();
	}
	cout << endl;

	// min-heap
	priority_queue<int, vector<int>, greater<int> > pq3;

	pq3.push(3);
	pq3.push(1);
	pq3.push(4);
	pq3.push(1);
	pq3.push(5);
	pq3.push(9);

	while (!pq3.empty())
	{
		cout << pq3.top() << ' ';
		pq3.pop();
	}
	cout << endl;

	// class �� struct�� �����غ���
	Node n1 = { 1,1,5 };
	Node n2 = { 1,2,7 };
	Node n3 = { 1,2,9 };
	Node n4 = { 1,7,3 };

	priority_queue<Node, vector<Node>, A> pq4;

	pq4.push(n1);
	pq4.push(n2);
	pq4.push(n3);
	pq4.push(n4);

	while (!pq4.empty())
	{
		Node temp = pq4.top();
		pq4.pop();

		cout << "[" << temp.start << "," << temp.end << "," << temp.value << "]" << endl;
	}

	return 0;
}