// ����:https://blockdmask.tistory.com/338
// C++ String Ŭ���� ����2
#include <iostream>
#include <string>
using namespace std;

// string���� size�� length�� ����
// string���� capacity�� ��������
// resize(), shrink_to_fit(), clear() �Լ��� ���ؼ�

int main()
{
	string str1 = "BlogBlogBlogBlog";

	cout << "������ str1�� ���ڿ���" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.resize(4);
	cout << "str1.resize(4)�� �� �����" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.shrink_to_fit();
	cout << "str1.shrink_to_fit()�� �� �����" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.clear();
	cout << "str1.clear()�� �� �����" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	return 0;
}