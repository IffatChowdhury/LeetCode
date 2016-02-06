/*
Given a pattern and a string str, find if str follows the same pattern.
*/

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector <string> stringArray;
	string temp = "";
	for(int i = 0; i < (int) str.length(); i++){
		if (str[i] == ' '){
			stringArray.push_back(temp);
			temp = "";
		}
		else 
			temp += str[i];			
	}
	stringArray.push_back(temp);
	if ( (int) pattern.length() != (int) stringArray.size())
		return false;
	for(int j = 0; j < (int) pattern.length(); j++){
		for(int k = 0; k < (int) pattern.length(); k++){
			if ( (pattern[j] == pattern[k]) != (stringArray[j] == stringArray[k]) )
				return false;
		}
	}
	return true;
    }
};
