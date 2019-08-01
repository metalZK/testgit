#define _CRT_SECURE_NO_WARNNINGS
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBack(string s)
{
	stack<char> sc;
	for (int i = 0; i < s.length(); i++)
	{
		sc.push(s[i]);
	}
	string new_s = "";
	for (int i = 0; i < s.length(); i++)
	{
		new_s += sc.top();
		sc.pop();
	}
	if (s == new_s)
	{
		return true;
	}
	return false;
}


void getAllSubstrings(std::string str){
	if(str.size()==0)
		return;
	else{
		for(int i=0;i<str.size();i++){
			for(int j=1;j<str.size()-1;j++){
				std::cout<<str.substr(i,i+j)<<std::endl;

			}
		}     
	}
}


int main_最长回文子串()
{
	getAllSubstrings("abc");
	cout << "hello..." << endl;
	system("pause");
	return 0;
}