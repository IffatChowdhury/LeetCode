/*Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 13.37*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


class Solution {
public:
    int compareVersion(string version1, string version2) {
		string sub1, sub2;
		vector<int> v1;
		vector<int> v2;
		int i, j;
		for(i = 0; i < version1.size(); i++){
			if(version1[i] == '.'){
				v1.push_back(atoi(sub1.c_str()));
				sub1.clear(); 
				}
			else if (i == version1.size() - 1){
				sub1 = sub1 + version1[i];
				v1.push_back(atoi(sub1.c_str()));
				}
			else				
				sub1 = sub1 + version1[i];
			}
			
		for(j = 0; j < version2.size(); j++){
			if(version2[j] == '.'){
				v2.push_back(atoi(sub2.c_str()));
				sub2.clear(); 
				}
			else if (j == version2.size() - 1){
				sub2 = sub2 + version2[j];
				v2.push_back(atoi(sub2.c_str()));
				}
			else				
				sub2 = sub2 + version2[j];
			}
		int index = 0;
		//cout << "size1 " << v1.size() << " size2 " << v2.size() << endl;
			
		while(true){
			//cout << v1[index] << " " << v2[index] << endl;
			if (v1[index] > v2[index])
				return 1;
			else if(v1[index] < v2[index])
				return -1;
			else{
				if ( (index + 1 == v1.size()) || (index + 1 == v2.size()) ){
					if ( v1.size() > v2.size() && v1[v1.size()-1] == 0)
						return 0;
					else if ( v1.size() < v2.size() && v2[v2.size()-1] == 0)
						return 0;
					else if(v1.size() > v2.size())
						return 1;
					else if (v1.size() < v2.size())
						return -1;
					else{
						return 0;
						}
					}
				else index++;
				}
			}
   }
};

int main(){
	
	string s1, s2;
	Solution ob;
	cin >> s1;
	cin >> s2;
	int result = ob.compareVersion(s1, s2);
	cout << result << endl;
	
	return 0;
	}
