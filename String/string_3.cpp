// ����:https://blockdmask.tistory.com/338
// C++ String Ŭ���� ����3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "BlockDMask";
	string str2 = "BlogBlogBlogBlog";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	// index�� 5��°�� ������ ������ ���ڿ��� ��ȯ
	cout << "str1.substr(5) : " << str1.substr(5) << endl;
	// index�� 5��°�� ������ 1 ������ ���ڿ��� ��ȯ
	cout << "str1.substr(5,1) : " << str1.substr(5, 1) << endl;
	// str1�� 5��°�� �ڸ����� 2���� ���ڿ��� str2���ڿ� ��ü�� ��ü
	cout << "str1.replace(5, 2, str2) : " << str1.replace(5, 2, str2) << endl;
	cout << endl;

	string str3 = "C++ example";
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << endl;

	// str2�� str3�� ������ ���� �ٲ� (���� ��ȯ�̹Ƿ� ���� �������� x)
	cout << "swap(str2, str3)" << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	return 0;
}