// https://modoocode.com/174
#include <iostream>
#include <vector>

template<typename T>
void print_vector(std::vector<T>& vec)
{
	std::cout << "[ ";
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << " ";
	}
	std::cout << "]";
}

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(20);

	std::cout << "ó�� ���� ����" << std::endl;
	print_vector(vec);

	std::vector<int>::iterator itr = vec.begin();

	for (std::vector<int>::size_type i = 0; i != vec.size(); i++)
	{
		if (vec[i] == 20)
		{
			vec.erase(vec.begin() + i);
			i--;
		}
	}

	std::cout << "���� 20�� ���Ҹ� �����!" << std::endl;
	print_vector(vec);
	return 0;
}