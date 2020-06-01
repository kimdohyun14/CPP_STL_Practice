// https://modoocode.com/250
#include <iostream>
#include <string>

/* replace : ���ڿ��� �Ϻθ� �ٸ� ���ڿ��� ġȯ�Ѵ�. */

int main()
{
	std::string base = "this is a test string.";
	std::string str2 = "n example";
	std::string str3 = "sample phrase";
	std::string str4 = "useful.";

	std::string str = base;    // "this is a test string."
	std::cout << "str : " << str << '\n';

	// str���� index 9���� 5���� ���ڿ��� str2�� ġȯ�Ѵ�.
	str.replace(9, 5, str2);   // "this is an example string."
	std::cout << "str : " << str << '\n';

	// str���� index 19���� 6���� ���ڿ��� str3���� index 7���� 6���� ���ڿ��� ġȯ�Ѵ�.
	str.replace(19, 6, str3, 7, 6); // "this is an example phrase." 
	std::cout << "str : " << str << '\n';

	// str���� index 8���� 10���� ���ڿ��� "just a"�� ġȯ�Ѵ�.
	str.replace(8, 10, "just a");  // "this is just a phrase."
	std::cout << "str : " << str << '\n';

	// str���� index 8���� 6���� ���ڿ��� "a shorty"���� 7���� ���̸�ŭ�� ġȯ�Ѵ�.
	str.replace(8, 6, "a shorty", 7); // "this is a short phrase."
	std::cout << "str : " << str << '\n';

	// str���� index 22���� 1���� ���� '.'�� '!' 3���� ġȯ�Ѵ�.
	str.replace(22, 1, 3, '!'); //"this is a short phrase!!!"
	std::cout << "str : " << str << '\n';

	str.replace(str.begin(), str.end() - 3, str3); // "sample phrase!!!"
	std::cout << "str : " << str << '\n';

	str.replace(str.begin(), str.begin() + 6, "replace");
	std::cout << "str : " << str << '\n'; // "replace phrase!!!"

	str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);
	std::cout << "str : " << str << '\n'; // "replace is cool!!!"

	str.replace(str.begin() + 12, str.end() - 4, 4, 'o');
	std::cout << "str : " << str << '\n'; // "replace is cooool!!!"

	str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());
	std::cout << "str : " << str << '\n'; // " replace is useful."
	return 0;
}