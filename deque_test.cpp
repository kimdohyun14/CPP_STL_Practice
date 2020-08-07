#include <iostream>
#include <deque>
using namespace std;

// deque(��ũ, ��) - sequence �����̳�
// ���Ϳ� ����ϰ� O(1)���� ������ ��ġ�� ���� ������ ����
// ���� ��/�� ���Ҹ� �߰�, ������ O(1)
// �ٸ�, ������ ��ġ�� �ִ� ���Ҹ� ����/�߰��� O(N)
// �̷� �κ��� ���ͺ��� ��������, ���� �ӵ��� ���ؼ� �޸𸮸� ����ϴ� �����̳�

template<typename T>
void Print(const deque<T>& dq)
{
	for (const auto& elem : dq)
		cout << elem << ' ';

	cout << endl;
}

int main()
{
	// ����
	deque<int> dq;

	// ����
	dq.push_back(10);  // �ڷ�
	dq.push_front(50); // ������
	dq.push_back(20);
	dq.push_front(30);

	// ��� 
	Print(dq);

	// �˻�
	for (int i = 0; i < dq.size(); ++i)
		if (dq[i] == 10)
			cout << "10�� ã�Ҵ�." << endl;

	// ����
	dq.pop_back();    // �ڷ� ����
	dq.pop_front();   // ������ ����

	// ���
	Print(dq);

	// �� ���� ��ɵ�
	// 3�� ������ 4���� ���� �Ҵ� (������ ���ҵ��� ����)
	dq.assign(4, 3);
	// ���
	Print(dq);
	// �ش� idx ��° ���� ����
	// ��ȿ ������ �����ϹǷ� dq[idx]���� ����
	cout << "dq.at(3) : " << dq.at(3) << endl;
	// ��ȿ ���� üũ�� �������� ����
	cout << "dq[3] : " << dq[3] << endl;

	dq.push_back(10);
	dq.push_front(20);

	// ù ��° ���� ����
	cout << "dq.front() : " << dq.front() << endl;
	// ������ ���� ����
	cout << "dq.back() : " << dq.back() << endl << endl;

	// ũ�� ����
	// ���� ũ�Ⱑ �� Ŀ�� ���, ����ִ� ���Ҵ� 0���� �ʱ�ȭ
	// ũ�Ⱑ �� �۾����ٸ�, �߸��κ��� �Ҵ´�.
	dq.resize(10);
	cout << "dq.size() : " << dq.size() << endl;
	cout << "dq.front() : " << dq.front() << endl;
	Print(dq);

	deque<int> dq2;
	dq2.swap(dq); // dq�� dq2�� �ٲ۴�.

	Print(dq2);
	cout << "dq.size() : " << dq.size() << endl;
	cout << "dq2.size() : " << dq2.size() << endl;


	return 0;
}