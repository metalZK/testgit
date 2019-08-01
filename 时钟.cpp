#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>

using namespace std;

string change(string &str)
{
	if (str.at(0) - '0' > 2)
	{
		str.at(0) = '0';
	}
	if (str.at(0) - '0' == 2)
	{
		if (str.at(1) - '0' > 3)
		{
			str.at(0) = '0';
		}
	}
	if(str.at(3) - '0' > 5)
	{
		str.at(3) = '0';
	}
	if(str.at(6) - '0' > 5)
	{
		str.at(6) = '0';
	}
	return str;
}

int main__Ê±ÖÓ()
{
	int cnt;
	
	while (cin >> cnt)
	{
		string timeStr[128];
		for (int i = 0; i < cnt; i++)
		{
			cin >> timeStr[i];
		}

		for (int i = 0; i < cnt; i++)
		{
			cout << change(timeStr[i]) << endl;
		}

	}
	//string s1 = "92:88:73";
	//cout << change(s1) << endl;
	cout << "hello..." << endl;
	system("pause");
	return 0;
}