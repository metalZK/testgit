#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main_·­×ª×Ö·û´®()
{
	char s[100] = "I am a student.";
	vector<string> vs;
	string tmp = s;
	char word[100][100] = {0};
	int m = 0;
	int n = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] == '.'))
		{
			word[m][n] = s[i];
			n++;
		}
		else
		{
			m++;
			n = 0;
		}
	}
	for (int i = m; i >= 0; i--)
	{
		cout << word[i] << " " ;
	}
	cout << endl;

	system("pause");
	return 0;
}

