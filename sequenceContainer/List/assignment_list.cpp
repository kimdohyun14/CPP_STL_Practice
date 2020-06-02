#include <iostream>
#include <list>
using namespace std;

struct Point {
	Point(char tar, int a, int b) {
		target = tar;
		first = a;
		second = b;
	}

	int first;
	int second;
	char target;
};

void main() {
	list<Point> list1;

	//�� 5���� �̷���� ������ ����غ���.
	Point A('A', 50, 200); list1.push_back(A);
	Point B('B', 20, 80); list1.push_back(B);
	Point C('C', 75, 10); list1.push_back(C);
	Point D('D', 130, 80); list1.push_back(D);
	Point E('E', 100, 200); list1.push_back(E);


	cout << "A, B, C, D, E�� ���� ������� ����Ѵ�." << endl;
	//A, B, C, D, E�� ���� ������� ����Ѵ�.
	list<Point>::iterator iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	cout << endl << endl;

	cout << "�� F(180, 150)�� �߰��Ǿ��� ��, �����غ���." << endl;
	//�� F(180, 150)�� �߰��Ǿ��� ��, �����غ���.
	Point F('F', 180, 150); list1.push_back(F);

	//A, B, C, D, E, F�� ���� ������� ����Ѵ�.
	iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	//�� D�� ���� (200, 100)���� �����Ѵ�.
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		if (iterPos->target == 'D') {
			iterPos->first = 200;
			iterPos->second = 100;
			break;
		}
	}

	cout << endl << endl;
	cout << "�� D�� ���� (200, 100)���� �����Ѵ�." << endl;
	//A, B, C, D, E, F�� ���� ������� ����Ѵ�.
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	cout << endl << endl;
	cout << "�� C�� �����Ѵ�." << endl;

	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		if (iterPos->target == 'C') {
			list1.erase(iterPos);
			break;
		}
	}

	iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}
}