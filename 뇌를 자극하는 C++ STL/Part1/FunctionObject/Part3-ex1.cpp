#include <iostream>
using namespace std;

class Equal
{
public:
	bool operator()(int a, int b) const
	{
		return a == b ? true : false;
		// return a == b; �̷��� �ص� �ȴ�.
	}
};


int main()
{
	Equal cmp;

	if (cmp(10, 20))
		cout << "����!" << endl;
	else
		cout << "�ٸ���!" << endl;
	return 0;
}