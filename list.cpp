// https://blockdmask.tistory.com/76
#include <iostream>
#include <list>
using namespace std;

/* List - ������ �����̳�
   ���Ұ� ������� ������ ������.
   list�� ��� ��� �����̳ʷ� ���Ұ� ��� ������ ����Ǹ�
   list�� ���� ���� ����Ʈ�� �����ȴ�.
   
   list.sort() ��������
   list.sort(cmp) ����� ���� �Լ� ����
   list.sort(greater<int>()) ��������

   remove_if(Predicate)
   predicate�� �ش��ϴ� ���Ҹ� ��� ����

   remove(data)
   data�� �ش��ϴ� ��� ���Ҹ� list���� ����

   reverse()
   ���ҵ��� �������� ������

   lt2.splice(iter2,lt1)
   lt2���� iter2�� ����Ű�� ���� lt1�� ��� ���Ҹ� �߶� ����
   */

bool predicate(int num)
{
	return num >= 10 && num <= 20;
}

template<typename T>
void print(const list<T>& a)
{
	for (auto x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(15);
	lt.push_back(60);
	lt.push_back(16);
	lt.push_back(42);
	lt.push_back(17);
	lt.push_back(5);
	lt.push_back(42); // ����
	lt.pop_back();    // ����

	cout << "list�� ���� ������ : " << lt.back() << endl;
	cout << "list : ";
	print(lt);

	// 10�̻� 20���� ��� ����
	lt.remove_if(predicate);
	cout << "list : ";
	print(lt);

	lt.remove(42);
	cout << "list : ";
	print(lt);

	// ��������
	lt.reverse();
	cout << "list : ";
	print(lt);

	list<char> lt1;
	lt1.push_back('a');
	lt1.push_back('b');
	lt1.push_back('c');
	lt1.push_back('d');

	list<char> lt2;
	lt2.push_back('A');
	lt2.push_back('B');
	lt2.push_back('C');

	cout << "lt1 : "; print(lt1);
	cout << "lt2 : "; print(lt2);
	cout << "lt1.size() : " << lt1.size() << endl;
	cout << "lt2.size() : " << lt2.size() << endl;

	auto iter = lt1.begin();
	++iter;
	++iter;
	// lt1�� iter ��ġ�� lt2�� �߶� ���δ�.
	// ���� lt2�� ����ְ� �ȴ�.
	lt1.splice(iter, lt2);

	cout << "lt1 : "; print(lt1);
	cout << "lt2 : "; print(lt2);
	cout << "lt1.size() : " << lt1.size() << endl;
	cout << "lt2.size() : " << lt2.size() << endl;


	return 0;
}