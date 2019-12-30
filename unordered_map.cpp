#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<int, float> hash1;

	// insert case 1:
	hash1.insert(unordered_map<int, float>::value_type(10, 20.7f));

	// insert case 2:
	hash1.insert(hash1.begin(), unordered_map<int, float>::value_type(20, 104.8f));

	// insert case 3:
	unordered_map<int, float> hash2;
	hash2.insert(hash1.begin(), hash1.end());

	// for�� Ȱ��
	cout << "hash1: ";
	// iterator ���
	unordered_map<int, float>::iterator iter;
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	cout << "hash2: ";
	for (iter = hash2.begin(); iter != hash2.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;

	// erase case 1:
	hash1.erase(hash1.begin());

	cout << "hash1: ";
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// erase case 2:
	hash1.erase(hash1.begin(), hash1.end());

	cout << "hash1: ";
	for (iter = hash1.begin(); iter != hash1.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// erase case 3:
	hash2.erase(10); // key�� 10�� ��Ҹ� �����Ѵ�.

	cout << "hash2: ";
	for (iter = hash2.begin(); iter != hash2.end(); ++iter)
		cout << "[" << iter->first << "," << iter->second << "]" << ' ';
	cout << endl << endl;;

	// search case 1:
	unordered_map<int, float>::iterator findIter;

	// ã���� �� ����� �ݺ��ڸ� ����, �ƴϸ� end()�� ����
	findIter = hash2.find(20);
	if (findIter != hash2.end())
	{
		cout << "key�� 20�� ��Ұ� �־��." << endl << endl;
	}
	else
	{
		cout << "�׷� ��Ҵ� ���׿�." << endl << endl;
	}

	unordered_map<int, int> hash3;
	for (int i = 0; i < 10; i++)
		hash3.insert(unordered_map<int, int>::value_type(i, i + 10));

	cout << "hash3: ";
	unordered_map<int, int>::iterator iter2;
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	// �ٸ� ���·ε� insert�� �� �ֽ��ϴ�.
	hash3[1000] = 200;
	hash3[2000] = 300;

	cout << "hash3: ";
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	// �̷� ���µ� �����Ǿ �־����ϴ�. default�� �־����ϴ�. int�� 0
	hash3[3000];

	cout << "hash3: ";
	for (iter2 = hash3.begin(); iter2 != hash3.end(); iter2++)
		cout << "[" << iter2->first << "," << iter2->second << "]" << ' ';
	cout << endl << endl;

	cout << "hash3 size : " << hash3.size() << endl;

	// string�� Ȯ��!
	unordered_map<int, string> hash4;
	hash4[1] = "Apple";
	hash4[2] = "Banana";
	hash4[3] = "Cheeze";

	unordered_map<int, string>::iterator iter3;

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// hash[key]�� �̿��ϸ� ������ �����մϴ�.
	hash4[3] = "Tomato";

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// insert�� �̹� key�� ����Ǿ� ������ ������ �Ұ��� �մϴ�.
	// ���� ������ ���� ������ ������ ���� �ʽ��ϴ�.
	hash4.insert(unordered_map<int, string>::value_type(3, "Grape"));
	hash4.insert(unordered_map<int, string>::value_type(4, "Grape"));

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// search ����� �� �ٸ� ����� �ֽ��ϴ�.
	// count�Դϴ�.

	if (hash4.count(4))
	{
		cout << hash4[4] << endl << endl;
	}
	else
	{
		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
	}

	// �̷��� �̾Ƽ� ����� �� �� �ֽ��ϴ�.
	auto item = hash4.find(3);
	if (item != hash4.end())
	{
		cout << "[" << item->first << "," << item->second << "]" << endl << endl;
	}
	else
	{
		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
	}

	// �Ʊ� hash[key]�� �ƹ��͵� �ȳ����� default�� �־����ٰ� ����
	// string�� Ȯ���غ��ô�.
	hash4[5];

	cout << "hash4: ";
	for (iter3 = hash4.begin(); iter3 != hash4.end(); iter3++)
		cout << "[" << iter3->first << "," << iter3->second << "]" << ' ';
	cout << endl << endl;

	// value�� �� ����µ� �̰��� key�� �����ɱ��?
	// key�� ������ �ǳ׿�. value�� null�� �����Ǵ� �� �����ϴ�.
	auto item2 = hash4.find(5);
	if (item2 != hash4.end())
	{
		cout << "[" << item2->first << "," << item2->second << "]" << endl << endl;
	}
	else
	{
		cout << "ã�� ���� ��Ҵ� ��Ŷ�� ���׿�." << endl << endl;
	}
	return 0;
}