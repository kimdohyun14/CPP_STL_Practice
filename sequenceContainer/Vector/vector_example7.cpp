// https://modoocode.com/174
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	// range-based for ��
	// for(/* ���Ҹ� �޴� ���� ���� */ : /* �����̳� */)
	for (int elem : vec)
	{
		std::cout << "���� : " << elem << std::endl;
	}

	return 0;
}