#include <iostream>
#include <map>
using namespace std;

int main() {
	// int �ڷ����� key�� int �ڷ����� value�� �����ϴ�
	// ��ųʸ� �ڷᱸ�� ����
	map<int, int> m;

	// (4,5) ���� ����
	m.insert(make_pair(4, 5));
	// �̷��Ե� �����ϴ�.
	m[5] = 6;

	// key�� ������ ���Ҹ� pair<key, valye> ���·� �����Ѵ�.
	cout << m.find(4)->second << '\n';

	// key�� ������ ������ ������ ����
	cout << m.count(4) << '\n';

	// ����� ������ ���� ����
	cout << m.size() << '\n';

	// �ش� �ּ��� ���� ����
	m.erase(++m.begin());

	// ��� ���� ����
	m.clear();
	return 0;
}