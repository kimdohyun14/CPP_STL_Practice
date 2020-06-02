#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> list1;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	cout << "erase �׽�Ʈ 1" << endl;

	//ù ��° ������ ����
	list1.erase(list1.begin());

	// 20, 30, 40, 50 ���
	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl << "erase �׽�Ʈ 2" << endl;

	//�� ��° �����Ϳ��� ���������� �����Ѵ�.
	list<int>::iterator iterPos = list1.begin();
	++iterPos;
	list1.erase(iterPos, list1.end());

	// 20 ���
	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
}