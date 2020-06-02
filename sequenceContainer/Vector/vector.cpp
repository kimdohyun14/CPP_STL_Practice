#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/* vector�� ���� */
	vector<int> v;       // �ƹ��͵� ���� vector
	vector<int> a(2);    // ���� 0�� 2�� ������ vector
	vector<int> b(2, 1); // ���� 1�� 2�� ������ vector
	/* vector�� �߰� */
	v.push_back(1);

	/* vector�� ���� */
	v.pop_back();

	/* vector�� 1~10�� �ְ� ����غ��� */
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);
	for (int i = 0; i < 10; i++)
		cout << v[i] << ' ';
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << v.at(i) << ' ';
	cout << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	/* ��� ���� */
	v.clear();

	/* empty�� Ȯ���غ��� */
	if (v.empty())
		cout << "vector�� ����־��." << endl;
	else
		cout << "vector�� �Ӱ� ����ֳ׿�." << endl;

	/* size�� �˾ƺ��� */
	cout << "vector�� ���� size : " << v.size() << endl;

	/* capacity �˾ƺ���*/
	cout << "vector�� capacity : " << v.capacity() << endl;

	/* capacity �÷����� */
	for (int i = 0; i < 20; i++)
		v.push_back(i + 1);

	/* capacity �˾ƺ���*/
	cout << "vector�� capacity : " << v.capacity() << endl;

	vector<int> v2;
	v2.reserve(20); // ���α׷��Ӱ� ���� �޸� ũ�⸦ �Ҵ�
	
    /* capacity �˾ƺ���*/
	cout << "vector2�� capacity : " << v2.capacity() << endl;

	/* insert ����ϱ� */
	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.insert(v3.begin(), 5);

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* insert ����ϱ� (vector ������ �ִ� ���) */
	vector<int> v4(5, 1);
	vector<int>::iterator iter2 = v3.begin();
	iter2++; iter2++;
	v3.insert(iter2, v4.begin(), v4.end());

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* insert ����ϱ� (Ƚ����ŭ �ִ� ���) */
	iter2 = v3.begin();
	v3.insert(iter2, 2, 100); // iter2 ��ġ�� 100�� 2�� �ִ´�.
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* erase ����ϱ� */
	iter2 = v3.begin();
	v3.erase(iter2); // ù��° ��ġ ��� ����
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	v3.erase(v3.begin(), v3.end()); // �� ���� ����
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* assign �˾ƺ��� */
	vector<int> v5;
	v5.assign(7, 4);
	for (int i = 0; i < v5.size(); i++)
		cout << v5[i] << ' ';
	cout << endl;
	cout << v5.size() << ' ' << v5.capacity() << endl;
	return 0;
}