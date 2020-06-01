// https://modoocode.com/307
#include <iostream>
#include <string>

/* append : ���ڿ� ���� ���ڵ��� �����δ�. */

int main()
{
	std::basic_string<char> str = "string";
	const char* cptr = "C-string";     // NULL ���� ���ԵǾ� �ִ�.
	const char carr[] = "Two and one"; // NULL ���� ���ԵǾ� �ִ�.

	std::string output;

	// 1) ���� '*'�� 3�� �߰�
	output.append(3, '*');
	std::cout << "1) " << output << '\n';

	// 2) ��ü ���ڿ� str �� �߰�
	output.append(str);
	std::cout << "2) " << output << '\n';

	// 3) ���ڿ� str�� �Ϻκ��� �߰��Ѵ�.
	output.append(str, 3, 3);
	std::cout << "3) " << output << '\n';

	// 4) �� ���� ���ڿ��� �Ϻκ��� �߰��Ѵ�.
	// append �� *this�� �����ϱ� ������ append �� ������ �̾ ȣ���� �� �ִ�.
	output.append(1, ' ').append(carr, 4);
	std::cout << "4) " << output << '\n';

	// 5) �� ���� ���ڿ��� �߰��Ѵ�.
	output.append(cptr);
	std::cout << "5) " << output << '\n';

	// 6) ���� ���� ���ڿ��� �߰��Ѵ�.
	output.append(&carr[3], std::end(carr));
	std::cout << "6) " << output << '\n';

	// 7) �ʱ�ȭ�� ����Ʈ ���� ���ڿ��� �߰��Ѵ�.
	output.append({ ' ', 'l', 'i','s','t' });
	std::cout << "7) " << output << '\n';
	return 0;
}