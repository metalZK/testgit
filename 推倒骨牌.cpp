//#define _CRT_SECURE_NO_WARNNINGS
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//int main()
//{
//	string str = ".L.R";
//
//		int i = 0;
//		int r = 0, l = 0;
//		while (str[i++] != '\0')
//		{
//			if (str[i] == 'L')
//			{
//				l = i;
//				break;
//			}
//		}
//		for (int i = r; i >=0; i--)
//		{
//			if (str[i] == 'R')
//			{
//				r = i;
//			}
//		}
//
//		if ((l-r+1) % 2 == 0)
//		{
//			for (int i = r; i <= (l - r) / 2; i++)
//			{
//				str[i] = 'R';
//			}
//			for (int i = (l - r) / 2 + 1; i < l; i++)
//			{
//				str[i] = 'L';
//			}
//		}
//
//		if ((l-r+1) % 2 != 0)
//		{
//			for (int i = r; i < (l - r) / 2; i++)
//			{
//				str[i] = 'R';
//			}
//			for (int i = (l - r) / 2 + 1; i < l; i++)
//			{
//				str[i] = 'L';
//			}
//		}
//
//		cout << str << endl;
//	
//	system("pause");
//	return 0;
//}