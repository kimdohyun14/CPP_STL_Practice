#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "����: " << n << endl;
}

int main()
{
	// void Print(int n)�� �Լ� ������ ����
	void(*pf)(int);
	pf = Print;

	Print(10); // �Լ� ȣ��
	pf(10);    // �����͸� �̿��� �Լ� ȣ��, ù ��° ���
	(*pf)(10); // �����͸� �̿��� �Լ� ȣ��, �� ��° ���

	cout << endl;
	// �ּҰ� �˾ƺ���
	cout << Print << endl;
	cout << pf << endl;
	cout << *pf << endl;
	return 0;
}