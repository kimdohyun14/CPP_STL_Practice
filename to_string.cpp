// ���� : https://blockdmask.tistory.com/334
#include <iostream>
#include <string>
using namespace std;


// to_string
// ���� Ÿ���� �����͸� �����ϰ� ��Ʈ�� Ÿ������ ����
// �Լ� �����ε����� �����Ǿ� ����

int main()
{
	int n1 = 10;
	float n2 = 24.5f;
	double n3 = 43.12;

	string str1 = to_string(n1);
	cout << "to_string(n1) : " << str1 << endl;

	string str2 = to_string(n2);
	cout << "to_string(n2) : " << str2 << endl;

	string str3 = to_string(n3);
	cout << "to_string(n3) : " << str3 << endl;
	
	return 0;
}