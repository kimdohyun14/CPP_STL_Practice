#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;
// replace
// �����̳��� Ư�� ���� �ٸ� ������ �ٲٰ� ���� ��

int main()
{
	vector<int> vec1;
	vec1.push_back(10); vec1.push_back(20); vec1.push_back(20);
	vec1.push_back(40); vec1.push_back(50); vec1.push_back(30);

	vector<int>::iterator iterPos;

	cout << "vec1�� �ִ� ��� ������ ���" << endl;
	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << " " << endl;
	cout << endl;

	cout << "vec1�� �� ��° ��Һ��� 20�� 200���� ����" << endl;
	replace(vec1.begin() + 2, vec1.end(), 20, 200);

	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << " " << endl;
	cout << endl;

	return 0;
}