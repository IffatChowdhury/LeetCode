#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector <vector <int> > generate(int numRows) {
		vector <vector <int> > pascal;
		vector <int> temp;
		for(int i = 0; i < numRows; i++){
			temp.clear();
			for(int j = 0; j < (i + 1); j++){
				if(j == 0 || j == i){
					temp.push_back(1);
					}
				else{
					temp.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
					}
				}
			pascal.push_back(temp);
			}
		return pascal;    
		}
};


int main(){
	int number;
	Solution ob;
	cout << "enter row number" << endl;
	cin >> number;
	vector <vector <int> > result;
	result = ob.generate(number);
	for(int i = 0; i < number; i++){
		for(int j = 0; j < result[i].size(); j++){
			cout << result[i][j] << " ";
			}
		cout << endl;
		}
	return 0;
	}
