// https://modoocode.com/224
#include <iostream>
#include <functional>
#include <string>
#include <unordered_set>

template<typename K>
void print_unordered_set(const std::unordered_set<K>& s)
{
	for (const auto& elem : s)
	{
		std::cout << elem << std::endl;
	}
}

template<typename K>
void is_exist(std::unordered_set<K>& s, K key)
{
	auto itr = s.find(key);
	if (itr != s.end()) std::cout << key << " �� ����!" << std::endl;
	else std::cout << key << " �� ����" << std::endl;
}

class Todo
{
	int priority;
	std::string job_desc;

public:
	Todo(int priority, std::string job_desc)
		:priority(priority), job_desc(job_desc){ }

	bool operator==(const Todo& t) const
	{
		if (priority == t.priority && job_desc == t.job_desc) return true;
		else return false;
	}

	friend std::ostream& operator<<(std::ostream& o, const Todo& t);
	friend struct std::hash<Todo>;
};

// Todo �ؽ� �Լ��� ���� �Լ���ü(Functor) �� �����.
namespace std
{
	template<>
	struct hash<Todo>
	{
		size_t operator()(const Todo& t) const
		{
			hash<string> hash_func;

			return t.priority ^ (hash_func(t.job_desc));
		}
	};
}

std::ostream& operator<<(std::ostream& o, const Todo& t)
{
	o << "[ �߿䵵 : " << t.priority << " ] " << t.job_desc;
	return o;
}

int main()
{
	std::unordered_set<Todo> todos;

	todos.insert(Todo(1, "�� �ϱ�"));
	todos.insert(Todo(2, "���� ���� �ϱ�"));
	todos.insert(Todo(1, "���α׷��� ������Ʈ"));
	todos.insert(Todo(3, "ģ�� ������"));
	todos.insert(Todo(2, "��ȭ ����"));
	print_unordered_set(todos);
	std::cout << "---------------------------" << std::endl;
	return 0;
}