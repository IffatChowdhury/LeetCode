#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &num) {
		int element;
		map <int, int> computation;
		for(int i = 0; i < num.size(); i++){
			computation[num[i]] += 1;
			if (computation[num[i]] > (num.size()/2) ){
				element = num[i];
				}
			}
		return element;
		}
};


int main(){
	Solution ob;
	int a[] = {2, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3};
	vector <int> array(a, a + 11);
	int result = ob.majorityElement(array);
	cout << result << endl;
	return 0;
	}
