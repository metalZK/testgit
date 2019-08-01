//题目描述
//	小易有一个古老的游戏机，上面有着经典的游戏俄罗斯方块。因为它比较古老，所以规则和一般的俄罗斯方块不同。
//	荧幕上一共有 n 列，每次都会有一个 1 x 1 的方块随机落下，在同一列中，后落下的方块会叠在先前的方块之上，当一整行方块都被占满时，这一行会被消去，并得到1分。
//	有一天，小易又开了一局游戏，当玩到第 m 个方块落下时他觉得太无聊就关掉了，小易希望你告诉他这局游戏他获得的分数。
//输入描述:
//第一行两个数 n, m
//	第二行 m 个数，c1, c2, ... , cm ， ci 表示第 i 个方块落在第几列
//	其中 1 <= n, m <= 1000, 1 <= ci <= n
//输出描述:
//小易这局游戏获得的分数
//	示例1
//	输入
//	复制
//	3 9
//	1 1 2 2 2 3 1 2 3
//	输出
//	复制
//	2

#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <set>

using namespace std;


void bubbleSort (int arr[], int len) {
	int temp;
	int i, j;
	for (i=0; i<len-1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
		for (j=0; j<len-1-i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
			if (arr[j] > arr[j+1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
}


int main__俄罗斯方块()
{
	int m, n;
	while (cin >> n >> m)
	{
		int *hash_table = new int[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			hash_table[i] = 0;
		}

		int *input = new int[m];
		for (int i = 0; i < m; i++)
		{
			input[i] = 0;
		}

		for (int i = 0; i < m; i++)
		{
			cin >> input[i];
		}

		int count = 0;
		for (int i = 0; i < m; i++)
		{
			hash_table[input[i]]++;
		}

		set<int> s;
		for (int i = 1; i < n + 1; i++)
		{
			s.insert(hash_table[i]);		
		}

		set<int>::iterator it = s.begin();
		cout << *it << endl;
		//bubbleSort(hash_table, n+1);
		//cout << hash_table[1] << endl;
	}

	return 0;
}