/*Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 */



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
	
    int titleToNumber(string s) {
        //cout << (int)s[0] << endl;
        unsigned long int result = 0;
        if (s.length() == 1){
			result = s[0] - 64;
			return result;
		}
		
		else{
			int size = s.length(), i;
			for(i = 0; i < s.length() - 1; i++){
				result += pow('Z' - 64, i + 1);
				//cout << result << endl;
				result += (s[i] - 'A') * pow('Z' - 64, size - 1);
				//cout << result << endl;
				size--;
				}
			result += s[i] - 64;
			return result;
			}
			
		
    }
};


int main(){
	string str;
	cout << "Enter string" << endl;
	cin >> str;
	Solution ob;
	int result = ob.titleToNumber(str);
	cout << result << endl;
	return 0;
	}
