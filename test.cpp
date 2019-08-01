#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main__()
{
	string str;
	deque<char> qch;
	string tmp;
	string t;
	string numArr[100];
	int m = 0;
	int n = 0;
	while (cin >> str)
	{
		
		string tmp;
		string numArr[100];
		int m = 0;
		int n = 0;
		
		for (unsigned int i = 0; i < str.size(); i++)
		{
			if (isdigit(str[i]))
			{
				tmp = str[i];
				t.append(tmp);
				
				if (isdigit(str[i+1]))
				{
					tmp = str[i+1];
					t.append(tmp);
				}
				

				
			}

		}



	}
	return 0;
}