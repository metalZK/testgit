#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main_¾ØÕó²éÊý()
{

	int m, n;
	int val;
	cin >> m >> n;
	vector<vector<int>> matrix(m, vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];

		}
	}
	cin >> val;

	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] == val)
			{
				cout << "true" << endl;
				count++;
			}

		}
	}
	if (count == (m-1)*(n-1))
	{
		cout << "false" << endl;
	}

	system("pause");
	return 0;
}