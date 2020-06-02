#include <iostream>
#include <list>
using namespace std;

//�Լ� ��ü ����
template <typename T> struct COMPARE_ITEM {
	bool operator()(const T l, const T r) const {
		return l.ItemCd < r.ItemCd;
	}
};

struct Item {
	Item(int itemCd, int buyMoney) {
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

public:
	int ItemCd; //������ �ڵ�
	int BuyMoney; //�Ǹ� �ݾ�
};

void main() {
	list<int> list1;

	list1.push_back(20);
	list1.push_back(10);
	list1.push_back(35);
	list1.push_back(15);
	list1.push_back(12);

	cout << "sort ��������" << endl;
	
	list1.sort();

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "sort ��������" << endl;
	
	list1.sort(greater<int>());

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "sort - ����ڰ� ������ ������� ����" << endl;

	list<Item> Itemlist;

	Item item1(20, 100); Itemlist.push_back(item1);
	Item item2(10, 200); Itemlist.push_back(item2);
	Item item3(7, 300); Itemlist.push_back(item3);

	//�����Ѵ�.
	Itemlist.sort(COMPARE_ITEM<Item>());

	list<Item>::iterator iterEnd2 = Itemlist.end();
	for (list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "Itemlist : " << iterPos->ItemCd << endl;
	}
}