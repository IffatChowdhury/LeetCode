/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <ctype.h>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(string s) 
    {
		if ((long) s.size() == 0)
			return true;
		long i = 0, j = (long) s.size() - 1;
		while(i < j)
		{
			//cout << "tupa" << endl;
			if (isalnum(s[i]) && isalnum(s[j]))
			{
				if (toupper(s[i]) != toupper(s[j]))
					return false;
				else
				{
					i++; j--;
				}
			}
			else if (!(isalnum(s[i])))
				i++;
			else if (!(isalnum(s[j])))
				j--;
			
		}
		return true;
    }
};

int main()
{
	Solution ob;
	string input = "A man, a plan, a canal: Panama";
	bool output = ob.isPalindrome(input);
	cout << output << endl;
	return 0;
}
