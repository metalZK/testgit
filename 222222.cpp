#include <iostream>
#include <stack>
#include <string>
using namespace std;


stack<char> op;
stack<int> num;

int compute(char c, int n1, int n2){

	if (c == '+') return n2 + n1;
	if (c == '-') return n2 - n1;
}

int main！！！！(int argc, char const *argv[])
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size();){
		if (s[i] <= '9'&&s[i] >= '0') {
			if (s[i + 1] <= '9'&&s[i + 1] >= '0'){
				int n = (s[i] - '0') * 10 + s[i + 1] - '0';
				num.push(n);
				i = i + 2;
			}
			else if (s[i + 1] == '+' || s[i + 1] == '-' || int(s[i + 1]) == 0){
				int n = s[i] - '0';
				num.push(n);
				i++;
			}
		}

		else if (s[i] == '+' || s[i] == '-'){
			if (!op.empty()){
				char temp = op.top();
				int n1 = num.top(); num.pop();
				int n2 = num.top(); num.pop();
				int n3 = compute(temp, n1, n2);
				num.push(n3);
				op.pop();
				op.push(s[i]);
				i++;
			}
			else
			{
				op.push(s[i]);
				i++;
			}
		}
	}
	while (!op.empty()){
		int t = op.top(); op.pop();
		int t1 = num.top(); num.pop();
		int t2 = num.top(); num.pop();
		int t3 = compute(t, t1, t2);
		num.push(t3);
	}
	int n = num.top();
	std::cout << n << std::endl;

	return 0;
}