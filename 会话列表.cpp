#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <hash_set>
#include <vector>
#include <algorithm>
using namespace std;

int main_会话列表()
{
	int t_num;

	while (cin >> t_num)
	{
		int n;
		
		
		vector<hash_set<int>> vhst;
		for (int i = 0; i < t_num; i++)
		{
			vector<int> v;
			hash_set<int> hst;
			int tmp_in;
			cin >> n;
			
			for (int j = 0; j < n; j++)
			{
				cin >> tmp_in;
				v.push_back(tmp_in);
			}
			reverse(v.begin(), v.end());
			for (int i = 0; i < n; i++)
			{
				hst.insert(v[i]);
			}

			vhst.push_back(hst);


		}
		for (int i = 0; i < t_num; i++)
		{
			for (hash_set<int>::iterator it = vhst[i].begin(); it != vhst[i].end(); it++)
			{
				cout << *it << " ";
			}
			cout << endl;
		}

	}

	return 0;
}