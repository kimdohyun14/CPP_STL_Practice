//https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	// ����
	string str = "";
	char cstr[] = "";

	// ���ڿ��� ����
	cout << "���ڿ��� ����" << endl;
	str = "abcde";
	cout << "str.size() : " << str.size() << endl;
	cout << "str.length() : " << str.length() << endl;
	cout << "str.empty() : " << str.empty() << endl << endl;

	// ���ڿ� ��
	cout << "���ڿ��� ��" << endl;
	string str1 = "string";
	string str2 = "string";
	if (str1 == str2)
		cout << "����" << endl;
	else
		cout << "�ٸ�" << endl;

	string str3 = "strinf";
	// ���ڿ��� ������ 1, �ƴϸ� 0
	if (str1 == str3)
		cout << "����" << endl;
	else
		cout << "�ٸ�" << endl;

	// str3�� �� ũ�� 1, �ƴϸ� 0
	if (str1 < str3)
		cout << "str1�� str3���� ���������� ��" << endl;
	else
		cout << "str1�� str3���� ���������� ��" << endl;

	cout << "(str1 < str3) => " << (str1 < str3) << endl << endl;

	// ���ڿ� ����
	cout << "���ڿ��� ����" << endl;
	string str4 = "Hello";
	cout << "str4 : " << str4 << endl;

	str4.push_back('!'); // string�� �ƴ� char���̴�.
	cout << "str4 : " << str4 << endl;

	string str5 = "e";
	str5.insert(0, "H");
	cout << "str5 -> " << str5 << endl;
	str5.insert(2, "o");
	cout << "str5 -> " << str5 << endl;
	str5.insert(2, 2, 'l').append("!");
	cout << "str5 -> " << str5 << endl << endl;

	// ����ȯ
	cout << "���ڿ��� ����ȯ" << endl;
	// ���� -> ����
	string str6 = "15 moneys";
	int num = stoi(str6);
	cout << "num : " << num << endl;

	// �̰� �ȵ�.
	string str7 = "number of 15";
	//num = stoi(str7);

	// ���� -> ���ڿ�
	str6 = to_string(num);
	cout << "str6 : " << str6 << endl << endl;

	// sstream
	// istringstream
	// char�� ��쿡�� strtok�� ����� �� ������,
	// string�� ����ϴ� ���, const char* �� ��ȯ�ϹǷ� ���簡 �ʿ�
	cout << "sstream ��� ����" << endl;
	string inputStr;
	getline(cin, inputStr, '\n');

	istringstream iss(inputStr);
	string token;

	// Hello World!�� �Է��ϸ�
    // Hello
    // World!
	while (getline(iss, token, ' '))
	{
		cout << "token : " << token << endl;
	}
	cout << endl;

	// ���ڿ� �ɰ���
	// https://word.tistory.com/24
	/*
	* vector<string>���� input���� �Ʒ��� ���� ���´ٸ�
	[0] "1 Kim 89"
	[1] "2 Park 52"
	[2] "3 Moon 100"
	[3] "4 Jun 95"

	�̷��� input���� �� ��ȣ/�̸�/������ ���� ������ �����ؾ��� �� ���?
	*/
	cout << "���ڿ��� �ɰ�����" << endl;
	vector<string> input;
	input.push_back("1 Kim 89");
	input.push_back("2 Park 52");
	input.push_back("1 Moon 100");
	input.push_back("1 Jun 95");

	for (int i = 0; i < input.size(); ++i)
	{
		int num, score;
		string name;

		stringstream ss;
		ss.str(input[i]); // ����
		
		ss >> num;
		ss >> name;
		ss >> score;

		cout << num << " " << name << " " << score << endl;
		// ���� �ʿ��� �ڷᱸ���� �����Ͽ� Ȱ���Ѵ�.
	}

	cout << "stringstream �� �߰� ����" << endl;
	// stringstream�� �־��� ���ڿ����� �ʿ��� ������ ���� �� �����ϰ� ���
	float number;
	stringstream stream;
	
	string str8 = "25 1 3 .235 \n1111111\n222222";
	stream.str(str8);
	// �� �̻� number�� �ڷ����� �´� ������ ���� ������
	// ��� ��Ʈ������ number���� �ڷḦ ����/�����ϴ� ��
	while (stream >> number)
		cout << "number : " << number << endl;

	cout << endl;
	// �ٽ� �����غ���.
	string str9 = "23 259 .326 22 a 15";
	string str10 = "1 263avj 3135 baij af9i39a fklk30";

	stringstream ss(str9);
	string k;
	while (ss >> k)
		cout << k << endl;

	cout << endl;

	ss.clear(); // flag bit���� �ʱ�ȭ

	ss.str(str10);
	while (ss >> k)
		cout << k << endl;

	return 0;
}