// https://modoocode.com/297
#include <algorithm>
#include <cassert>
#include <cstring>
#include <string>
#include <iostream>

/* ���ڿ� ��ü�� ����� ���ڿ���� ���� ������ ��� �ִ� �� ���� ���� �迭�� ����Ű�� �����͸� �����Ѵ�.*/

int main()
{
	std::string const s("Emplary");
	std::cout << "s : " << s << '\n';
	std::cout << "s.c_str() : " << s.c_str() << '\n';
	std::cout << "s length :  : " << s.length() << '\n';
	std::cout << "s.c_str() length :  : " << strlen(s.c_str()) << '\n';
	assert(s.size() == std::strlen(s.c_str()));
	assert(std::equal(s.begin(), s.end(), s.c_str()));
	assert(std::equal(s.c_str(), s.c_str() + s.size(), s.begin()));
	assert(0 == *(s.c_str() + s.size())); // ���� �ּҹ����� s.size()�� ���ָ� NULL ���ڸ� ����Ű�µ� �װ��� *������ �ϸ�
	
	return 0;
}