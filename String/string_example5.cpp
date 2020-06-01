// ����:https://blockdmask.tistory.com/338
// C++ String Ŭ���� ����5
#include <iostream>
#include <string>
using namespace std;

// begin, end �ݺ��ڸ� �̿��� ��ȸ
// copy�� �������� �� �� ���ڸ��� '\0'�� �־�����.
// �̴�, C���� char�迭���� ���ڿ��� ���� �ǹ��ϱ� �����̴�.
// compare�� ������   0
// ���������� ���̸� -1
// ���������� ���̸�  1

int main()
{
	string str1 = "BlockDMask";
	string str2 = "BlogBlogBlogBlog";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	// begin, end
	string::iterator iter;
	for (iter = str1.begin(); iter != str1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// copy
	char arr[10];
	int arrLen = str1.copy(arr, 3, 5);
	cout << "str1.copy(arr, 3, 5)" << endl;
	cout << "arrLen : " << arrLen << endl;
	arr[arrLen] = '\0'; // ���ڿ��� ���� �˷��ִ� �ι��� ���Խ�Ű��.
	cout << arr << endl << endl;

	// compare
	cout << "str1.compare(\"BlockDMask\") : " << str1.compare("BlockDMask") << endl;
	cout << "str1.compare(str2) : " << str1.compare(str2) << endl;
	cout << "str2.compare(str1) : " << str2.compare(str1) << endl;
	cout << endl;
	return 0;
}