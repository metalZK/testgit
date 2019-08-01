#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;



int main_ÕûÊýµ¹Ðò()
{
	string num;
	while (cin >> num)
	{
		
		deque<char> dq;
		for (int i = 0; i < num.length(); i++)
		{
			dq.push_back(num[i]);
		}

		if (dq.front() == '-')
		{
			dq.pop_front();
			dq.push_back('-');
		}
		while(!dq.empty())
		{
			cout << dq.back();
			dq.pop_back();
		}



	}
	
	system("pause");
	return 0;
}