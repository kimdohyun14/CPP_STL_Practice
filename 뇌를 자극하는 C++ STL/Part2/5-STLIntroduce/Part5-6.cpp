#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	list<int> lt;

	for(int i = 10; i > 5; --i)
	{
		v.push_back(i);
		lt.push_back(i);
	}

	// sort �˰����� ���� ���� �ݺ��ڸ� �䱸�ϹǷ�
	// list �� ���� ����� �ݺ��ڴ� sort ���Ұ� 
	sort(v.begin(), v.end());
	//sort(lt.begin(), lt.end());
	
	return 0;
}