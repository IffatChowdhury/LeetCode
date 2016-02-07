/*
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.
*/

class Solution {
public:
    vector<int> spiralOrder(vector <vector <int> >& matrix){
		vector<int> result;
		if (matrix.size() == 0)
			return vector<int>();
		//cout << matrix.size() << endl;
		//cout << matrix[0].size() << endl;
        int forwardRow = 0;
        int downColumn = matrix[0].size() - 1;
        int backwardRow = matrix.size() - 1;
        //int downColumn = -1;
        //int backwardRow = -1;
        int upColumn = 0;
        
		
        int i, j, k, l;
        while( (forwardRow <= backwardRow) && (upColumn <= downColumn)){
			//cout << endl << "forwardRow" << forwardRow << endl;
			for(i = upColumn; i <= downColumn; i++){
				cout << matrix[forwardRow][i] << " ";
				result.push_back(matrix[forwardRow][i]);
				}
			forwardRow++;
			//cout << endl << "downColumn" << downColumn << endl;
			for(j = forwardRow; j <= backwardRow; j++){
				cout << matrix[j][downColumn] << " ";
				result.push_back(matrix[j][downColumn]);
				}
			downColumn--;
			//cout << endl << "backwardRow" << backwardRow << endl;
			if (forwardRow <= backwardRow){
				for(k = downColumn; k >= upColumn; k--){
					cout << matrix[backwardRow][k] << " ";
					result.push_back(matrix[backwardRow][k]);
					}
				backwardRow--;
				}
			//cout << endl << "upColumn" << upColumn << endl;
			if (upColumn <= downColumn){
				for(l = backwardRow; l >= forwardRow; l--){
					cout << matrix[l][upColumn] << " ";
					result.push_back(matrix[l][upColumn]);
					}
				upColumn++;
				}
			}
        
		return result; 
    }
};
