#include <iostream>
#include <list>
using namespace std;

template<typename T> class Stack {
public:
	Stack() { Clear(); }

	//���� ����� �����Ѵ�.
	void SetInOutType(bool bLIFO) { m_bLIFO = bLIFO; }

	//�ʱ�ȭ �Ѵ�.
	void Clear() {
		if (false == m_Datas.empty())
			m_Datas.clear();
	}

	//���ÿ� ����� ����
	int Count() { return static_cast<int>(m_Datas.size()); }

	//����� �����Ͱ� ���°�?
	bool IsEmpty() { return m_Datas.empty(); }

	//�����͸� �����Ѵ�.
	void push(T data) {
		m_Datas.push_back(data);
	}

	//���ÿ��� ������.
	bool pop(T* data) {
		if (IsEmpty()) {
			return false;
		}

		if (m_bLIFO) {
			//ũ�� T��ŭ m_Datas.back()�� ������ data�� �����Ѵ�.
			memcpy(data, &m_Datas.back(), sizeof(T));
			m_Datas.pop_back();
		}
		else {
			memcpy(data, &m_Datas.front(), sizeof(T));
			m_Datas.pop_front();
		}
		return true;
	}

private:
	list<T> m_Datas;
	bool m_bLIFO; //true �̸� ���Լ���, false �̸� ���Լ���
};

void main() {
	Stack<int> Int_Stack;

	//LIFO�� ����
	Int_Stack.SetInOutType(true);

	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);

	int Value = 0;
	Int_Stack.pop(&Value);
	cout << "LIFO pop : " << Value << endl << endl;

	Int_Stack.Clear();

	//FIFO�� ����
	Int_Stack.SetInOutType(false);

	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);

	Int_Stack.pop(&Value);
	cout << "FIFO pop : " << Value << endl << endl;

	list<int> s;
	s.push_back(10);
	cout << s.back() << endl;
	cout << s.front() << endl;
}