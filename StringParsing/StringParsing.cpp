#include <iostream>
#include <cstring>
#include <vector>
#include <string>
//���� https://dpdpwl.tistory.com/65
int main() {
	char str1[] = "a b c d e f";
	char* tok1 = strtok(str1, " ");
	// ������ �������� �Ľ��غ���
	while (tok1 != NULL) {
		std::cout << tok1 << std::endl;
		tok1 = strtok(NULL, " ");
	}
	
	char str2[] = "��,��,��,��,��,��";
	char* tok2 = strtok(str2, ",");
	// �޸��� �������� �Ľ��غ���
	while (tok2 != NULL) {
		std::cout << tok2 << std::endl;
		tok2 = strtok(NULL, ",");
	}

	char str3[] = "1,2-3;4 5";
	char* tok3 = strtok(str3, ",-; ");
	// , - ; ������ �������� �Ľ��غ���
	while (tok3 != NULL) {
		std::cout << tok3 << std::endl;
		tok3 = strtok(NULL, ",-; ");
	}

	// �����ؼ� �Ľ��� �κ��� ���Ϳ� �����غ���
	char str4[] = "a b,c|d+e*f";
	std::vector<std::string> v;
	char* tok4 = std::strtok(str4, " ,|+*");
	while (tok4 != NULL) {
		std::cout << tok4 << std::endl;
		v.push_back(tok4);
		tok4 = std::strtok(NULL, " ,|+*");
	}

	std::cout << "vector�� ������ �� �Ǿ� �ִ��� Ȯ��!" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
	

	return 0;
}