
//��Ŀ����
//	��ʵ��һ������������Ϊ�ϲ�������������Ϊһ����������
//	���ҳ�����½ǡ���2�����˽����ʵ���������
//��������:
//�����ж������������ÿ������������1-2�У�ÿ�ж�����Ӣ�Ķ��ŷָ���С�������е�����
//�������:
//���һ����Ӣ�Ķ��ŷָ���С�������е�����
//	ʾ��1
//	����
//	����
//	1,5,7,9
//	2,3,4,6,8,10
//	���
//	����
//	1,2,3,4,5,6,7,8,9,10
//	˵��
//��ע:
//������ʹ��ԭ���� sort��concat �Ⱥ���

#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <stack>
#include <set>
#include <vector>
using namespace std;

int main_�ϲ���������()
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