// https://modoocode.com/241
#include <iostream>
#include <string>

void print(std::string::size_type n, std::string const& s)
{
	if (n == std::string::npos) std::cout << "not found\n";
	else std::cout << "found : " << s.substr(n) << '\n';
}

int main()
{
	std::string::size_type n;
	std::string const s = "This is a string";

	// s�� ó������ ã�´�.
	n = s.find("is");
	print(n, s);

	// s�� 5��° ���ں��� ã�´�.
	n = s.find("is", 5);
	print(n, s);

	// ���� ���� (a) �� ã�´�.
	n = s.find('a');
	print(n, s);

	// ���� ���� (q) �� ã�´�.
	n = s.find('q');
	print(n, s);

	return 0;
}