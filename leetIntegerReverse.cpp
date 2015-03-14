/*Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321*/



#include <iostream>
#include <vector>
#include <cmath>
#include <stdint.h>
#include <limits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
		int result = 0, i;
		vector<int> counter;
		
		int number = x;
		
		if(x < 0){
			number = (-1) * x;
			}
		while(number != 0){
			counter.push_back(number%10);
			number = number / 10;
			
			}
		int power = counter.size() - 1;
		
		for(i = 0; i < counter.size(); i++){
			int temp = counter[i] * pow(10, power);
			
			if ( (counter[i] != 0) && (temp / counter[i] != pow(10, power)) ){
				return 0;
				}
			result = result + temp;
			//cout << result << endl;
			if ( result < temp ){
				return 0;
				}
			power--; 
			}
		
		if(x < 0){
			result = (-1) * result;
			}
		return result;
    }
};


int main(){
	int result, input;
	Solution ob;
	cin >> input;
	result = ob.reverse(input);
	cout << "result " << result << endl;
	return 0;
	}
