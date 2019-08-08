#include <iostream>
#include <list>
using namespace std;

struct Item {
	Item(int itemCd, int buyMoney) {
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

	int ItemCd;  //�������ڵ�
	int BuyMoney;//�Ǹ� �ݾ�
};

void main() {
	list<Item> Itemlist;

	//�տ� ������ �߰�
	Item item1(1, 2000);
	Itemlist.push_front(item1);

	Item item2(2, 1000);
	Itemlist.push_front(item2);

	//�ڿ� ������ �߰�
	Item item3(3, 3000);
	Itemlist.push_back(item3);

	Item item4(4, 4500);
	Itemlist.push_back(item4);

	//������ �ڵ� ��ȣ�� 2, 1, 3, 4�� ������ ��µ�.
	list<Item>::iterator iterEnd = Itemlist.end();
	for (list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "������ �ڵ� : " << iterPos->ItemCd << endl;
	}

	//�տ� �ִ� �����͸� �����Ѵ�.
	Itemlist.pop_front();

	//�տ� �ִ� �������� ������ �����Ѵ�.
	Item front_item = Itemlist.front();
	//������ �ڵ� 1�� ��µȴ�.
	cout << "������ �ڵ� : " << front_item.ItemCd << endl;

	//�������� �ִ� �����͸� �����Ѵ�.
	Itemlist.pop_back();

	//�������� �ִ� �������� ������ �����Ѵ�.
	Item back_item = Itemlist.back();
	//������ �ڵ� 3�� ��µȴ�.
	cout << "������ �ڵ� : " << back_item.ItemCd << endl;

	//����� �����Ͱ� �ִ°�?
	if (false == Itemlist.empty()) {
		list<Item>::size_type Count = Itemlist.size();
		cout << "���� �ִ� ������ ���� : " << Count << endl;
	}

	//��� �����͸� �����.
	Itemlist.clear();
	list<Item>::size_type Count = Itemlist.size();
	cout << "���� �ִ� ������ ���� : " << Count << endl;
}