/*Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.*/

#include <iostream>
#include <stdint.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
		int result = 0;
		uint32_t mask = 0X80000000;
		for(int i = 0; i < 32; i++){
			uint32_t temp = n << 31;
			if ( (temp ^ mask) == 0)
				result++;
			n = n >> 1;
			}
		return result;
    }
};

int main(){
	uint32_t number;
	cout << "enter number" << endl;
	cin >> number;
	Solution ob;
	int result = ob.hammingWeight(number);
	cout << result << endl;	
	return 0;
	}
