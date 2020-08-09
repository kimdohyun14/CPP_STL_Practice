#include <iostream>
#include <vector>
#include <algorithm> // �������� �˰����� ����ִ�.
using namespace std;

bool compare(const int a, const int b)
{
	return a > b;
}

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

void print(const int a[], int len)
{
	for (int i = 0; i < len; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

int main()
{
	/* lower_bound
	*  lower_bound(begin, end, value, [cmp])
	*  [begin, end)���� value���� ���� ���� ù ��° iterator ��ȯ
	 
	   ã���� �ϴ� �� �̻��� ó�� ��Ÿ���� ��ġ
       ���� ���� ���ҵ��� ������������ ���� �ʿ�. (�迭, ����Ʈ)
	   lower_bound�� ã���� �ϴ� key���� "������" key������ ū ���� ���� ������ ã�´�.
	   lower_bound�� ã���� �ϴ� key���� �����ϸ� key��
	   ���� ���Ұ� ���� �� �־ ��� ������, ������ �ظ� ���Ѵ�.
	   ������ [start, end]�� �迭�� ���� ��, �߰� ��ġ�� index�� mid�� �ϸ�,
	   arr[mid-1] < key �̸鼭 arr[mid] >= key �� �ּ��� m ���� ã���� �ȴ�. (m >= 2)
	   �̸��� key�� ���� mid ���� �۴ٸ� [start, mid]�� Ž���� �ٽ��ϰ�,
	   key�� arr[mid-1]���� ũ�� [mid+1, end]�� Ž���� �ٽ��Ѵٴ� ���̴�.

	   ��ȯ���� iterator �Ǵ� �ּҰ��̹Ƿ�
	   v.begin()�� ���ְų� �迭�� ù��° �ּҸ� ����Ű�� �迭�� �̸��� ���ָ� �� ��° ��������
	   �� �� �ִ�.
	   */

	// n���� �̷���� ���� ���տ��� ���ϴ� �� k �̻��� ���� ó������ �����ϴ� ��ġ�� ã���ÿ�.
	int arr[10] = { 1,2,4,5,6,6,7,7,7,9 };
	print(arr, 10);
	

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
	print(a, 5);
	// ��� ���Ұ� k���� ���� ������ n + 1�� ���
	cout << "lower_bound(7) : " << lower_bound(a, a + 5, 7) - a + 1 << endl; // 6
	cout << endl;

	/* upper_bound
	*  upper_bound(begin, end, value, [cmp])
	*  [begin, end)���� value���� ū ù ��° iterator ��ȯ
	
	   ���� Ž���� ���
	   ���� ���� ���ҵ��� ������������ ���� �ʿ�.
	   upper_bound�� key ���� �ʰ��ϴ� ���� ù ��° ������ ��ġ�� ���Ѵ�.
	   ã���� �ϴ� ������ ū ���� ó������ ��Ÿ���� ��ġ
	   ���� ���Ұ� ���� �� �����ص� �׻� ������ �ظ� ���� �� �ִ�.
	   arr[mid-1] <= key �̸鼭 arr[mid] > key�� �ּ��� m ���� ã���� �ȴ�. (m >= 2)
	   (���� ���� �ƴ�) key ���� �ʰ��ϴ� ���� ù ��° ������ ��ġ��� ��
	   */

	// { 1,2,4,5,6,6,7,7,7,9 };
	print(arr, 10);
	cout << endl;
	cout << "upper_bound(6) : " << upper_bound(arr, arr + 10, 6) - arr + 1 << endl; // 7
	cout << "upper_bound(7) : " << upper_bound(arr, arr + 10, 7) - arr + 1 << endl; // 10
	cout << "upper_bound(8) : " << upper_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "upper_bound(9) : " << upper_bound(arr, arr + 10, 9) - arr + 1 << endl; // 11
	cout << endl;

	/* Min_element / Max_element
	*  min_element/max_element(begin, end)
	*  min_element/max_element(begin, end, cmp)
	*  [begin, end)���� �ּ�/�ִ밪�� iterator�� ���Ѵ�.
	* 
	*  minmax_element
	*  min�� max�� iterator�� ���ÿ� ���Ѵ�.
	*  minmax_element(begin, end)
	*  minmax_element(begin, end, cmp)
	*/
	int b1[10] = { 10,5,2,1,0,9,8,3,4,2 };
	print(b1, 10);
	cout << endl;
	cout << "max : " << *max_element(b1, b1 + 10) << endl;
	cout << "min : " << *min_element(b1, b1 + 10) << endl;
	auto iter = minmax_element(b1, b1 + 10);
	cout << "max : " << *iter.second << endl;
	cout << "min : " << *iter.first << endl << endl;

	/* unique
	*  unique(begin, end)
	*  [begin, end) �������� ���ӵǴ� ���� �ϳ��� �����ϰ� ����
	* 
	*  ������ �����̳��� ũ�⸦ ���̰ų� �������� �ʴ´�.
	*  �ߺ��� �����ų� ����Ʈ ��Ű�� ������� �۵��Ѵ�.
	*  �ߺ��� ������ ���� End Iterator�� �����Ѵ�.
	*  �������� ������ �ߺ��� ������ �� ���
	* 
	   ù ������ �ּҿ� ������ ������ ���� �ּҸ� ���ڷ� �Ѱ��ش�.
	   ���� ���� �ߺ��� ���Ҹ� ������ ���κ����� �о��ְ� ������ ������ ���� �ּҸ� ����
	   ���� ���� ���ҵ��� ���ĵǾ� �־�� �Ѵ�.
	   ���� erase�� �Բ� �ߺ��� ���Ҹ� �����ϴ� ������� ����Ѵ�.
	   */
	vector<int> vec1 = { 10,10,5,5,6,6,8,8,8,1,1,1 };
	print(vec1);

	// �ش� vector�� �ߺ��� �����ϰ� ���� ���� �̷��� ���� ����Ѵ�.
	vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
	print(vec1);
	cout << endl;

	/* next_permutation / prev_permutation
	
	   next_permutation(begin, end)
	   next_permutation(begin, end, cmp)
	   prev_permutation(begin, end)
	   prev_permutation(begin, end, cmp)

	   [begin, end)�� �����̶�� �������� ��, ���� ������ ������ ���� ������ �����.
	   ������ �����̸� false�� ����

	   ���� ���� ���ҵ��� ���� ������ �����ϰ� true�� �����Ѵ�.
	   ���� ������ ���ٸ� false�� ����
	   ���� ���� ���ҵ��� ���ĵǾ� �־�� �Ѵ�.
	   */
	vector<int> vec2 = { 0,1,2,3 };
	do
	{
		print(vec2);
	} while (next_permutation(vec2.begin(), vec2.end()));

	return 0;
}