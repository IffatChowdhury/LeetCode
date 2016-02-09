/*
Given a non-negative number represented as an array of digits, plus one to the number.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        size_t size = digits.size();
        
        int carry = 1, sum = 0;
        for(int i = size - 1; i >= 0; i--){
			sum = carry + digits[i];
			result.push_back(sum % 10);
			carry = sum / 10;
			}
		if (carry != 0)
			result.push_back(carry);
		reverse(result.begin(), result.end());
        return result;
    }
};
