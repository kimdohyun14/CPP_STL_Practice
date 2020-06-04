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

template<typename K, typename V>
void search_and_print(std::map<K, V>& m, K key)
{
	auto itr = m.find(key);
	if (itr != m.end())
	{
		std::cout << key << " --> " << itr->second << std::endl;
	}
	else
	{
		std::cout << key << "��(��) ��Ͽ� �����ϴ�." << std::endl;
	}
}

int main()
{
	std::map<std::string, double> pitcher_list;

	pitcher_list["����ȯ"] = 3.58;

	print_map(pitcher_list);
	std::cout << "--------------------------------" << std::endl;

	search_and_print(pitcher_list, std::string("����ȯ"));
	search_and_print(pitcher_list, std::string("������")); // find �Լ��� ���ؼ� �ʿ� �ش��ϴ� Ű�� ���ٸ�?
	return 0;
}