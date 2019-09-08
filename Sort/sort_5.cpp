#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) { // ������ ���ٸ�
		return a.second.second > b.second.second; // �� � �л��� ����.
	}
	else {
		return a.second.first > b.second.first; // ������ �� ���� ������
	}
}

int main() {
	vector<pair<string, pair<int, int>>> v;
	// ���� �̷���� Ŭ������ ���� �����ؼ� �����ϴ� ���� �� ������ �� �ִ�.
	v.push_back(pair<string, pair<int, int>>("�赵��", pair<int, int>(90, 19950208)));
	v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(97, 19930518)));
	v.push_back(pair<string, pair<int, int>>("���ѿ�", pair<int, int>(95, 19930203)));
	v.push_back(pair<string, pair<int, int>>("�̻��", pair<int, int>(90, 19921207)));
	v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(88, 19900302)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
	return 0;
}