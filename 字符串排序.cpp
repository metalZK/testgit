#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main_×Ö·û´®ÅÅÐò()
{
	int num = 0;
	while (cin >> num)
	{
	    multiset<int> s;
		string str = "boyxx213456";
		for (int i = 0; i < num; i++)
		{
			cin >> str;

			int len = str.length();
			int tmp = 0;
			for (int i = len - 6; i < len; i++)
			{
				tmp *= 10;
				tmp += char(str[i]) - '0';		
			}
			s.insert(tmp);
		}

		for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
		{
			cout << *it << endl;
		}
	}
	
	system("pause");
	return 0;
}