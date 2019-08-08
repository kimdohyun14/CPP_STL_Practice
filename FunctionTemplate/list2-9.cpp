#include <iostream>
using namespace std;

//non-type �Լ� ���ø�
template<typename T, int VAL> T AddValue(T const& CurValue) {
	return CurValue + VAL;
}

const int EVENT_ADD_HP_VALUE = 50; //�̺�Ʈ�� ���� �߰� �� HP ��
const int EVENT_ADD_EXP_VALUE = 30; //�̺�Ʈ�� ���� �߰� �� ����ġ
const int EVENT_ADD_MONEY_VALUE = 10000; //�̺�Ʈ�� ���� �߰� �� ��

void main() {
	int Char_HP = 250;
	cout << Char_HP << "���� �̺�Ʈ�� ���� " <<
		AddValue<int, EVENT_ADD_HP_VALUE>(Char_HP) << " �� ����" << endl;

	float Char_EXP = 378.89f;
	cout << Char_EXP << "���� �̺�Ʈ�� ���� " <<
		AddValue<float, EVENT_ADD_EXP_VALUE>(Char_EXP) << " �� ����" << endl;

	_int64 Char_MONEY = 34567890;
	cout << Char_MONEY << "���� �̺�Ʈ�� ���� " <<
		AddValue<_int64, EVENT_ADD_MONEY_VALUE>(Char_MONEY) << " �� ����" << endl;
}