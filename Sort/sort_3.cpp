#include <iostream>
#include <algorithm>
using namespace std;

// �����͸� ��� �����غ���
// ��� �����͵��� ��ü�� �����Ǿ� �ֱ� ������
class Student {
public:
	string name;
	int score;

	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	// ���� ������ '������ ���� ����'
	bool operator <(Student& student) {
		// �ٸ� �л� student�� �񱳸� �� ��,
		// �� �켱����(this->score)�� student.score���� �۴ٸ�
		// �� ���ٴ� ���̴�.
		return this->score < student.score;
	}
};
int main() {
	Student students[] = {
		Student("�� �� ��", 90),
		Student("�� �� ��", 93),
		Student("�� �� ��", 94),
		Student("�� �� ��", 84),
		Student("�� �� ��", 74)
	};
	// �⺻������ Student Ŭ���� �ȿ���
	// ���ı����� ���� �����߱� ������ ������ �ȴ�.
	sort(students, students + 5);
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}

	return 0;
}