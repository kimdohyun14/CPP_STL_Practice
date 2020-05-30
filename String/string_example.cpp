// https://pluslab.tistory.com/73
// string�� ���ؼ� �� ������ �� ���Ƽ� �����Դ�.

#include <iostream>
#include <string>
using namespace std;

void strTest1()
{
	// string�� �⺻���� ����� ��ɵ�
	cout << "strTest1()" << endl;

	string str;
	cout << "string �Է�: ";
	cin >> str;
	cout << "str : " << str << endl;
}

void strTest2()
{
	cout << "strTest2()" << endl;

	// string ���� �� �ʱ�ȭ

	string str1 = "This is string 1.";
	string str2("This is string 2.");
	string str3(str2);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
}

void strTest3()
{
	cout << "strTest3()" << endl;

	// string�� ���� �Ǵ� ���ڿ� �߰�
	string str = "Test";
	cout << "str : "<< str << endl;
	str += " Message.";
	cout << "str : " << str << endl;

	str.append(" Appended string."); // ���ڿ��� �ڿ� ������ �߰�
	cout << "str : " << str << endl;

	string str2 = str + " new message";
	cout << "str2 : " << str2 << endl;
}

void strTest4()
{
	cout << "strTest4()" << endl;

	// string�� ���� ���ϱ�
	string str = "This is Test Message.";
	cout << "str : " << str << endl;
	cout << "str.size() : " << str.size() << endl;
	cout << "str.length() : " << str.length() << endl;

	string str2 = "This";
	cout << "str2 : " << str2 << endl;
	cout << "str2.size() : " << str2.size() << endl;
	cout << "str2.length() : " << str2.length() << endl;
}

void strTest5()
{
	cout << "strTest5()" << endl;

	// char�迭(C������ string)���� string �����ϱ�
	char message[] = "This is a C style string."; // Null ���ڰ� ���Ե�

	/* C������ string�� ���� ���� ������ char�迭�� ǥ��
	   
	   ������ ���� C���� char�迭�� string�� ǥ���� ����
	   string�� �� �ڿ� \0�� �־��ֱ� ������, �׷��� ���� �迭�� string
	   ������ ��ȯ�� ����� �������� �ʴ´�.*/
	string str(message);
	cout << "char array : " << message << endl;
	cout << "char array length : " << strlen(message) << endl;
	cout << "string : " << str << endl;
	cout << "string length : " << str.length() << endl;

	// char �迭���� �ι��ڸ� �־����� ������ ������ ���� ��µ�.
	char noCstring[] = { 'N', 'O' };
	string str2(noCstring);
	cout << str2 << endl;
}

void strTest6()
{
	cout << "strTest6()" << endl;

	// string�� ���� ���� �� ��ȯ
	string* str = new string("���� ������ �޽���");
	cout << "str address : " << str << endl; // �������� �ּҰ� ���
	cout << "str : " << *str << endl;

	str->append(". �������̱� ������ append�� �̷��� ����");
	cout << "str address : " << str << endl;
	cout << "str : " << *str << endl;
	delete str;
}

void strTest7()
{
	cout << "strTest7()" << endl;

	// string�� �� �� ��ü�� �Է¹ޱ�

	/* string�� �Է¹��� �� ���Ⱑ ������ �� �ձ����� �Է¹޴´�.*/
	string str1, str2;
	cin >> str1 >> str2;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;

	// ���ۿ� '\n'�� �����ְ� �ǹǷ� �Է� ���۸� �ʱ�ȭ ���ش�.
	while (getchar() != '\n') {}

	getline(cin, str1, '\n');  // '\n'�� ���� ������ �Է��� �޵��� ����
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
}

void strTest8()
{
	cout << "strTest8()" << endl;

	// string �� Ư�� ��ġ�� ���� ��������

	/* at()�� ����ϸ� �ش� �ε����� �ִ� ���ڸ� char���·� ��ȯ�ޱ� ����
	   �̶�, �迭ó�� �ε����� 0���� �����Ѵ�.
	   �� at()�� ������ üũ�ϴ� ��ɵ� �Ѵ�.
	   
	   �迭ó�� str[4]�� ����� �� ������, ���� üũ�� ���� �ʴ´�.
	*/
	string str = "Test Message for index";

	cout << "str : " << str << endl;
	cout << "str.at(0) : " << str.at(0) << endl;
	cout << "str.at(str.length()-1) : " << str.at(str.length() - 1) << endl;

	char c = str.at(1);
	cout << "str.at(1) : " << c << endl;

	for (int i = 0; i < str.length(); i++) cout << str.at(i);
	cout << endl;
}

