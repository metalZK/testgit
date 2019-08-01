#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

bool isRunNian(int y)
{
	if ((0 == y % 4 &&  y % 100!=0) || (0==y % 400))
		return true;
	else
		return false;
}

int main_今年的第几天()
{
	int year = 0, month = 0, day = 0;

	int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(cin >> year >> month >> day)
	{
		if (isRunNian(year))
		{
			month_days[1] = 29;
		}
		int sum = 0;
		for (int i = 0; i < month - 1; i++)
		{
			sum += month_days[i];
		}
		sum += day;

		cout << sum << endl;
	}
	
	system("pause");
	return 0;
}