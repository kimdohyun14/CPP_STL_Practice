#include <iostream>
#include <string>
using namespace std;

// getline(in, s)�� ��Ʈ���� in���κ��� s�� ���ڿ��� �� �� �Է¹޴´�.
// getline(in, s, delim) : ����Ʈ�� delim�� \n�̸�, ���� ���� ���ڸ� ������ �� �ִ�.

int main()
{
	string s1, s2, s3;

	cout << "�� ���ڿ� �Է�(���� ���� ����)" << endl;
	getline(cin, s1);
	getline(cin, s2, '\n');
	getline(cin, s3, 'a');
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;

	return 0;
}