#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("Hello!");
	char buf[100];

	// ������: copy()�� ���� '\0'���ڸ� �������� �ʴ´�.
	s.copy(buf, s.length());
	buf[s.length()] = '\0';
	cout << "��ü ���ڿ�[copy(buf,n)]: " << buf << endl;
	s.copy(buf, 4, 2); // s.copy(buf,n,off) s�� ���ڿ��� buf�� off ��ġ���� n�� ����
	buf[4] = '\0';
	cout << "�κ� ���ڿ�[copy(buf, n, off)]: " << buf << endl;

	return 0;
}