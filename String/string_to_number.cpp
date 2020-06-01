//https://modoocode.com/296
#include <iostream>
#include <string>

/* string Ȥ�� wstring ���ڿ��� ��ȣ �ִ� Ȥ�� ���� ������ ��ȯ�� ���� �����Ѵ�. */

int main()
{
	std::string str1 = "45";
	std::string str2 = "3.14159";
	std::string str3 = "31337 with words";
	std::string str4 = "words and 2";

	int myint1 = std::stoi(str1);
	int myint2 = std::stoi(str2);

	// �� ��� �ؼ��� �� �ִ� ���� ��ġ���� �о���δ�.
	int myint3 = std::stoi(str3);

	// �Ʒ��� ��� std::invalid_argument �� ������.
	//int myint4 = std::stoi(str4);

	std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
	std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
	std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
	return 0;
}