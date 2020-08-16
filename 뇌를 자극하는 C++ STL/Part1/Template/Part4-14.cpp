#include <iostream>
#include <string>
using namespace std;

template<typename T>
class ObjectInfo
{
	T data;
public:
	ObjectInfo(const T& d):data(d){}

	void Print()
	{
		cout << "Ÿ��: " << typeid(data).name() << endl;
		cout << "ũ��: " << sizeof(data) << endl;
		cout << "��: " << data << endl;
		cout << endl;
	}
};

int main()
{
	ObjectInfo<int> d1(10);
	d1.Print();

	ObjectInfo<double> d2(2.5);
	d2.Print();

	ObjectInfo<string> d3("Hello");
	d3.Print();

	return 0;
}