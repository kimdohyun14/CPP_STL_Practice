#include <iostream>
using namespace std;

template<typename T> class TestP {
public:
	void Add() {
		cout << "�Ϲ� ���ø��� ����߽��ϴ�." << endl;
	}
};

//T�� T*�� �κ� ����ȭ
template<typename T> class TestP<T*> {
public:
	void Add() {
		cout << "�����͸� ����� �κ� ����ȭ ���ø��� ����߽��ϴ�." << endl;
	}
};

void main() {
	TestP<int> test1;
	test1.Add();

	TestP<int*> test2;
	test2.Add();
}