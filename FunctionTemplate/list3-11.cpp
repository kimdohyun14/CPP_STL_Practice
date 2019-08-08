#include <iostream>
using namespace std;


//Ŭ���� ���ø� �ڵ� ��Ÿ�� �������
template<typename T> class Stack {
public:
	explicit Stack(int size);
	~Stack();
	
	//�ʱ�ȭ �Ѵ�.
	void Clear();
	//���ÿ� ����� ����
	int Count();
	//����� �����Ͱ� ���°�?
	bool IsEmpty();
	//�����͸� ���� �� �ִ� �ִ� ����
	int GetStackSize();
	//�����͸� �����Ѵ�.
	bool push(T data);
	//���ÿ��� ������.
	T pop();

private:
	T* m_aData;
	int m_Count;

	int m_Size;
};

template<typename T> Stack<T>::Stack(int size) {
	m_Size = size;
	m_aData = new T[m_Size];

	Clear();
}

template<typename T> Stack<T>::~Stack() {
	delete[] m_aData;
}

template<typename T> void Stack<T>::Clear() {
	m_Count = 0;
}

template<typename T> int Stack<T>::Count() {
	return m_Count;
}

template<typename T> bool Stack<T>::IsEmpty() {
	return 0 == m_Count ? true : false;
}

template<typename T> int Stack<T>::GetStackSize() {
	return m_Size;
}

template<typename T> bool Stack<T>::push(T data) {
	if (m_Count >= m_Size) {
		return false;
	}

	m_aData[m_Count] = data;
	++m_Count;
	return true;
}

template<typename T> T Stack<T>::pop() {
	if (m_Count < 1) {
		return 0;
	}

	--m_Count;
	return m_aData[m_Count];
}

void main() {
	Stack<int> kStack1(7);
	cout << "������ ũ��� ? " << kStack1.GetStackSize() << endl;
}