
//题目描述
//	请实现一个函数，功能为合并两个升序数组为一个升序数组
//	点击页面左下角“例2”，了解如何实现输入输出
//输入描述:
//输入有多个测试用例，每个测试用例有1-2行，每行都是以英文逗号分隔从小到大排列的数字
//输出描述:
//输出一行以英文逗号分隔从小到大排列的数组
//	示例1
//	输入
//	复制
//	1,5,7,9
//	2,3,4,6,8,10
//	输出
//	复制
//	1,2,3,4,5,6,7,8,9,10
//	说明
//备注:
//不允许使用原生的 sort、concat 等函数

#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <stack>
#include <set>
#include <vector>
using namespace std;

int main_合并排序数组()
{
	int tmp = 0;
	stack<int> s1, s2, ss1, ss2;

	while (cin >> tmp)
	{
		ss1.push(tmp);
		if (cin.get() == '\n')
		{
			break;
		}
	}
	while(!ss1.empty())
	{
		s1.push(ss1.top());
		ss1.pop();
	}

	while (cin >> tmp)
	{
		ss2.push(tmp);
		if (cin.get() == '\n')
		{
			break;
		}
	}
	while(!ss2.empty())
	{
		s2.push(ss2.top());
		ss2.pop();
	}

	vector<int> res;
	while (1)
	{
		if (!s1.empty() && !s2.empty())
		{
			int tmp = 0;
			if (s1.top() <= s2.top())
			{
				res.push_back(s1.top());
				s1.pop();
			}
			else 
			{
				res.push_back(s2.top());
				s2.pop();
			}
		}
		else if (s1.empty() && !s2.empty())
		{
			while (!s2.empty())
			{
				res.push_back(s2.top());
				s2.pop();
			}
		}
		else if (!s1.empty() && s2.empty())
		{
			while (!s1.empty())
			{
				res.push_back(s1.top());
				s1.pop();
			}
		}
		else{
			break;
		}

	}

	int cnt = 0;
	for (vector<int>::iterator it = res.begin(); it != res.end(); it++)
	{
		
		cout << *it ;
		if (cnt != res.size() -1)
		{
			cout << ",";
		}
		cnt++;
	}
	cout << endl;
	


	system("pause");
	return 0;
}