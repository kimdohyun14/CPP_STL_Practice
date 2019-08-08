#include <iostream>
using namespace std;

template<typename T1, typename T2> class Test {
public:
	T1 Add(T1 a, T2 b) {
		cout << "�Ϲ� ���ø��� ����߽��ϴ�." << endl;
		return a;
	}
};

//T2�� float�� ��üȭ�� Test�� �κ� ����ȭ ���ø�
template<typename T1> class Test<T1, float> {
public:
	T1 Add(T1 a, float b) {
		cout << "�κ� ����ȭ ���ø��� ����߽��ϴ�." << endl;
		return a;
	}
};

template<typename T2> class Test<float, T2> {
public:
	float Add(float a, T2 b) {
		cout << "TEST" << endl;
		return a;
	}
};

void main() {
	Test<int, int> test1;
	test1.Add(2, 3);

	Test<int, float> test2;
	test2.Add(2, 5.8f);

	Test<float, int> test3;
	test3.Add(1.2f, 3);

	Test<double, double> test4;
	test4.Add(2.0f, 3.0f);
}