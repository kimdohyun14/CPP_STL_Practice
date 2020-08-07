#include <iostream>
#include <vector>
#include <algorithm> // �������� �˰����� ����ִ�.
using namespace std;

bool compare(const int a, const int b)
{
	return a > b;
}

int main()
{
	int arr1[100];
	vector<int> arr2(100);
	int n = 100;

	// �����ϱ� (��������)
	sort(arr1, arr1 + n);
	sort(arr2.begin(), arr2.end());
	// ����� ���� �Լ� ���� ���� ����.
	sort(arr1, arr1 + n, compare);

	// �������� ������ �̷���
	stable_sort(arr1, arr1 + n);

	// lower_bound
	// ���� Ž���� ���
	// ã���� �ϴ� �� �̻��� ó�� ��Ÿ���� ��ġ
    // ���� ���� ���ҵ��� ������������ ���� �ʿ�. (�迭, ����Ʈ)
	// lower_bound�� ã���� �ϴ� key���� "������" key������ ū ���� ���� ������ ã�´�.
	// lower_bound�� ã���� �ϴ� key���� �����ϸ� key��
	// ���� ���Ұ� ���� �� �־ ��� ������, ������ �ظ� ���Ѵ�.
	// ������ [start, end]�� �迭�� ���� ��, �߰� ��ġ�� index�� mid�� �ϸ�,
	// arr[mid-1] < key �̸鼭 arr[mid] >= key �� �ּ��� m ���� ã���� �ȴ�. (m >= 2)
	// �̸��� key�� ���� mid ���� �۴ٸ� [start, mid]�� Ž���� �ٽ��ϰ�,
	// key�� arr[mid-1]���� ũ�� [mid+1, end]�� Ž���� �ٽ��Ѵٴ� ���̴�.

	// ��ȯ���� iterator �Ǵ� �ּҰ��̹Ƿ�
	// v.begin()�� ���ְų� �迭�� ù��° �ּҸ� ����Ű�� �迭�� �̸��� ���ָ� �� ��° ��������
	// �� �� �ִ�.

	// n���� �̷���� ���� ���տ��� ���ϴ� �� k �̻��� ���� ó������ �����ϴ� ��ġ�� ã���ÿ�.
	int arr[10] = { 1,2,4,5,6,6,7,7,7,9 };
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	// std::lower_bound(A, A+n, K)�� � ��ġ,
	// std::lower_bound(A, A+n, K)-A+1�� A�迭���� ����� ��ġ(�ε���)
	cout << "lower_bound(0) : " << lower_bound(arr, arr + 10, 0) - arr + 1 << endl; // 1
	cout << "lower_bound(1) : " << lower_bound(arr, arr + 10, 1) - arr + 1 << endl; // 1
	cout << "lower_bound(5) : " << lower_bound(arr, arr + 10, 5) - arr + 1 << endl; // 4
	cout << "lower_bound(6) : " << lower_bound(arr, arr + 10, 6) - arr + 1 << endl; // 5
	cout << "lower_bound(7) : " << lower_bound(arr, arr + 10, 7) - arr + 1 << endl; // 7
	cout << "lower_bound(8) : " << lower_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "lower_bound(9) : " << lower_bound(arr, arr + 10, 9) - arr + 1 << endl; // 10
	cout << "lower_bound(20) : " << lower_bound(arr, arr + 10, 20) - arr + 1 << endl; // 11
	cout << "lower_bound(10) : " << lower_bound(arr, arr + 10, 10) - arr + 1 << endl; // 11
	cout << endl;

	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ' ';
	cout << endl;
	// ��� ���Ұ� k���� ���� ������ n + 1�� ���
	cout << "lower_bound(7) : " << lower_bound(a, a + 5, 7) - a + 1 << endl; // 6
	cout << endl;


	// upper_bound
	// ���� Ž���� ���
	// ���� ���� ���ҵ��� ������������ ���� �ʿ�.
	// upper_bound�� key ���� �ʰ��ϴ� ���� ù ��° ������ ��ġ�� ���Ѵ�.
	// ã���� �ϴ� ������ ū ���� ó������ ��Ÿ���� ��ġ
	// ���� ���Ұ� ���� �� �����ص� �׻� ������ �ظ� ���� �� �ִ�.
	// arr[mid-1] <= key �̸鼭 arr[mid] > key�� �ּ��� m ���� ã���� �ȴ�. (m >= 2)
	// (���� ���� �ƴ�) key ���� �ʰ��ϴ� ���� ù ��° ������ ��ġ��� ��

	// { 1,2,4,5,6,6,7,7,7,9 };
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	cout << "upper_bound(6) : " << upper_bound(arr, arr + 10, 6) - arr + 1 << endl; // 7
	cout << "upper_bound(7) : " << upper_bound(arr, arr + 10, 7) - arr + 1 << endl; // 10
	cout << "upper_bound(8) : " << upper_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "upper_bound(9) : " << upper_bound(arr, arr + 10, 9) - arr + 1 << endl; // 11
	cout << endl;

	// max�� min ã��
	int b1[10] = { 10,5,2,1,0,9,8,3,4,2 };
	for (int i = 0; i < 10; ++i)
		cout << b1[i] << ' ';
	cout << endl;
	cout << "max : " << *max_element(b1, b1 + 10) << endl;
	cout << "min : " << *min_element(b1, b1 + 10) << endl << endl;

	// unique
	// ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �Ѱ��ش�.
	// ���� ���� �ߺ��� ���Ҹ� ������ ���κ����� �о��ְ� ������ ������ ���� �ּҸ� ����
	// ���� ���� ���ҵ��� ���ĵǾ� �־�� �Ѵ�.
	// ���� erase�� �Բ� �ߺ��� ���Ҹ� �����ϴ� ������� ����Ѵ�.
	vector<int> vec1 = { 10,10,5,5,6,6,8,8,8,1,1,1 };
	for (const auto elem : vec1)
		cout << elem << ' ';
	cout << endl;

	vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
	for (const auto elem : vec1)
		cout << elem << ' ';
	cout << endl;

	// next_permutation
	// ���� ���� ���ҵ��� ���� ������ �����ϰ� true�� �����Ѵ�.
	// ���� ������ ���ٸ� false�� ����
	// ���� ���� ���ҵ��� ���ĵǾ� �־�� �Ѵ�.
	vector<int> vec2 = { 0,1,2,3 };
	do
	{
		for (const auto elem : vec2)
			cout << elem << ' ';
		cout << endl;
	} while (next_permutation(vec2.begin(), vec2.end()));

	return 0;
}