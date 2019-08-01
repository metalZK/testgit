
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

typedef struct data
{
	int first;
	int second;
	data()
	{
		first = 0;
		second = 0;
	}
}data_my;

int min(int a, int b)
{
	if (a <= b)
		return a;
	else
		return b;
}

int main____()
{
	string test;

	getline(cin, test);

	data_my save[26];
	//save.reserve(26);
	int length = test.size();

	for (int i = 0; i < length; i++)
	{
		if (test[i] >= 'a'&&test[i] <='z')
		{
			save[test[i] - 'a'].first++;
		}
		if (test[i] >= 'A'&&test[i] <= 'Z')
		{
			save[test[i] - 'A'].second++;
		}
	}
	int symble= 0;
	for (int i = 0; i < 26; i++)
	{
		int min_size = min(save[i].first, save[i].second);
		for (int j = 0; j < min_size; j++)
		{
			cout << char('A' + i) << char('a' + i);
			symble = 1;
		}
	}
	if (symble == 0)
	{
		cout << "Not Found" ;
	}
	cout << endl;

	return 0;
}
