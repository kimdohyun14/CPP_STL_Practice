// https://modoocode.com/224
#include <iostream>
#include <set>
#include <string>

template<typename T>
void print_set(std::set<T>& s)
{
	for (const auto& elem : s)
	{
		std::cout << elem << ' ' << std::endl;
	}
}

class Todo
{
	int priority; // �߿䵵
	std::string job_desc;

public:
	Todo(int priority, std::string job_desc)
		:priority(priority), job_desc(job_desc) { }

	bool operator<(const Todo& t) const
	{
		if (priority == t.priority)
		{
			return job_desc < t.job_desc;
		}
		return priority > t.priority;
	}

	friend std::ostream& operator<<(std::ostream& o, const Todo& td);
};

std::ostream& operator<<(std::ostream& o, const Todo& td)
{
	o << "[�߿䵵: " << td.priority << "] " << td.job_desc;
	return o;
}

int main()
{
	std::set<Todo> todos;

	todos.insert(Todo(1, "�� �ϱ�"));
	todos.insert(Todo(2, "���� ���� �ϱ�"));
	todos.insert(Todo(1, "���α׷��� ������Ʈ"));
	todos.insert(Todo(3, "ģ�� ������"));
	todos.insert(Todo(2, "��ȭ ����"));

	print_set(todos);

	std::cout << "--------------------------" << std::endl;
	std::cout << "������ ���´ٸ�!" << std::endl;
	todos.erase(todos.find(Todo(2, "���� ���� �ϱ�")));
	print_set(todos);
	return 0;
}