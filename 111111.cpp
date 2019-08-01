#include <iostream>
#include <cstdio>
#include <cstring> 
#include <cstdlib>
const int  SIZE = 100; 
const int  ADDSIZE = 5; 
using namespace std;
const int INF = -0xfffffff;

struct Strack
{
	char *top;
	char *base;
	int strackSize;
	void init()
	{
		base = (char *)malloc(SIZE * sizeof(char));
		top = base;
		strackSize = SIZE;
	}

	char Top()
	{
		if (top == base)
			return INF;
		return *(top - 1);
	}

	bool pop()
	{
		if (top == base)
			return false;
		top--;
		return true;
	}

	void push(char x)
	{
		if (isPull()) {
			base = (char *)realloc(base, (strackSize + ADDSIZE)*(sizeof(T)));
			top = base + strackSize;
			strackSize += ADDSIZE;
		}
		*top++ = x;
	}

	bool isEmpty()
	{
		if (top == base)
			return true;
		return false;
	}

	bool isPull()
	{
		if (top - base == strackSize)
			return true;
		else
			return false;
	}
};

int compareNumber(char x)
{
	if (x == '+' || x == '-')
		return 0;
	return -1;
}

void change(char *mid, char *suxfix)  
{
	int i = 0, len = strlen(mid), mid_index = 0;
	char c;
	Strack intElements;
	intElements.init();
	intElements.push('#');
	while (i < len)
	{
		if (mid[i] == '+' || mid[i] == '-' )
		{
			while (compareNumber(intElements.Top()) >= compareNumber(mid[i]))
			{
				suxfix[mid_index++] = intElements.Top();
				suxfix[mid_index++] = ' ';
				intElements.pop();
			}
			intElements.push(mid[i]);
			i++;
		}
		else if (mid[i] >= '0'&&mid[i] <= '9')
		{
			while (mid[i] >= '0'&&mid[i] <= '9')
			{
				suxfix[mid_index++] = mid[i];
				i++;
			}
			suxfix[mid_index++] = ' ';
		}
		else
		{

		}
	}
	while (intElements.Top() != '#') {
		suxfix[mid_index++] = intElements.Top();
		suxfix[mid_index++] = ' ';
		intElements.pop();
	}
	suxfix[mid_index] = 0;
}

double countSuxfix(char *suxfix)
{
	int len = strlen(suxfix);
	double x;
	Strack <int >intElements;
	intElements.init();
	int i = 0;
	while (i<len) {
		if (suxfix[i] == ' ')
		{
			i++;
			continue;
		}
		switch (suxfix[i])
		{
		case '+':
			x = intElements.Top();
			intElements.pop();
			x = intElements.Top() + x;
			intElements.pop(); i++;
			break;
		case '-':
			x = intElements.Top();
			intElements.pop();
			x = intElements.Top() - x;
			intElements.pop();
			i++;
			break;

		default:
			{
				x = 0;
				while (suxfix[i] >= '0'&&suxfix[i] <= '9') {
					x = x * 10 + suxfix[i] - '0';
					i++;
				}
			}
		}

		intElements.push(x);
	}
	return intElements.Top();
}
int main________()
{
	char str[1000];
	char newStr[1000];
	while(cin >> str)

	{
		change(str, newStr);

		cout << countSuxfix(newStr) << endl;
	}

	return 0;

}