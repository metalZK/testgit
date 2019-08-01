#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>

using namespace std;

int main_×Ö·û´®Ïà³Ë()
{
	string s1, s2;
	cin >> s1 >> s2;
	char* end;
	long num1 = strtol(s1.c_str(), &end, 10);
	long num2 = strtol(s2.c_str(), &end, 10);
	cout << num1 * num2 << endl; 

	
	system("pause");
	return 0;
}