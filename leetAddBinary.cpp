/*
Given two binary strings, return their sum (also a binary string).
*/


class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        size_t sizeA = a.size();
        size_t sizeB = b.size();
        size_t size = a.size();
       
        if (sizeA > sizeB){
			while(b.length() < sizeA)
				b = "0" + b;
			size = sizeA;
			}
        else if (sizeB > sizeA){
			while(a.length() < sizeB)
				a = "0" + a;
			size = sizeB;
			}
        else ;
      
        for(int i = size - 1; i >= 0; i--){
			if (carry == 0){
				if (a[i] == '0' && b[i] == '0'){
					result = "0" + result;
					carry = 0;
					}
				else if (a[i] == '1' && b[i] == '1'){
					result = "0" + result;
					carry = 1;
					}
				else{
					result = "1" + result;
					carry = 0;
					}	
				}// if carry == 0
        
			else{
				if (a[i] == '0' && b[i] == '0'){
					result = "1" + result;
					carry = 0;
					}
				else if (a[i] == '1' && b[i] == '1'){
					result = "1" + result;
					carry = 1;
					}
				else{
					result = "0" + result;
					carry = 1;
					}	
				}//if carry == 1
			}// for
		if (carry == 1)
			result = "1" + result;
			
		return result;
		}
	};
