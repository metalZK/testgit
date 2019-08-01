#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <bitset>
#include <cstdlib>
using namespace std;

unsigned int bin2int (std::string strBin)
{
	unsigned int i = 0;
	const char *pch = strBin.c_str();
	while (*pch == '0' || *pch == '1') {
		i <<= 1;
		i |= *pch++ - '0';
	}

	return i;
}
int main_×Ö·û´®¼Ó·¨()
{
	string num1, num2;
	while (cin >> num1 >> num2)
	{
		unsigned int n1 = bin2int(num1);
		unsigned int n2 = bin2int(num2);
		unsigned int n = n1 + n2;
		
		char num[100];
		itoa(n, num, 2);
		cout << num << endl;
	}
	system("pause");
	return 0;
}