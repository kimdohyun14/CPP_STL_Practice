#include <iostream>
using namespace std;

//����ġ�� ������ �� �ִ� �ִ� ����
const int MAX_EXP_COUNT = 100;

class ExpStack {
public:
	ExpStack() {
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

	//����ġ�� �����Ѵ�.
	bool push(float Exp) {
		//������ �� �ִ� ������ �Ѵ��� �����Ѵ�.
		if (m_Count >= MAX_EXP_COUNT) {
			return false;
		}
		//����ġ�� ���� �� ������ �ϳ� �ø���.
		m_aData[m_Count] = Exp;
		++m_Count;
		return true;
	}

	//���ÿ��� ����ġ�� ������.
	float pop() {
		//����� ���� ���ٸ� 0.0f�� ��ȯ�Ѵ�.
		if (m_Count < 1) {
			return 0.0f;
		}

		//������ �ϳ� ���� �� ��ȯ�Ѵ�.
		--m_Count;
		return m_aData[m_Count];
	}
private:
	float m_aData[MAX_EXP_COUNT];
	int m_Count;
};

//���� �ڷᱸ���� ����߱� ������ ���� �ڿ� ���� �����Ͱ� ���� ��µȴ�.
void main() {
	ExpStack kExpStack;

	cout << "ù��° ���� ����- ���� ����ġ 145.5f" << endl;
	kExpStack.push(145.5f);

	cout << "�ι�° ���� ����- ���� ����ġ 183.25f" << endl;
	kExpStack.push(183.25f);

	cout << "����° ���� ����- ���� ����ġ 162.3f" << endl;
	kExpStack.push(162.3f);

	int Count = kExpStack.Count();
	for (int i = 0; i < Count; ++i) {
		cout << "���� ����ġ->" << kExpStack.pop() << endl;
	}
}