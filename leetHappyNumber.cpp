/*
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
*/

class Solution {
public:
    bool isHappy(int n) {
		int sum = 0;
		vector <int> num_list;
		if (n == 1)
			return true;
		while (n && find (num_list.begin(), num_list.end(), n) == num_list.end()){
			std::vector<int>::iterator it;
			num_list.push_back(n);
			sum = 0;
			while (n != 0){
				int remainder = n % 10;
				n = n/10;
				sum += pow(remainder, 2);
				}
			
			if (sum == 1)
				return true;
			else
				n = sum;			
			}
		return false;
    }
};
