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
	operator const char* () const
	{
		return buff;
	}
};

int main()
{
	String s("Hello!");
	// String Ÿ���� const char* Ÿ������ ��ȯ�ϴ� ��
	const char* sz = s;

	cout << sz << endl;
	return 0;
}