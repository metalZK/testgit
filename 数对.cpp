#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

int main_Êý¶Ô()
{
	int n, k;
	int count = 0;
	while (cin >> n >> k)
	{
		for (int x = 1; x <= n; x++)
		{
			for (int y = 1; y <= n; y++)
			{
				if (x % y >= k)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}