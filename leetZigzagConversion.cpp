/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".*/

#include <iostream>
#include <list>
#include <string>
using namespace std;


class Solution {
public:
    string convert(string s, int nRows) {
		string zigzag;
		char array[nRows][1000];
		int i, j;
		for(i = 0; i < nRows; i++){
			for (j = 0; j < 1000; j++)
				array[i][j] = '\0';
			}//initialize array
		int row = 0, column = 0, k;
		for(k = 0; k < s.size(); ){
			if (nRows == 1){
				zigzag = s;
				k++;
				}
			else if(row == 0 ){
				for(int m = 0; m < nRows; m++){
					//cout << s[k] << " " << k << endl;
					array[row][column] = s[k];
					row++;
					k++;
					if ( k == s.size() )
						break;
					}
				row = row - 2;
				column++;
				}//if row is zero
			else{
				//cout << s[k] << " " << k << endl;
				array[row][column] = s[k];
				row--;
				column++;
				k++;
				}
			}
		int count = 0;
		if (nRows != 1){
			for(i = 0; i < nRows; i++){
				//cout << endl;
				for(j = 0; j < 1000; j++){
					if(array[i][j] != '\0'){
						//cout << array[i][j] << " " << endl;
						zigzag = zigzag + array[i][j];
						count++;
						}
					if (count == s.size())
						break;
					}
				}
			}
		return zigzag;
    }
};


int main(){
	string input;
	Solution ob;
	int noOfRows;
	cout << "enter string" << endl;
	cin >> input;
	cout << "enter number of rows" << endl;
	cin >> noOfRows;
	string result = ob.convert(input, noOfRows);
	cout << "result   " << result << endl;
	return 0;
	}
