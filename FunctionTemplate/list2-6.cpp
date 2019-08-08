#include <iostream>
using namespace std;

//�Լ� ���ø�
//const�� ������ �̿��ؼ� ���ø��� �����Ѵ�.
template<typename T> const T& Max(const T& a, const T& b) {
	return a > b ? a : b;
}

//���� �ٸ� Ÿ���� ���ڰ� ������ ���ø��� �Ķ���� T��
//����� �Լ��� ���� a�� b�� Ÿ���� �Ǵ��� �� ����.
void main() {
	int Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP�� SP �� ���� ū���� " << MaxValue1 << "�Դϴ�." << endl << endl;
}