/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.*/

#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
		int top = -1;
		char arr[100];
		for(int i = 0; i < s.length(); i++){
			if (s[i] == '(' || s[i] == '{' || s[i] == '['){
				top++; arr[top] = s[i];
				}
			else if(s[i] == ')'){
				if (arr[top] == '(')
					top--;
				else
					return false;
				}
			else if(s[i] == '}'){
				if (arr[top] == '{')
					top--;
				else
					return false;
				}
			else if(s[i] == ']'){
				if (arr[top] == '[')
					top--;
				else
					return false;
				}
			else
				return false;
			}// end for
		if (top == -1)
			return true;
		else
			return false;
    }
};

int main(){
	string paren;
	cout << "Enter string" << endl;
	cin >> paren;
	Solution ob;
	bool result = ob.isValid(paren); 
	cout << result << endl;
	return 0;
	}
