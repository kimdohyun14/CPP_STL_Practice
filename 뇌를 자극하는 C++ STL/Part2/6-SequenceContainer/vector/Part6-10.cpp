#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	vector<int>().swap(v);
	// �⺻ �����ڷ� ���� vector �����̳ʿ� v �����̳ʸ� swap�Ѵ�.
	// �̷μ� capacity�� 0���� ���� �� �ִ�.
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}