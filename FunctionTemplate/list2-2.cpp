#include <iostream>
using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

float Max(float a, float b) {
	return a > b ? a : b;
}

void main() {
	int Char1_HP = 300;
	int Char2_HP = 400;
	int MaxCharHP = Max(Char1_HP, Char2_HP);
	cout << "HP �� ���� ū ���� " << MaxCharHP << "�Դϴ�." << endl << endl;

	float Char1_Exp = 250.0f;
	float Char2_Exp = 250.57f;
	float MaxCharExp = Max(Char1_Exp, Char2_Exp);
	cout << "����ġ �� ���� ū ���� " << MaxCharExp << "�Դϴ�." << endl << endl;
}