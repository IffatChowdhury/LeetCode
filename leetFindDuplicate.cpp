/*
Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map <int, int> pairCount;
	for(int i = 0; i < (int) nums.size(); i++){
		if (pairCount.find(nums[i]) == pairCount.end()){ //not found
			pairCount.insert(pair<int, int>(nums[i], 1));
			}
		else{
			return nums[i];
			}
		}
	return -1;
    }
};
