/*Given an array of integers, every element appears three times except for one. 
Find that single one. */


#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
		map<int, int> mapping;
		for(int i = 0; i < n; i++){
			mapping[A[i]] += 1;
			//cout << mapping[A[i]] << " " << A[i] << endl;
			}
		for(int i = 0; i < n; i++){
			if ( mapping[A[i]] == 1)
				return A[i];
			}
		return -1;
    }
};


int main(){
	//int array[] = {2,3,4,4,3,6,2};
	int array[] = {2, 3, 4, 4, 6, 6, 2, 5, 5, 2, 4, 6, 5};
	Solution ob;
	int result = ob.singleNumber(array, sizeof(array)/sizeof(array[0])); 
	cout << result << endl;
	return 0;
	}

