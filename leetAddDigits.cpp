/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
Without using loop / recursion, just use n - 9 floor( (n-1)/9 )
*/

class Solution {
public:
    int addDigits(int num) {
		int sum = 0;
        while (true){
			while(num != 0){
				sum += num % 10;
				num /= 10; 
				}
			if (sum <= 9 && sum >= -9)
				return sum;
			num = sum;
			sum = 0;
			}
    }
};
