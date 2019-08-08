#include <iostream>
using namespace std;

//�Լ� ���ø�
//��ȯ ���� T1�̶� ������ �����. (double -> int ������ �ս�)
template<typename T1, typename T2> const T1& Max(const T1& a, const T2& b) {
	return a > b ? a : b;
}

void main() {
	int Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP�� SP �� ���� ū���� " << MaxValue1 << "�Դϴ�." << endl << endl;
	
	double MaxValue2 = Max(Char1_SP, Char1_MP);
	cout << "MP�� SP �� ���� ū���� " << MaxValue2 << "�Դϴ�." << endl << endl;
}