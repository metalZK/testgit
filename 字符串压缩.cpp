//
//题目描述
//	对字符串进行RLE压缩，将相邻的相同字符，用计数值和字符值来代替。例如：aaabccccccddeee，则可用3a1b6c2d3e来代替。
//
//输入描述:
//输入为a-z,A-Z的字符串，且字符串不为空，如aaabccccccddeee
//输出描述:
//压缩后的字符串，如3a1b6c2d3e
//	示例1
//	输入
//	复制
//	aaabccccccdd
//	输出
//	复制
//	3a1b6c2d
//
#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main_字符串压缩()
{

	string str;

	while (cin >> str)
	{
		int hash_table[256] = {0};
		int len = str.length();
		for (int i = 0;i < len; i++)
		{
			hash_table[str[i]]++;
		}
		
		vector<char> vc;
		for (int i = 0; i < str.length(); i++)
		{
			vc.push_back(str[i]);
		}

		vector<char>::iterator new_end;
		 new_end = unique(vc.begin(),vc.end());    //"删除"相邻的重复元素

		vc.erase(new_end,vc.end());  //删除（真正的删除）重复的元素

		for (vector<char>::iterator it = vc.begin(); it != vc.end(); it++)
		{
			cout << hash_table[*it] << *it ;
		}
		cout << endl;



	}
	system("pause");
	return 0;
}