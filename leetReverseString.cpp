/*Write a function that takes a string as input and returns the string reversed.

*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution 
{
public:
    string reverseString(string s) 
    {
		long sizeStr = (long) s.size() / 2;
		long i = 0, j = (long) s.size() - 1;
		for(; i < sizeStr; i++)
		{
			char c = s[i];
			s[i] = s[j];
			s[j] = c;
			j--;
		}
		return s;
    }
};

int main()
{
	Solution ob;
	string input = "hellos";
	string output = ob.reverseString(input);
	cout << output << endl;
	return 0;
}
