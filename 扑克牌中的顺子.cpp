/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ��κ���
//==================================================================

// ������61���˿��Ƶ�˳��
// ��Ŀ�����˿����������5���ƣ��ж��ǲ���һ��˳�ӣ�����5�����ǲ��������ġ�
// 2��10Ϊ���ֱ���AΪ1��JΪ11��QΪ12��KΪ13������С�����Կ����������֡�
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool IsContinuous(int* numbers, int length)
{
	if(numbers == nullptr || length < 1)
		return false;

	int hashTable[14] = {0};
	for (int i = 0; i < length; i++)
	{
		hashTable[numbers[i]]++;
	}

	for (int i = 1; i <= 14; i++)
	{
		if (hashTable[i] > 1)
		{
			return false;
		}
	}

	int numberOfZero = hashTable[0];
	int count = 0;

	int index = 1;
	while (index < 14)
	{
		if (hashTable[index] == 1)
		{
			break;
		}
		index++;
	}

	int cnt = 0;
	while (count < 5 - numberOfZero)
	{
		cnt++;
		if (hashTable[index++] == 1)
		{
			count++;
		}
	}

	int numOfGap = cnt - count;

	if (numberOfZero >= numOfGap)
	{
		return true;
	}
	else{
		return false;
	}
}


// ====================���Դ���====================
static void Test(const char* testName, int* numbers, int length, bool expected)
{
	if(testName != nullptr)
		printf("%s begins: ", testName);

	if(IsContinuous(numbers, length) == expected)
		printf("Passed.\n");
	else
		printf("Failed.\n");
}

static void Test1()
{
	int numbers[] = { 1, 3, 2, 5, 4 };
	Test("Test1", numbers, sizeof(numbers) / sizeof(int), true);
}

static void Test2()
{
	int numbers[] = { 1, 3, 2, 6, 4 };
	Test("Test2", numbers, sizeof(numbers) / sizeof(int), false);
}

static void Test3()
{
	int numbers[] = { 0, 3, 2, 6, 4 };
	Test("Test3", numbers, sizeof(numbers) / sizeof(int), true);
}

static void Test4()
{
	int numbers[] = { 0, 3, 1, 6, 4 };
	Test("Test4", numbers, sizeof(numbers) / sizeof(int), false);
}

static void Test5()
{
	int numbers[] = { 1, 3, 0, 5, 0 };
	Test("Test5", numbers, sizeof(numbers) / sizeof(int), true);
}

static void Test6()
{
	int numbers[] = { 1, 3, 0, 7, 0 };
	Test("Test6", numbers, sizeof(numbers) / sizeof(int), false);
}

static void Test7()
{
	int numbers[] = { 1, 0, 0, 5, 0 };
	Test("Test7", numbers, sizeof(numbers) / sizeof(int), true);
}

static void Test8()
{
	int numbers[] = { 1, 0, 0, 7, 0 };
	Test("Test8", numbers, sizeof(numbers) / sizeof(int), false);
}

static void Test9()
{
	int numbers[] = { 3, 0, 0, 0, 0 };
	Test("Test9", numbers, sizeof(numbers) / sizeof(int), true);
}

static void Test10()
{
	int numbers[] = { 0, 0, 0, 0, 0 };
	Test("Test10", numbers, sizeof(numbers) / sizeof(int), true);
}

// �ж���
static void Test11()
{
	int numbers[] = { 1, 0, 0, 1, 0 };
	Test("Test11", numbers, sizeof(numbers) / sizeof(int), false);
}

// ³���Բ���
static void Test12()
{
	Test("Test12", nullptr, 0, false);
}

int main_�˿����е�˳��(int argc, char* argv[])
{
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
	Test6();
	Test7();
	Test8();
	Test9();
	Test10();
	Test11();
	Test12();

	return 0;
}

