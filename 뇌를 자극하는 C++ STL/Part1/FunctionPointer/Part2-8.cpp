#include <iostream>
using namespace std;

// server
// �迭�� ��� ���ҿ� �ݺ����� �۾��� �����ϰ� �߻�ȭ��(��ü���� �۾��� ����)
void For_each(int* begin, int* end, void(*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // Ŭ���̾�Ʈ �Լ� ȣ��(callback)
	}
}

// client

// ������ �̿��� ���� ���
void Print1(int n)
{
	cout << n << ' ';
}

// �� ���Ҹ� �����ؼ� ���
void Print2(int n)
{
	cout << n * n << ' ';
}

// ���ڿ��� endl�� �̿��� ���Ҹ� ���
void Print3(int n)
{
	cout << "���� : " << n << endl;
}

int main()
{
	int arr[5] = { 10,20,30,40,50 };

	For_each(arr, arr + 5, Print1); // Print1() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print2); // Print2() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print3); // Print3() �ݹ� �Լ��� �ּҸ� ����
	return 0;
}