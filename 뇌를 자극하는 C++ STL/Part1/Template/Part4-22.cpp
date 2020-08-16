#include <iostream>
#include <string>
using namespace std;

// ���ø��� �Ű������� �Լ� ��ü(����)�� �����ϸ�
// ��ȯ Ÿ�԰� �Լ� �Ű����� Ÿ���� Ŭ���̾�Ʈ�� �����ϴ� ���� ������ �Լ� ��ü�� ���� �� �ִ�.
template<typename RetType, typename ArgType>
class Functor
{
public:
	RetType operator()(ArgType data)
	{
		cout << data << endl;
		return RetType();
	}
};

int main()
{
	Functor<void, int> functor1;
	functor1(10);
	Functor<bool, string> functor2;
	functor2("HI");

	return 0;
}