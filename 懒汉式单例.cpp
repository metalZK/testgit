﻿
#include <iostream>
using namespace std;


//懒汉式
class Singelton
{
private:
	Singelton()
	{
		cout << "Singelton 构造函数执行" << endl;
	}
public:
	static Singelton *getInstance()
	{
		if (m_psl == NULL)
		{
			m_psl = new Singelton;
		}
		return m_psl;
	}

	static void FreeInstance()
	{
		if (m_psl != NULL)
		{
			delete m_psl;
			m_psl = NULL; 
		}
	}

private:
	static Singelton *m_psl;
};

Singelton *Singelton::m_psl = NULL;


void main041()
{

	Singelton *p1 = Singelton::getInstance();
	Singelton *p2 = Singelton::getInstance();

	if (p1 == p2)
	{
		cout << "是同一个对象" << endl;
	}
	else
	{
		cout << "不是同一个对象" << endl;
	}
	Singelton::FreeInstance();


	return ;
}

void main__懒汉式单例()
{
	main041();

	system("pause");
}
