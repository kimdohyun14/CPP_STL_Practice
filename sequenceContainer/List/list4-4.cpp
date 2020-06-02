#include <iostream>
#include <list>
using namespace std;

struct Item {
	Item(int itemCd, int buyMoney) {
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

	int ItemCd; //������ �ڵ�
	int BuyMoney; //�Ǹ� �ݾ�
};

//remove�� ����
void main() {

	list<int> list1;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(20);
	list1.push_back(30);

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "remove �׽�Ʈ 1" << endl;

	//20�� �����Ѵ�.
	list1.remove(20);

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "remove �׽�Ʈ 2 - ����ü�� ����" << endl;

	//Item �����͸� ��ƾ��Ѵ�.
	//����� ���� Ÿ���̶� �����ͷ� ������ �ش� �����ͷ� ������ �����ϴ�.
	list<Item*> Itemlist;

	Item* pitem1 = new Item(10, 100); Itemlist.push_back(pitem1);
	Item* pitem2 = new Item(20, 200); Itemlist.push_back(pitem2);
	Item* pitem3 = new Item(30, 300); Itemlist.push_back(pitem3);

	//pitem2�� �����Ѵ�.
	Itemlist.remove(pitem2);

	list<Item*>::iterator iterEnd2 = Itemlist.end();
	for (list<Item*>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd2; ++iterPos) {
		cout << "Itemlist: " << (*iterPos)->ItemCd << endl;
	}
}