#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>

using namespace std;

bool divisibleBy3(int num)
{
	int res = 0;
	while (num >= 1)
	{
		res += num % 10;
		num = num / 10;
	}

	if (res % 3 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

//int main()
//{
//	int count = 0;
//	int a, b;
//	int arr[12] = {1, 12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789, 12345678910, 1234567891011, 123456789101112};
//	while (cin >> a >> b)
//	{
//		for (int i = a - 1; i <= b - 1; i++)
//		{
//			if (divisibleBy3(arr[i]))
//			{
//				count++;
//			}
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}



int main_±»3Õû³ý(){
	int left, right;
	int result = 0;

	cin >> left >> right;
	for(int i=left; i<=right; ++i){
		switch(i%3){
		case 1: ;break;
		case 2: ++result;break;
		case 0: ++result;break;
		}
	}
	cout << result << endl;
	return 0;
}