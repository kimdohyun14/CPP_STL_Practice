#include <iostream>
#include <functional> // less<> ���
using namespace std;

typedef less<int> Less;

int main()
{
	Less l;

	cout << l(10, 20) << endl; // ��ü�� �Ͻ��� �Լ� ȣ��
	cout << l(20, 10) << endl;

	cout << l.operator()(10, 20) << endl; // ��ü�� ����� �Լ� ȣ��
	cout << endl;

	cout << Less()(10, 20) << endl;
	cout << Less()(20, 10) << endl;
	cout << Less().operator()(10, 20) << endl;
	return 0;
}