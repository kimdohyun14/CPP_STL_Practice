#include <iostream>
#include <vector>
using namespace std;

// vector - sequence �����̳�
// �ڵ����� �޸𸮰� �Ҵ�Ǵ� �迭 (���� �迭)
// �� �ڿ��� ���� ���԰� ���� ���� O(1)
// ������ ���� ���� O(1) ����
// �߰��� ���Ҹ� ����, ���� �� O(N) - �迭 ����̱� ����

template<typename T>
void Print(const vector<T>& v)
{
	for (const auto elem : v)
	{
		cout << elem << ' ';
	}
	cout << endl;
}


struct Node
{
	int data;
	Node* next;
};

int main()
{
	/* �پ��� ���� �κ� */
	vector<int> vec1;
	vector<double> vec2;
	vector<Node> vec3;

	// ������ �ʱ� ũ�⸦ 5�� ����, �� �� ��ҵ��� 0���� �ʱ�ȭ
	vector<int> vec4(5);
	// ������ �ʱ� ũ�⸦ 5�� ����, �� �� ��ҵ��� 1���� �ʱ�ȭ
	vector<int> vec5(5, 1);

	// n x m �� 2���� ���͸� �����ϰ� 0���� �ʱ�ȭ
	int n = 5, m = 6;
	vector<vector<int> > vec6(n, vector<int>(m, 0));

	// ����
	vec1.push_back(10);

	// ����
	vec1.pop_back();

	cout << "vec1.size() : " << vec1.size() << endl;

	// ũ�� �缳��
	vec1.resize(10);
	cout << "vec1.size() : " << vec1.size() << endl;

	// [a, b) �ּ� ������ �ش��ϴ� ���� ����
	vec1.erase(vec1.begin(), vec1.end());
	cout << "vec1.size() : " << vec1.size() << endl;

	// �̷� �͵� ����
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = vector<int>(v1.begin() + 2, v1.end());
	Print(v2);

	return 0;
}
