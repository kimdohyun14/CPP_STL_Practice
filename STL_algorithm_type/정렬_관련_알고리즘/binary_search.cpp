#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// binary_search
// �̹� ���� �Ǿ� �ִ� �� �߿��� Ư�� �����Ͱ� ���� ������ �ִ��� �����ϴ� �˰���
// �� �˰����� ����� ������ �� ���� �����ϰ� �������.

int main()
{
	vector<int> vec1;
	vec1.push_back(10); vec1.push_back(20); vec1.push_back(15);
	vec1.push_back(7); vec1.push_back(100); vec1.push_back(40);
	vec1.push_back(11); vec1.push_back(60); vec1.push_back(140);

	sort(vec1.begin(), vec1.end());

	bool bFind = binary_search(vec1.begin(), vec1.begin() + 5, 15);
	if (false == bFind)
		cout << "15�� ã�� ���߽��ϴ�." << endl;
	else
		cout << "15�� ã�ҽ��ϴ�." << endl;

	return 0;
}