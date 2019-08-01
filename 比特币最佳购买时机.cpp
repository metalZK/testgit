#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

int main_±ÈÌØ±Ò¹ºÂò()
{
	int num;
	int arr[100] = {0};
	int len = 0;

	while (cin >> num)
	{		
		arr[len++] = num;
		if (getchar() == '\n')
		{
			break;
		}
	}

	int max = 0;
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			int tmp = arr[j] - arr[i];
			if (tmp > max)
			{
				max = tmp;
			}
		}
	}
	cout << max << endl;



	
	return 0;
}