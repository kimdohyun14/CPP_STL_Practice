#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
};

int main()
{
	/* �Ϲ� ������ p1, p2�� ����Ű�� ���� ��ü�� delete �������� ���� �����ؾ�
	   �޸� ������ �߻����� �ʴ´�.
	   ������ ��� �߿� �Լ��� �����ϰų� ���� ���� �߻��ϸ� �������� �Ҵ���
	   �޸𸮸� �������� ���ϴ� ������ �߻��ϰ� �ȴ�.
	   */
	Point* p1 = new Point(2, 3); // �޸� �Ҵ�
	Point* p2 = new Point(5, 5); // �޸� �Ҵ�

	p1->Print(); // p1�� ��� �Լ� ȣ��
	p2->Print();

	delete p1; // �޸� ����
	delete p2;
	return 0;
}