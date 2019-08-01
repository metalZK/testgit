#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <set>

using namespace std;

int main__表达式求值()
{
	int a, b, c;
	int n[6];
	while (cin >> a >> b >> c)
	{

		set<int> s;
		s.insert(a + b * c);
		s.insert(a * (b + c));
		s.insert(a * b * c);
		s.insert((a + b) * c);
		s.insert(a + b + c);
		s.insert(a * b + c);

		set<int>::reverse_iterator it = s.rbegin();
		
		cout << *it << endl;
		
	}


	
	return 0;
}