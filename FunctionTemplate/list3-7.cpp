#include <iostream>
#include <string>
using namespace std;

//ID ���ڿ��� �ִ� ����(null ���� ����)
const int MAX_ID_LENGTH = 21;

template<typename T> class Stack {
public:
	explicit Stack(int size) {
		m_Size = size;
		m_aData = new T[m_Size];

		Clear();
	}

	~Stack() {
		delete[] m_aData;
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
		return m_Size;
	}

	bool push(T data) {
		if (m_Count >= m_Size) {
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
	T* m_aData;
	int m_Count;

	int m_Size;
};

//�Ʒ��� �ڵ�� ���ڿ��� �����ϱ� ���� char* ���� ����ȭ�� StackŬ����
template<> class Stack<char*> {
public:
	explicit Stack(int size) {
		m_Size = size;

		m_ppData = new char* [m_Size];
		for (int i = 0; i < m_Size; ++i) {
			m_ppData[i] = new char[MAX_ID_LENGTH];
		}

		Clear();
	}

	~Stack() { //�Ҹ��ڸ� �̿��� �����Ҵ� ����
		for (int i = 0; i < m_Size; ++i) {
			delete[] m_ppData[i];
		}

		delete[] m_ppData;
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
		return m_Size;
	}

	bool push(char* pID) {
		if (m_Count >= m_Size) {
			return false;
		}
		//���ÿ� �ش� ���ڿ� pID�� ���ڰ����� 20�������� �޴´�.
		//strncpy_s�� n���� ���ڸ� ������ �� �� �ڿ� �� ���ڸ� �߰����� �ʱ� �����̴�.
		strncpy_s(m_ppData[m_Count], MAX_ID_LENGTH, pID, MAX_ID_LENGTH - 1);
		m_ppData[m_Count][MAX_ID_LENGTH - 1] = '\0';
		++m_Count;
		return true;
	}

	char* pop() {
		if (m_Count < 1) {
			return 0;
		}

		--m_Count;
		return m_ppData[m_Count];
	}

private:
	char** m_ppData;
	int m_Count;

	int m_Size;
};

void main() {
	Stack<int> kStack1(64);
	cout << "������ ũ���? " << kStack1.GetStackSize() << endl;
	kStack1.push(10);
	kStack1.push(11);
	kStack1.push(12);

	int Count1 = kStack1.Count();
	for (int i = 0; i < Count1; ++i) {
		cout << "������ ���� ��ȭ-> " << kStack1.pop() << endl;
	}

	cout << endl;

	char GameID1[MAX_ID_LENGTH] = "NiceChoi";
	char GameID2[MAX_ID_LENGTH] = "SuperMan";
	char GameID3[MAX_ID_LENGTH] = "Attom";

	//Stack ũ���� ���ø��� char* ����ȭ ������ ������.
	Stack<char*> kStack2(64);
	kStack2.push(GameID1);
	kStack2.push(GameID2);
	kStack2.push(GameID3);

	int Count2 = kStack2.Count();
	for (int i = 0; i < Count2; ++i) {
		cout << "���� ������ �� ������ ID -> " << kStack2.pop() << endl;
	}
}