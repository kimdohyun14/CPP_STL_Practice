#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

// remove
// �����̳ʿ� �ִ� Ư�� ������ �����ϰ� ���� �� ���
// ���� �� ũ�Ⱑ ������ �ʴ´ٴ� ���� �������.
// ������ ��¥ ������ ���ؼ��� erase()�� ����ؾ� �Ѵ�.

int main()
{
	vector<int> vec1;
	vec1.push_back(10); vec1.push_back(20); vec1.push_back(20);
	vec1.push_back(40); vec1.push_back(50); vec1.push_back(30);

	vector<int>::iterator iterPos;

	cout << "vec1�� �ִ� ��� ������ ���" << endl;
	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	cout << "vec1���� 20 remove" << endl; // Ư�� �� 20�� ����
	vector<int>::iterator RemovePos = remove(vec1.begin(), vec1.end(), 20);

	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	cout << "vec1���� 20 remove ���� ��� �����ʴ� ���� ���� ����" << endl;
	while (RemovePos != vec1.end())
	{
		// ���� ������ �ݺ��� ��ġ�� ���� �� �����ϰ� �������ش�.
		RemovePos = vec1.erase(RemovePos);
	}

	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	return 0;

}