#include <iostream>
#include <set>
using namespace std;

// set - ���� �����̳�
// key�� �Ҹ��� ���ҵ��� �����̸�,
// key�� �����ϸ�, �ߺ��� ������� ����
// ������ �� �ڵ����� ��������(less - ��������)

template<typename T>
void Print(const set<T>& s)
{
	for (const auto& elem : s)
		cout << elem << ' ';
	cout << endl;
}

int main()
{
	// ����
	set<int> s;

	// ����
	s.insert(10);
	s.insert(5);
	s.insert(7);
	s.insert(2);
	s.insert(4);

	// ���
	Print(s);

	// �ߺ� �� �־��
	s.insert(10);

	// ���
	Print(s);

	// �˻� �� ����
	if (s.find(10) != s.end())
	{
		cout << "�˻��� key : " << *s.find(10) << endl;
		s.erase(s.find(10));
	}

	// ���
	Print(s);

	// ������ ����
	cout << "s.size() : " << s.size() << endl;

	// key�� �ش��ϴ� ������ ����
	cout << "s.count(10) : " << s.count(10) << endl;
	cout << "s.count(5) : " << s.count(5) << endl;

	// ��� ���� ����
	s.clear();

	return 0;
}