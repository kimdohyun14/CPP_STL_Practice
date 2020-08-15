#include <iostream>
using namespace std;

void Print()
{
	cout << "���� �Լ�" << endl;
}

void Print(int a, int b)
{
	cout << "���� �Լ�: " << a << ',' << b << endl;
}

struct Functor
{
	void operator()()
	{
		cout << "�Լ� ��ü" << endl;
	}

	void operator()(int a, int b)
	{
		cout << "�Լ� ��ü: " << a << ',' << b << endl;
	}
};

int main()
{
	Functor functor;

	Print();    // ���� �Լ� ȣ��
	functor();  // ��� �Լ� ȣ�� functor.operator()

	Print(10, 20);
	functor(10, 20);
	return 0;
}