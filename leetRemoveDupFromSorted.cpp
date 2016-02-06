/*
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       size_t size = nums.size();
        if (size == 0)
			return 0;
        int newLength = 1;
        
        for(int i = 1; i < (int) size; i++){
			
			if (nums[i] != nums[i - 1]){
				nums[newLength] = nums[i];
				newLength++;
				}
			}
		return newLength;
    }
};
