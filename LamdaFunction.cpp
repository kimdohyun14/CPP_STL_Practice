// https://hibee.tistory.com/49?category=1012497
#include <iostream>
#include <vector>
using namespace std;

/* Lamda Function
   [���� ĸ��](���� parameter)->����Ÿ��{function}(�ѱ� parameter)
  
   [���� ĸ��]
   ���� �Լ����� ����� �ܺ� ������ ����
   ���� main�Լ��� �ִ� ������ ����ϰ� �ʹٸ� [&var]�� ���� Ư�� ������ ����

   ĸó�� &�� ������ �����ϴ� �������� �ٱ��� �ִ� ������ ��� ��� ����
   &�� ����, =�� ����
   ���� ���� ,�� ���

   (���� parameter)
   �Լ����� �޴� ���ڵ�

   ->����Ÿ��
   Return ���ִ� Ÿ���� ����
   void�� ��� ���� ����

   {function}
   ������ �����ϴ� ��ü����

   (�ѱ� parameter)
   ȣ���ϴ� �Լ��� �Ѱ��ִ� ����
*/

int main()
{
	cout << [](int x, int y)
	{
		return x + y;
	}(1, 2) << endl;

	cout << [](int x, int y)->int
	{
		return x + y;
	}(1, 2) << endl;

	auto sum = [](int x, int y)
	{
		return x + y;
	};

	cout << sum(1, 2) << endl;
	return 0;
}