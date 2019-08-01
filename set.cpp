#include <iostream>
#include <string>
#include<set>
#include <algorithm>


using namespace std;

struct A 
{
	int no;
	string name;
	bool operator < (const A &a) const // 重载“<”操作符，自定义排序规则
	{
		//按score由大到小排序。如果要由小到大排序，使用“>”即可。
		return a.no < no;
	}
};

int main_set()
{
	A a1, a2, a3;
	a1.no = 1; a2.no = 2; a3.no = 3;
	a1.name = "a1"; a2.name = "a2"; a3.name = "a3";

	set<int> s;                //创建一个int类型的set

	s.insert(10);                //插入数据
	s.insert(30);
	s.insert(20);
	s.insert(40);                

	//遍历数据，用迭代器遍历数据
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)    
	{
		cout << *it << endl;
		int tmp = (*it);
		cout << tmp << endl << endl;
	}
	//这里用到了set中的元素已经从小到大排好序的性质

	set<int>::iterator result = find(s.begin(), s.end(), 30);

	if (result != s.end()){
		cout << "find:"  << "\t"<< *result << endl;
	}
	else{
		cout << "not found" << endl << endl;
	}
	


	set<A> aa;
	aa.insert(a1);
	aa.insert(a2);
	aa.insert(a3);

	for (set<A>::iterator it = aa.begin(); it != aa.end(); ++it)    
	{
		cout << (*it).no << endl;
		cout << (*it).name << endl << endl;

	}
	return 0;
}



