#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

int Fib1(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return Fib1(n - 1) + Fib1(n - 2);
}

int Fib2(int n)
{
	int Fib[100] = {0};
	Fib[0] = 0;
	Fib[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	return Fib[n];
}

int main_Ìø¸ñ×Ó()
{
	int num;
	while(cin >> num)
	{
		cout << Fib1(num + 1) << endl;
		cout << Fib2(num + 1) << endl;
	}
	cout << "hello..." << endl;
	system("pause");
	return 0;
}