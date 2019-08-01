#include <iostream>

using namespace std;

class Animal 
{
public:
	virtual void  cry() = 0; 
};

class Dog : public Animal 
{
public:
	virtual void  cry()
	{
		cout << "wangwang " << endl;
	}
	
	void doSwim()  
	{ 
		cout << "我要狗爬" << endl; 
	}
};

class Cat : public Animal
{
public:
	virtual void  cry()
	{
		cout << "miaomiao " << endl;
	}
	void doTree()  
	{ 
		cout << "我要爬树" << endl; 
	}
	  
};

class Book
{
public:
	void printP()
	{
		cout << price << endl;
	}
	
private:
	int price;
	
};
  
void ObjPlay(Animal *base)
{
	base->cry();
	Dog *pDog = dynamic_cast<Dog *>(base);
	if (pDog != NULL)
	{
		pDog->cry();
		pDog->doSwim();
	}
	  
	Cat *pCat = dynamic_cast<Cat *>(base);
	if (pCat != NULL)
	{
		pCat->cry();
		pCat->doTree();
	}
}
void main__07()
{
	Animal *base = NULL;
	  
	//1 可以把子类指针赋给 父类指针 但是反过来是不可以的 需要 如下转换
	//pdog = base;  
	Dog *pDog = static_cast<Dog *> (base);
	  
	//2 把base转换成其他 非动物相关的 err
	//Book *book= static_cast<Book *> (base);
	  
	//3  reinterpret_cast //可以强制类型转换
	Book *book2= reinterpret_cast<Book *> (base);
	  
	//4 dynamic_cast用法
	ObjPlay(new Cat());
	//ObjPlay(new Dog());
	cout << endl;
	ObjPlay(new Dog());
	system("pause");
}