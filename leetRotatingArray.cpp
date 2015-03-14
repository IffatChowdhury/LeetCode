/*Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].*/

#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
		int save, m;
		for(int i = 0; i < k; i++){
			save = nums[n-1];
			for(int j = n - 1; j > 0; j--){
				nums[j] = nums[j - 1];
				}
			nums[0] = save;
			}
		/*for(m = 0; m < n; m++){
			cout << nums[m] << " ";
			}*/
    }
};


int main(){
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int steps;
	cout << "enter steps" << endl;
	cin >> steps;
	Solution ob;
	ob.rotate(array, sizeof(array)/sizeof(array[0]), steps);
	//cout << "size " << sizeof(array)/sizeof(array[0]) << endl;
	return 0;
	}
