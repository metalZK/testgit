#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
using namespace std;

int main__ÕÒ·½Ïò()
{
	int times;
	string s;
	
	while (cin >> times >> s)
	{
		int count = 0;
		for (int i = 0; i < times; i++)
		{
			if (s[i] == 'L')
			{
				count--;
			}
			if (s[i] == 'R')
			{
				count++;
			}
		}
		if (count >= 0)
		{
			switch (count % 4)
			{
			case 0: cout << "N" << endl;
				break;
			case 1: cout << "E" << endl;
				break;
			case 2: cout << "S" << endl;
				break;
			case 3: cout << "W" << endl;
				break;
			default:cout << "err" << endl;
			}
		}
		if (count < 0)
		{
			switch (abs(count) % 4)
			{
			case 0: cout << "N" << endl;
				break;
			case 1: cout << "W" << endl;
				break;
			case 2: cout << "S" << endl;
				break;
			case 3: cout << "E" << endl;
				break;
			default:cout << "err" << endl;
			}
		}

	}
	
	system("pause");
	return 0;
}