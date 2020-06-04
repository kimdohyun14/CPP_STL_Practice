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

	// �̹� ���� Ű�� ���ҷ� ��� �ִٸ� ���߿� ���� insert�� ���õȴ�.
	pitcher_list.insert(std::pair<std::string, double>("�ڼ���", 2.23));
	pitcher_list.insert(std::pair<std::string, double>("�ڼ���", 2.93));

	print_map(pitcher_list);

	std::cout << "�ڼ��� �������? : " << pitcher_list["�ڼ���"] << std::endl;
	return 0;
}