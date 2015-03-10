#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int loopCounter, halfReverse = 0;
        int flag = 1;
        int size = (to_string(x)).size();
        if (size % 2 == 0){
            loopCounter = size / 2;
            flag = 0;
			}
        else
            loopCounter = size / 2 + 1;
		int exponent = loopCounter - 1;
        for(int i = 1; i <= loopCounter; i++){
            halfReverse = halfReverse + (x % 10) * pow(10, exponent);
            //cout << "halfReverse " << halfReverse << endl;
            exponent--;
            if( (flag == 1) && (i == loopCounter)){
                ;
				}
            else x = x / 10;
            //cout << "number " << number << endl;
			}

        if ( (x ^ halfReverse) == 0)
			return true;
        return false;
    }
};


int main(){
	int number;
    Solution ob;
    cout << "enter number";
    cin >> number;
    bool result = ob.isPalindrome(number);
    cout << "result  " << result << endl;
    return 0;
	}

