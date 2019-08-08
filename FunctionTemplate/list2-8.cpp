#include <iostream>
using namespace std;

//�Լ� ���ø�
//��ȯ ���� T1�̶� ������ �����. (double -> int ������ �ս�)
//���ø����� ���� ���� ���ϴ� Max �Լ�
template<typename T1, typename T2> const T1& Max(const T1& a, const T2& b) {
	cout << "Max(const T& a, const T& b) ���ø� ���� ���" << endl;
	return a > b ? a : b;
}

//����ȭ��ŲMax �Լ�
template <> const double& Max(const double& a, const double& b) {
	cout << "Max(const double& a, const double& b) ����ȭ ���� ���" << endl;
	return a > b ? a : b;
}

void main() {
	double Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP�� SP �� ���� ū���� " << MaxValue1 << "�Դϴ�." << endl << endl;

	int Char2_MP = 300;
	double Char2_SP = 400.25;
	double MaxValue2 = Max(Char2_MP, Char2_SP);
	cout << "MP�� SP �� ���� ū���� " << MaxValue2 << "�Դϴ�." << endl << endl;
}