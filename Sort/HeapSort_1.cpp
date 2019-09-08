#include <iostream>
using namespace std;

// https://blog.naver.com/ndb796/221228342808

int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main() {
	// ���� ��ü Ʈ�� ������ �ִ� �� ������ �ٲ۴�.
	for (int i = 1; i < number; i++) {
		int child = i;
		do {
			int root = (child - 1) / 2;
			if (heap[root] < heap[child]) { // �θ��� < �ڽĳ��
				int temp = heap[root];
				heap[root] = heap[child];
				heap[child] = temp;
			}
			child = root; // ����� ����
		} while (child != 0);
	}
	// ũ�⸦ �ٿ����� �ݺ������� ���� �����Ѵ�.
	for (int i = number - 1; i >= 0; i--) {
		// ��Ʈ���� ���� �������� ����� ���� ���� swap�ϸ鼭 ������ �Ѵ�.
		int temp = heap[0]; // ��Ʈ ���
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int child = 1;
		do {
			child = 2 * root + 1;
			// �ڽ� �߿��� �� ū ���� ã��
			if (heap[child] < heap[child + 1] && child < i - 1) {
				child++;
			}
			// ��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ
			if (heap[root] < heap[child] && child < i) {
				int temp = heap[root];
				heap[root] = heap[child];
				heap[child] = temp;
			}
			root = child;
		} while (child < i);
	}

	// ����� ����ϱ�
	for (int i = 0; i < number; i++)
		cout << heap[i] << ' ';

	return 0;
}