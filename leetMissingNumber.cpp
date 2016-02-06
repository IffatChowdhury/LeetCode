/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int array[(int)nums.size() + 1];
		for(int i = 0; i < (int)nums.size() + 1; i++)
			array[i] = -1;
		for (vector <int> :: iterator it = nums.begin(); it != nums.end(); it++){
			array[*it] = *it;
			}
		
		for(int i = 1; i < (int)nums.size() + 1; i++){
			if (array[i] - array[i-1] != 1)
				return array[i-1] + 1;
			}
			
        return -1;  
    }
};
