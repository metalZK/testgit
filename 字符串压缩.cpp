//
//��Ŀ����
//	���ַ�������RLEѹ���������ڵ���ͬ�ַ����ü���ֵ���ַ�ֵ�����档���磺aaabccccccddeee�������3a1b6c2d3e�����档
//
//��������:
//����Ϊa-z,A-Z���ַ��������ַ�����Ϊ�գ���aaabccccccddeee
//�������:
//ѹ������ַ�������3a1b6c2d3e
//	ʾ��1
//	����
//	����
//	aaabccccccdd
//	���
//	����
//	3a1b6c2d
//
#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main_�ַ���ѹ��()
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
		 new_end = unique(vc.begin(),vc.end());    //"ɾ��"���ڵ��ظ�Ԫ��

		vc.erase(new_end,vc.end());  //ɾ����������ɾ�����ظ���Ԫ��

		for (vector<char>::iterator it = vc.begin(); it != vc.end(); it++)
		{
			cout << hash_table[*it] << *it ;
		}
		cout << endl;



	}
	system("pause");
	return 0;
}