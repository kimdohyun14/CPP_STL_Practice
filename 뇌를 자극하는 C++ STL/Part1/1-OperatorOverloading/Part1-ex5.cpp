#include <iostream>
#include <cstring>
using namespace std;

class String
{
	char buff[100];
public:
	String(const char* sz)
	{
		strcpy_s(buff, 100, sz);
	}
	void Print() const
	{
		int idx = 0;
		while (buff[idx] != NULL)
			cout << buff[idx++];
		cout << endl;
	}
};

int main()
{
	const char* sz = "Hello!";
	String s("Hi~!");

	s = sz; // s = String(sz);�� �Ϲ����� �����ڸ� �̿��� Ÿ�� ��ȯ

	s.Print();

	return 0;
}