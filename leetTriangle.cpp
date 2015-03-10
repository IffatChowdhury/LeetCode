#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int result = 0, i, j;
        for(i = 1; i < triangle.size(); i++){
			for(j = 0; j < triangle[i].size(); j++){
				if (j == 0){
					triangle[i][j] = triangle[i][j] + triangle[i - 1][j];
					}
				else if (j == (triangle[i].size() -1) ){
					triangle[i][j] = triangle[i][j] + triangle[i - 1][j - 1];
					}
				else{
					if( (triangle[i][j] + triangle[i-1][j]) < (triangle[i][j] + triangle[i-1][j-1]) )
						triangle[i][j] = triangle[i][j] + triangle[i-1][j];
					else
						triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
					}
				}//inner for
			}//outer for
		
		/*for(i = 0; i < triangle.size(); i++){
			cout << endl;
			for(j = 0; j < triangle[i].size(); j++){
				cout << triangle[i][j] << " " ;
				}
			}
		cout << endl;	*/
		result = triangle[triangle.size()-1][0];
		for(j = 1; j < triangle[triangle.size()-1].size(); j++){
			if (triangle[triangle.size()-1][j] < result)
				result = triangle[triangle.size()-1][j];
			}	
		return result;
    }
};

int main(){
	int result;
	vector< vector<int> > array;
	vector <int> row;
	row.push_back(2);
	array.push_back(row);
	row.clear();
	
	row.push_back(3);
	row.push_back(4);
	array.push_back(row);
	row.clear();
	
	row.push_back(6);
	row.push_back(5);
	row.push_back(7);
	array.push_back(row);
	row.clear();
	
	row.push_back(4);
	row.push_back(1);
	row.push_back(8);
	row.push_back(3);
	array.push_back(row);
	row.clear();
		
	Solution ob;
	result = ob.minimumTotal(array);
	cout << "result " << result << endl;
	return 0;
	}
