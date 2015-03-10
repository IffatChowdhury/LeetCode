#include <iostream>
#include <string>
#include <sstream>
using namespace std;



class Solution {
    
public:
    string countAndSay(int n) {
        string previous_seq = "1";
        string new_sequence = "1";
        int count = 1;
        for(int i = 1; i < n; i++){
			new_sequence = "";
			for(int j = 0; j < previous_seq.length(); j++){
				if(previous_seq[j] == previous_seq[j + 1]){
					count++;
					}
				else{
					std::stringstream ss; 
					ss << count;
					new_sequence += ss.str();
					new_sequence += previous_seq[j];
					count = 1;
					}
				}//end for
			
			previous_seq = new_sequence;
			
			}//end for
		
        return new_sequence;
    }
};


int main(){
	
	string result;
	int n;
	Solution ob;
	cout << "Enter n" << endl;
	cin >> n;
	result = ob.countAndSay(n);
	cout << result << endl; 
	return 0;
	}


