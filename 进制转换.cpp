#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string intToA(int n,int radix)    //n�Ǵ�ת���֣�radix��ָ���Ľ���
{
	string ans="";
	do{
		int t=n%radix;
		if(t>=0&&t<=9)	ans+=t+'0';
		else ans+=t-10+'a';
		n/=radix;
	}while(n!=0);	//ʹ��do{}while�����Է�ֹ����Ϊ0�����
	reverse(ans.begin(),ans.end());
	return ans;	
}

int main()
{
	int n, radix;

	while(cin >> n >> radix)
	{
		int count = 0;
		string str = intToA(n, radix);
		//for (int i = 0; i < str.length(); i++)
		//{
		//	if (str.at(i) == '1')
		//	{
		//		count++;
		//	}
		//}
		cout << str << endl;
	}


	return 0;
}
