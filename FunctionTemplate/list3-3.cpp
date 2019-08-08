#include <iostream>
using namespace std;

const int MAX_COUNT = 100;

//Stack ���ø� Ŭ����
template<typename T>
class Stack {
public:
	Stack() {
		Clear();
	}

	void Clear() {
		m_Count = 0;
	}

	int Count() {
		return m_Count;
	}

	bool IsEmpty() {
		return 0 == m_Count ? true : false;
	}

	bool push(T data) {
		if (m_Count >= MAX_COUNT) {
			return false;
		}
		m_aData[m_Count] = data;
		++m_Count;
		return true;
	}

	T pop() {
		if (m_Count < 1) {
			return 0;
		}
		--m_Count;
		return m_aData[m_Count];
	}

private:
	T m_aData[MAX_COUNT];
	int m_Count;
};

void main() {
	Stack<double> kStackExp;

	cout << "ù��° ���� ����- ���� ����ġ 145.5f" << endl;
	kStackExp.push(145.5f);

	cout << "�ι�° ���� ����- ���� ����ġ 183.25f" << endl;
	kStackExp.push(183.25f);

	cout << "����° ���� ����- ���� ����ġ 162.3f" << endl;
	kStackExp.push(162.3f);

	int Count = kStackExp.Count();
	for (int i = 0; i < Count; ++i) {
		cout << "���� ����ġ->" << kStackExp.pop() << endl;
	}

	cout << endl << endl;

	Stack<_int64> kStackMoney;

	cout << "ù��° ���� ����- ���� �� 1000023" << endl;
	kStackMoney.push(1000023);

	cout << "�ι�° ���� ����- ���� �� 1000234" << endl;
	kStackMoney.push(1000234);

	cout << "����° ���� ����- ���� �� 1000145" << endl;
	kStackMoney.push(1000145);

	Count = kStackMoney.Count();
	for (int i = 0; i < Count; ++i) {
		cout << "���� ��->" << kStackMoney.pop() << endl;
	}
}