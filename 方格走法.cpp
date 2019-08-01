#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

int move(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return 0;
	}
	if (x == 1 && y > 0)
	{
		return y + 1;
	}
	if (x > 0 && y == 1)
	{
		return x + 1;
	}
	return move(x - 1, y) + move(x, y - 1);
}

int main_×ß·½¸ñ()
{
	int x, y;
	while(cin >> x >> y)
	{
		cout << move(x, y) << endl;
	}
	
	system("pause");
	return 0;
}