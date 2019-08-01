#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
using namespace std;

//bool isInclude(string org, string des)
//{
//	int i = 0;
//	for (; i < org.length(); i++)
//	{
//		if (org.at(i) == des.at(0))
//		{
//			break;
//		}
//	}
//
//	for (int j = 0; j < des.length(); j++)
//	{
//		if (org.at(i++) != des.at(j))
//		{
//			return false;
//		}
//
//	}
//	return true;
//
//}

int main__×Ö·û´®°üº¬()
{
	string org, des;
	while (cin >> org >> des)
	{
		if (org.find(des) != org.npos || des.find(org) != org.npos)
		{
			cout << "1" << endl;
		}
		else{
			cout << "0" << endl;
		}
	}
	return 0;

}