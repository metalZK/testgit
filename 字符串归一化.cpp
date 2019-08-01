#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
using namespace std;

int main__×Ö·û´®¹éÒ»»¯()
{
	
	string str;

	while (cin >> str)
	{
		int hash_table[26] = {0};
        int len = str.length();
		for (int i = 0;i < len; i++)
		{
			hash_table[str[i] - 'a']++;
		}
		int i = 0;
		for (int i = 0; i < 26; i++)
		{
			if (hash_table[i] != 0)
			{
				cout << char(i+'a') << hash_table[i];
			}
		}
		
			
		
		cout << endl;
	}
	system("pause");
	return 0;
}