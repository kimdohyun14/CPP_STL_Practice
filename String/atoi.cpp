// ���� : https://blockdmask.tistory.com/331
#include <iostream>
#include <cstdlib>
using namespace std;

// ���ڿ��� ����(����, �Ǽ�)�� ��ȯ�ϴ� ���
// atoi = char* -> int
// atof = char* -> double
// atol = char* -> long int

int main()
{
	int num = 0;
	char str1[] = "2020";

	printf("char* = %s, sizeof(char*) = %d\n", str1, sizeof(str1));
	num = atoi(str1);
	printf("int = %d, sizeof(int) = %d\n\n", num, sizeof(num));

	double num2 = 0;
	char str2[] = "10.57";

	printf("char* = %s, sizeof(char*) = %d\n", str2, sizeof(str2));
	num2 = atof(str2);
	printf("int = %f, sizeof(double) = %d\n\n", num2, sizeof(num2));

	// �׳� ������ ���� ������ ���� �Ǻ�����.
	char ch1 = 'A';
	char ch2 = '0';

	if (isdigit(ch1))
		cout << "ch1�� ���ڴ� �����Դϴ�." << endl;
	else
		cout << "ch1�� ���ڴ� ���ڰ� �ƴմϴ�." << endl;

	if (isdigit(ch2))
		cout << "ch2�� ���ڴ� �����Դϴ�." << endl;
	else
		cout << "ch2�� ���ڴ� ���ڰ� �ƴմϴ�." << endl;

	// ������
	if (isalpha(ch1))
		cout << "ch1�� ���ڴ� ���ĺ��Դϴ�." << endl;
	else
		cout << "ch1�� ���ڴ� ���ĺ��� �ƴմϴ�." << endl;


	return 0;
}
