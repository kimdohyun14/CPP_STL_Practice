#include <iostream>
using namespace std;

// HeapSort�� �̿��ؼ� �����غ���.
int a[] = { 230, 10, 60, 550, 40, 220, 20 };
int heap_size = 7;

// HeapSort�� �ϱ� ���ؼ��� �Ʒ��� ���� ������ �ʿ��ϴ�.
// 1. �־��� �Է��� �� ������ �����. (Heapify)
// 2. ������ ���� ū ���� ���� ������ ���� swap�ϸ鼭 heap-size�� ���δ�. (Extract-Max)
// 3. ���ĵ� �迭�� ����Ѵ�.

// ������� max_heap������ ����� ���̸�, �����͸� ������������ �����Ѵ�.

void max_heapify(int node) {
	int parent_node = node;
	int left_child = node * 2 + 1;
	int right_child = node * 2 + 2;
	int largest = 0; // ���� ū ���� ���� ����� �ε���

	// ��Ʈ ���� ���� �ڽ� ��带 ��
	if (left_child < heap_size && a[left_child] > a[parent_node]) {
		largest = left_child;
	}
	else {
		largest = parent_node;
	}

	// ���� ū ���� ������ �ڽ� ��带 ��
	if (right_child < heap_size && a[right_child] > a[largest]) {
		largest = right_child;
	}

	// ���� ū ���� �θ� ��尡 �ƴ϶��
	// �����Ѵ�.
	if (largest != parent_node) {
		int temp = a[largest];
		a[largest] = a[parent_node];
		a[parent_node] = temp;

		// �ڽ��� ���� ������ ����ؼ� �������鼭 heapify�� ����
		max_heapify(largest); 
	}
}

void build_max_heap() {
	// �� ������ ����� ����� ��ü ��� �߿��� 1/2�� ��ŭ�� ���� �ȴ�.
	for (int i = heap_size / 2 - 1; i >= 0; i--) {
		max_heapify(i);
	}
}

void extract_max() {
	
	for (int i = heap_size - 1; i >= 1; i--) {
		// ��Ʈ ���� ������ ������ ���� �����Ѵ�.
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;

		heap_size--;    // �� ������ �ϳ� ���̱�
		max_heapify(0); // �ٽ� �� ������ �����
	}
}

void print_sorted(int len) {
	for (int i = 0; i < len; i++)
		cout << a[i] << ' ';
	cout << '\n';
}

void heap_sort() {
	build_max_heap(); // �־��� �����͸� max �� ������ �����.
	extract_max();    // max���� �����ؼ� �����Ѵ�.
	print_sorted(sizeof(a)/sizeof(int)); // ���ĵ� �����͸� ����Ѵ�.
}

int main() {
	heap_sort();
	return 0;
}