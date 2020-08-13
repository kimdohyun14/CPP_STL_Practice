#include <iostream>
#include <cstring>
using namespace std;

class String
{
	char* buf;
	int len;
public:
	String(const char* sz)
	{
		cout << "String ������" << endl;
		len = strlen(sz) + 1;
		buf = new char[len];
		strcpy_s(buf, len, sz);
	}
	~String()
	{
		delete[] buf;
	}

	// ���� ����
	const String& operator=(const String& arg)
	{
		cout << "operator= ���� ������" << endl;
		delete[] buf; // ?
		len = arg.len;
		buf = new char[len];
		strcpy_s(buf, len, arg.buf);

		return *this;
	}

	void Print() const
	{
		int idx = 0;
		while (buf[idx] != NULL)
			cout << buf[idx++];
		cout << endl;
	}
};

int main()
{
	const char* sz = "Hello!";
	String s("Hi~!");

	// �켱 sz�� �ӽð�ü String �� ������ش�.
	// �׷� ���� s.operator=(String �ӽð�ü)�� ���ؼ�
	// ������ �����ߴ� s�� buf�� �����ְ�
	// ��� ������ �Ŀ�
	// �� ������ ������ �ӽð�ü�� �Ҹ��ڰ� ȣ��Ǹ鼭
	// �ᱹ String s�� ���´�.
	s = sz;

	s.Print();

	return 0;
}