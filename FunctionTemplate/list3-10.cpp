#include <iostream>
using namespace std;

//�̱��� ����
//�Ķ���� T�� �̱����� �ǵ��� �����Ѵ�.
template <typename T> class MySingleton {
public:
	MySingleton() {}
	virtual ~MySingleton() {}

	//�� ����� ���ؼ��� ������ �����ϴ�.
	static T* GetSingleton() {
		if (NULL == _Singleton) {
			_Singleton = new T;
		}
		return (_Singleton);
	}

	static void Release() {
		delete _Singleton;
		_Singleton = NULL;
	}

private:
	static T* _Singleton;
};

template <typename T> T* MySingleton<T> ::_Singleton = NULL;

//�̱��� Ŭ���� ���ø��� ��� �����鼭 �Ķ���Ϳ� �� Ŭ������ �ѱ��.
class MyObject : public MySingleton<MyObject> {
public:
	MyObject() : _nValue(10) {}

	void SetValue(int value) { _nValue = value; }
	int GetValue() { return _nValue; }

private:
	int _nValue;
};

void main() {
	MyObject* MyObj1 = MyObject::GetSingleton();

	cout << MyObj1->GetValue() << endl;

	//MyObj2�� MyObj1�� ������ ��ü�̴�.
	MyObject* MyObj2 = MyObject::GetSingleton();
	MyObj2->SetValue(20);

	cout << MyObj1->GetValue() << endl;
	cout << MyObj2->GetValue() << endl;
}