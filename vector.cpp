#include <iostream>
#include <vector>
using namespace std;

// vector
// ���� �迭, ���̸� ������ �� �ִ� �迭
/*
vector<vector<int>> v; 2���� ����
v.push_back(n);        data �߰�
v.pop_back():          data ����
v.clear();             ���� �ʱ�ȭ
v.size();              ������ ũ��
v.empty();             ����ִٸ� true
v.front();             ������ ù ��° ����
v.back();              ������ ������ ����
v.insert(v.begin(), 5, 0);  ������ ù ��° ���� �տ� 0�� 5�� ����
v.erase(v.begin() + 2);     ������ ù ��° ���ҿ��� 2��ŭ ������ ������ ���� ����
*/

int main()
{
	vector<int> v = { 1,2,3,4,5 };

	// range-based for statement ���� ��� for��
	for (int elem : v)
	{
		cout << elem << ' ';
	}
	cout << endl;

	// iterator ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}