// ����:https://blockdmask.tistory.com/338
// C++ String Ŭ���� ����1
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ���� 3���� ���
	string str1 = "BlockDMask";
	string str2("BlogBlogBlogBlog");
	string str3(str1);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl << endl;

	// �� �ڿ� ���� �߰�
	str1.push_back('1');
	cout << "str1.push_back('1') : " << str1 << endl;
	str1.pop_back();
	// �� �ڿ� ���� ����
	cout << "str1.pop_back() : " << str1 << endl;
	str1.pop_back();
	cout << "str1.pop_back() : " << str1 << endl << endl;

	// operator+ ������ �����ε� (string���� ���ϴ� ���)
	str1 += str2;
	cout << "str1 += str2 :  " << str1 << endl;
	return 0;
}