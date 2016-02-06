/*
Write a program to check whether a given number is an ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

Note that 1 is typically treated as an ugly number.
*/

class Solution {
public:
    bool isUgly(int num) {
		int i;
		if (num == 0)
		    return false;
        else if (num < 0)
			return false;
		
		else{
			while (num%2 == 0){
				num = num/2;
				}
			
			for (i = 3; i <= sqrt(num); i = i+2){
				while (num%i == 0){
					if ( !(i == 2 || i == 3 || i == 5) )
						return false;
					num = num/i;
					}
				}
			}
			if (num == 1)
				return true;
			else if ( !(num == 2 || num == 3 || num == 5) )
				return false;
			else
				return true;
		}
};
