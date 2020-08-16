#include <iostream>
using namespace std;

template<typename T>
void Print(T a, T b)
{
	cout << a << ", " << b << endl;
}

int main()
{
	// Ŭ���̾�Ʈ�� �Լ� ���ø��� Ÿ���� ��������� ������ �� �ִ�.
	Print<int>(10, 20);
	Print<double>(0.123, 0.1234567);
	Print<const char*>("ABC", "Abcdde");
	return 0;
}