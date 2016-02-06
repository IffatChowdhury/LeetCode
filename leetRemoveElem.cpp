/*
Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t size = nums.size();
        int newLength = 0;
        for(int i = 0; i < (int) size; i++){
			if (nums[i] != val){
				nums[newLength] = nums[i];
				newLength++;
				}
			}
		return newLength;
    }
};
