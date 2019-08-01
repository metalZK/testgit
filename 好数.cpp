#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <math.h>
using namespace std;

bool isGood(int x)
{
	int tmp[10];
	int n = 0;
	int m = x;
	while (x >= 1)
	{
		tmp[n] = x % 10;
		if (tmp[n] == 3 || tmp[n] == 4 || tmp[n] == 7)
		{
			return false;
		}
		x = x / 10;
		n++;
	}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << tmp[i] << endl;
	//}


	for (int i = 0; i < n; i++)
	{
		if (tmp[i] == 2)
		{
			tmp[i] = 5;
		}
			
		else if (tmp[i] == 5)
		{
			tmp[i] = 2;
		}
		else if (tmp[i] == 6)
		{
			tmp[i] = 9;
		}
		else if (tmp[i] == 9)
		{
			tmp[i] = 6;
		}
		else
		;

		
	}

	int res_num = 0;
	for (int i = n-1; i >= 0; i--)
	{
		res_num += tmp[i];
		res_num *= 10;
	}
	res_num /= 10;

	//cout << res_num << endl;

	if (res_num != m)
	{
		return true;
	}
	return false;
	
}

int main_ºÃÊý()
{
	int n;
	
	while (cin >> n)
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			if (isGood(i) == true)
			{
				count++;
				//cout << i << " ";
			}
		}
		cout << count << endl;
	}

	system("pause");
	return 0;
}


