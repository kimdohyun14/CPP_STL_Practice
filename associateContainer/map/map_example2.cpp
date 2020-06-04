// https://modoocode.com/224
#include <iostream>
#include <map>
#include <string>

template<typename K, typename V>
void print_map(const std::map<K, V>& m)
{
	for (const auto& kv : m)
	{
		std::cout << kv.first << " " << kv.second << std::endl;
	}
}

int main()
{
	std::map<std::string, double> pitcher_list;

	pitcher_list["����ȯ"] = 3.58;
	std::cout << "������ �������? : " << pitcher_list["������"] << std::endl;

	std::cout << "----------------------------" << std::endl;
	print_map(pitcher_list);
	return 0;
}