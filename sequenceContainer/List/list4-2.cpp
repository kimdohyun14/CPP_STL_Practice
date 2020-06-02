#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> list1;

	list1.push_back(20);
	list1.push_back(30);

	cout << "���� �׽�Ʈ 1" << endl;

	//ù ��° ��ġ�� �����Ѵ�.
	list<int>::iterator iterInsertPos = list1.begin();
	list1.insert(iterInsertPos, 100);

	//100, 20, 30 ������ ��µȴ�.
	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl << "���� �׽�Ʈ 2" << endl;

	//�� ��° ��ġ�� 200�� 2�� �����Ѵ�.
	iterInsertPos = list1.begin();
	++iterInsertPos;
	list1.insert(iterInsertPos, 2, 200);

	//100, 200, 200, 20, 30 ������ ��µȴ�.
	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl << "���� �׽�Ʈ 3" << endl;

	list<int> list2;
	list2.push_back(1000);
	list2.push_back(2000);
	list2.push_back(3000);

	//�� ��° ��ġ�� list2�� ��� �����͸� �����Ѵ�.
	iterInsertPos = list1.begin();
	list1.insert(++iterInsertPos, list2.begin(), list2.end());

	//100, 1000, 2000, 3000, 200, 200, 20, 30 ������ ��µȴ�.
	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
}