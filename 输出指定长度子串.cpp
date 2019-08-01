#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main_输出指定长度子串()
{
	string str;
	while (cin >> str)
	{
		int num;
		cin >> num;
		if (str.length() < num)
		{
			cout << "-1" << endl;
			return -1;
		}

		vector<string> vs;
		for (int i = 0; i < str.length() - num + 1; i++)
		{
			string tmp = "";
			int k = 0;
			for (int j = i; j < i + num; j++)
			{
				tmp  += str[j];
			}
			vs.push_back(tmp);
		}

		for (vector<string>::iterator it = vs.begin(); it != vs.end(); it++)
		{
			cout << *it << " " ;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}