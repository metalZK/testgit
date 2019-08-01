#include <iostream>
#include <string>
#include<set>
#include <algorithm>


using namespace std;

struct A 
{
	int no;
	string name;
	bool operator < (const A &a) const // ���ء�<�����������Զ����������
	{
		//��score�ɴ�С�������Ҫ��С��������ʹ�á�>�����ɡ�
		return a.no < no;
	}
};

int main_set()
{
	A a1, a2, a3;
	a1.no = 1; a2.no = 2; a3.no = 3;
	a1.name = "a1"; a2.name = "a2"; a3.name = "a3";

	set<int> s;                //����һ��int���͵�set

	s.insert(10);                //��������
	s.insert(30);
	s.insert(20);
	s.insert(40);                

	//�������ݣ��õ�������������
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)    
	{
		cout << *it << endl;
		int tmp = (*it);
		cout << tmp << endl << endl;
	}
	//�����õ���set�е�Ԫ���Ѿ���С�����ź��������

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



