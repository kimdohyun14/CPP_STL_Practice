#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	set<int>::iterator iter_lower;
	set<int>::iterator iter_upper;

	iter_lower = s.lower_bound(30);
	iter_upper = s.upper_bound(30);
	cout << "lower : " << *iter_lower << endl;
	cout << "upper : " << *iter_upper << endl << endl;

	iter_lower = s.lower_bound(10);
	iter_upper = s.upper_bound(10);
	cout << "lower : " << *iter_lower << endl;
	cout << "upper : " << *iter_upper << endl << endl;

	iter_lower = s.lower_bound(0);
	iter_upper = s.upper_bound(0);
	cout << "lower : " << *iter_lower << endl;
	cout << "upper : " << *iter_upper << endl << endl;

	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);
	cout << "lower : " << *iter_lower << endl;
	cout << "upper : " << *iter_upper << endl << endl;
	
	if (iter_lower != iter_upper)
		cout << "55가 set에 존재" << endl;
	else
		cout << "55가 set에 존재하지 않음" << endl;

	return 0;

}
