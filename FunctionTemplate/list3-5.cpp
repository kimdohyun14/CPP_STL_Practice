//���ø� �Ķ���� �� int Size�� non-type �Ķ�����̴�.
//Size�� ����Ʈ ���� 100���� �Ѵ�.
#include <iostream>
using namespace std;


template<typename T, int Size=100>
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

	int GetStackSize() {
		return Size;
	}

	bool push(T data) {
		if (m_Count >= Size) {
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
	T m_aData[Size];
	int m_Count;
};

void main() {
	Stack<int, 64> kStack1;
	cout << "������ ũ���? " << kStack1.GetStackSize() << endl;

	Stack<double> kStack2; //����Ʈ ���� ������ �����
	cout << "������ ũ���? " << kStack2.GetStackSize() << endl;
}