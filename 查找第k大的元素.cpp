#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main_第k个最大的元素()
{
	vector<int> v;
	int num;
	while (cin >> num)
	{
		v.push_back(num);
		if (getchar() == '\n')
		{
			break;
		}
	}
	sort(v.begin(), v.end());

	int count = 0;

	//for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	//{

	//		cout << *it << endl;

	//}

	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		if (count == 2)
		{
			cout << *it << endl;
			break;
		}
		count++;
	}



	
	system("pause");
	return 0;
}