void strTest9()
{
	cout << "strTest9()" << endl;

	// string�� ���ڿ� ��
	string str1 = "abcd";
	string str2 = "abde";
	string str3 = "abcd";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl << endl;

	/* compare�� ����ϸ� ���ڿ��� ���� �� �ִ�. 
	   int���� ��ȯ�ϸ鼭
	   
	   -1�� ��ȯ�ϸ� ���������� �� �տ� �ִ�.
	    0�� ��ȯ�ϸ� ������ ���ڿ��̴�.
		1�� ��ȯ�ϸ� ���������� �� �ڿ� �ִ�.
    */
	int cmp = str1.compare(str2);
	cout << "str1�� str2 �� : " << cmp << endl;

	cmp = str2.compare(str1);
	cout << "str2�� str1 �� : " << cmp << endl;

	cmp = str1.compare(str3);
	cout << "str1�� str3 �� : " << cmp << endl;

	cmp = str1.compare(str2);
	if (cmp == 0) cout << "������ ���ڿ�" << endl;
	else if (cmp < 0) cout << str1 << "�� " << str2 << "���� ���������� ��" << endl;
	else cout << str1 << "�� " << str2 << "���� ���������� ��" << endl;

	if (str1 == str3) cout << "������ ���ڿ�" << endl;
	else cout << "�ٸ� ���ڿ�" << endl;

	if (str1 == str2)cout << "������ ���ڿ�" << endl;
	else cout << "�ٸ� ���ڿ�" << endl;
}

void strTest10()
{
	cout << "strTest10()" << endl;

	// string ����
	string str1 = "string 1.";
	/* =�� ���� str�� ������ �� �ִ�.
	   �̶� �����Ͱ��� ����Ǵ� ���� �ƴ϶�, ���� ����ǰ�
	   ���ο� ��ü�� ���������.
	*/
	string str2 = str1;
	str1 += " appended";
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
}

void strTest11()
{
	cout << "strTest11()" << endl;

	// string �߰��� ���ڿ� �߰� �� �˻�
	string str = "Test for strTest11";
	cout << "str : " << str << endl;

	/* find�� ���� string�� �ش� ���ڿ��� �ִ��� Ȯ���� �� �ִ�.
	   ���� �ش� ���ڿ��� ���� ��� string::npos�� ��ȯ�Ѵ�.
	   ���ڿ��� �ִ� ���� �ش� ���ڿ��� �����ϴ� �ε����� ��ȯ
	   
	   find�� ���ڷ� ã�� ���ڿ��� �ִ� ��� ���ڿ��� ���ۺ��� �˻�
	   �ι�° ���ڷ� �˻��� ������ �ε��� ���� ������ ���� �ִ�.
	*/
	int pos;
	if ((pos = str.find("for")) != string::npos)
	{
		cout << "str.find(\"for\") : " << pos << endl;
		str.insert(pos, "message ");
	}

	cout << "str : " << str << endl;

	str = "abc here def here g here hijkl here";
	cout << "str : " << str << endl;
	pos = 0;
	while ((pos = str.find("here", pos + 1)) != string::npos)
	{
		cout << "pos : " << pos << endl;
	}
}

void strTest12()
{
	cout << "strTest12()" << endl;

	string str = "Test message for strTest12.";
	cout << "str : " << str << endl;

	/* substring�� ���ڿ� ������ [pos, pos + count) �κй��ڿ��� ��ȯ�Ѵ�.
	   
	   �Ʒ��� �κ��� message�� �˻��ؼ� message ������ ���ڿ��� �����ϰ�
	   �̸� ����ϵ��� �Ѵ�.
	*/
	int pos;
	if ((pos = str.find("message")) != string::npos)
	{
		cout << "str.length() : " << str.length() << endl;
		cout << "pos : " << pos << endl;
		cout << "str.length() - pos : " << str.length() - pos << endl;
		string str2 = str.substr(pos, str.length() - pos);
		cout << "str2 : " << str2 << endl;
	}
}

void strTest13()
{
	cout << "strTest13()" << endl;

	// string�� ���� �� ��ȯ

	/* C������ ���� atoi, itoa, atof, ftoa ���� ���������,
	   C++������ string�� �����Ƿ� stoi, stof���� ������ָ� �ȴ�.
	   
	   Ư���� ���� ���ڸ� ���ڿ��� ��ȯ�� ���� ��� to_string�� ������ָ� �ȴ�.
	*/
	string str = "1234";
	int num = stoi(str);
	cout << "str : " << str << endl;
	cout << "num : " << num << endl << endl;

	num = 3456;
	str = to_string(num);
	cout << "str : " << str << endl;
	cout << "num : " << num << endl << endl;

	str = "123.32";
	float numf = stof(str);
	cout << "str : " << str << endl;
	cout << "numf : " << numf << endl << endl;

	numf = 555.12;
	str = to_string(numf);
	cout << "str : " << str << endl;
	cout << "numf : " << numf << endl << endl;
}

int main()
{
	//strTest1();
	//strTest2();
	//strTest3();
	//strTest4();
	//strTest5();
	//strTest6();
	//strTest7();
	//strTest8();
	//strTest9();
	//strTest10();
	//strTest11();
	strTest12();
	//strTest13();
	return 0;
}