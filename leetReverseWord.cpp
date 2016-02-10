/*
Given an input string, reverse the string word by word.

For example,
Given s = "the sky is blue",
return "blue is sky the".
*/

class Solution {
public:
    void reverseWords(string &s) {
        vector <string> stringStack;
        string result = "", temp = "";
        int top = -1;
        if (s.size() == 0)
			return;
        
        for(int i = 0; i < (int) s.size(); i++){
			if (s[i] == ' '){
				if (temp.size() != 0){
					stringStack.push_back(temp);
					//cout << "temp " << temp << endl;
					top++;
					temp = "";
					}
				}
			else
				temp += s[i];
			}
		if (temp != " " && temp.size() != 0){
			stringStack.push_back(temp);
			top++;
			}
		//cout << "temp " << temp << endl;
		while(top > 0){
			result = result + stringStack[top--] + " ";
			}
		if (top == 0)
		    result += stringStack[top--];
		s = result;

    }
};
