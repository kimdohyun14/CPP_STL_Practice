#include <iostream>
using namespace std;

//���� ������ �� �ִ� �ִ� ����
const int MAX_MONEY_COUNT = 100;

//�� ���� ���� Ŭ����
class MoneyStack {
public:
	MoneyStack() {
		Clear();
	}

	//�ʱ�ȭ �Ѵ�.
	void Clear() {
		m_Count = 0;
	}

	//���ÿ� ����� ����
	int Count() {
		return m_Count;
	}

	//����� �����Ͱ� ���°�?
	bool IsEmpty() {
		return 0 == m_Count ? true : false;
	}
	//���� �����Ѵ�.
	bool push(_int64 Money) {
		//������ �� �ִ� ������ �Ѵ��� �����Ѵ�.
		if (m_Count >= MAX_MONEY_COUNT) {
			return false;
		}
		//������ ������ �ϳ� �ø���.
		m_aData[m_Count] = Money;
		++m_Count;
		return true; //���������� ����.
	}
	
	

	//���ÿ��� ���� ������.
	_int64 pop() {
		//����� ���� ���ٸ� 0�� ��ȯ�Ѵ�.
		if (m_Count < 1) {
			return 0;
		}
		//������ �ϳ� ���� �� ��ȯ�Ѵ�.
		--m_Count;
		return m_aData[m_Count];
	}

private:
	_int64 m_aData[MAX_MONEY_COUNT];
	int m_Count;
};