/*Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?*/


#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
	vector<int> getRow(int rowIndex) {
        vector <int> pascal;
        vector <int> temp;
        for(int i = 0; i < rowIndex + 1; i++){
			pascal.clear();
			for(int j = 0; j < (i + 1); j++){
				if(j == 0 || j == i){
					pascal.push_back(1);
					}
				else{
					pascal.push_back(temp[j-1] + temp[j]);
					}
				}//inner for
			temp = pascal;
			}//outer for
		return temp;
		}
};


int main(){
	int number;
	Solution ob;
	cout << "enter row-th number" << endl;
	cin >> number;
	vector <int> result;
	result = ob.getRow(number);
	
	for(int j = 0; j < result.size(); j++){
		cout << result[j] << " ";
		}
	return 0;
	}
