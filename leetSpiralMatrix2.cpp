/*
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.
*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int column = n;
		int row = n;

		vector< vector<int> > result;
		result.resize(column, vector<int>(row, 0));
		if (n == 0)
			return vector <vector<int> >();
		int forwardRow = 0;
        int downColumn = n - 1;
        int backwardRow = n - 1;
        int upColumn = 0;
        
		
        int i, j, k, l;
        for(int index = 1; index <= n * n; ){
			//cout << endl << "forwardRow" << forwardRow << endl;
			for(i = upColumn; i <= downColumn; i++){
				result[forwardRow][i] = index++;
				cout << result[forwardRow][i] << " ";
				}
			forwardRow++;
			//cout << endl << "downColumn" << downColumn << endl;
			for(j = forwardRow; j <= backwardRow; j++){
				result[j][downColumn] = index++;
				cout << result[j][downColumn] << " ";
				}
			downColumn--;
			//cout << endl << "backwardRow" << backwardRow << endl;
			if (forwardRow <= backwardRow){
				for(k = downColumn; k >= upColumn; k--){
					result[backwardRow][k] = index++;
					cout << result[backwardRow][k] << " ";
					}
				backwardRow--;
				}
			//cout << endl << "upColumn" << upColumn << endl;
			if (upColumn <= downColumn){
				for(l = backwardRow; l >= forwardRow; l--){
					result[l][upColumn] = index++;
					cout << result[l][upColumn] << " ";
					}
				upColumn++;
				}
			}
        
		return result;
    }
};
