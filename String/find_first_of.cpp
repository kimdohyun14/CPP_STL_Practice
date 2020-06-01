// https://modoocode.com/249
#include <iostream>
#include <string>

/* find_first_of : �־��� ���ڿ����� �Լ��� ���ڷ� ���޵� ���ڿ��� ���ڵ� �� ù ��°�� ��Ÿ���� ������ ��ġ�� ����
   �����ϸ�, �ϳ��� ���ڰ� �´� ���� �ִٸ� �� ��ġ�� ��ȯ�Ѵٴ� ���̴�. */

int main()
{
	// �˻� ��� ���ڿ�
	std::string str = std::string("Hello World!");

	// � ���ڵ��� ã�ƺ� ������?
	std::string search_str = std::string("o");
	const char* search_cstr = "Good Bye!";
	const char* search_cstr2 = "BBBBBBW";

	std::cout << str.find_first_of(search_str) << '\n';
	std::cout << str.find_first_of(search_str, 5) << '\n';
	std::cout << str.find_first_of(search_cstr) << '\n';
	std::cout << str.find_first_of(search_cstr2) << '\n';
	std::cout << str.find_first_of(search_cstr2, 6) << '\n'; // str[6, str.size()) ���� ã�´�.
	std::cout << str.find_first_of(search_cstr, 0, 1) << '\n'; // [0, 0 + 1) ���� �ȿ��� ã�´�. "G" => npos�� ��ȯ
	std::cout << str.find_first_of(search_cstr, 0, 2) << '\n'; // [0, 0 + 2) ���� �ȿ��� ã�´�. "Go"
	// 'x' �� Hello World �� �����Ƿ� npos �� ���ϵȴ�.
	std::cout << str.find_first_of('x') << '\n';
	return 0;
}