#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
		int totalGas = 0, totalCost = 0;
		int savedIndex = 0, i;
		for(i = 0; i < (int) gas.size(); i++){
			totalGas += gas[i];
			totalCost += cost[i];
			}//check each gas station
		if(totalGas < totalCost)
			return -1;
	
			totalGas = 0;
			for(i = 0; i < (int) gas.size(); i++){
				totalGas += gas[i] - cost[i];
				if (totalGas < 0){
					totalGas = 0;
					savedIndex = i + 1;
					}
				}//check each gas station
		
			return savedIndex;
	}
};

int main(){
	vector<int> gas;
	vector<int> cost;
	
	gas.push_back(5);
	
	/*gas.push_back(1);
	gas.push_back(2);
	gas.push_back(3);
	gas.push_back(3);*/
	
	/*gas.push_back(2);
	gas.push_back(4);*/
	
	/*gas.push_back(1);
	gas.push_back(2);*/
	
	/*gas.push_back(1);
	gas.push_back(2);
	gas.push_back(3);
	gas.push_back(4);
	gas.push_back(5);*/
		
	/*gas.push_back(2);
	gas.push_back(3);
	gas.push_back(1);*/
	
	/*gas.push_back(6);
	gas.push_back(1);
	gas.push_back(4);
	gas.push_back(3);
	gas.push_back(5);*/
	
	cost.push_back(4);
	
	/*cost.push_back(2);
	cost.push_back(1);
	cost.push_back(5);
	cost.push_back(1);*/
	
	/*cost.push_back(3);
	cost.push_back(4);*/

	/*cost.push_back(2);
	cost.push_back(1);*/
	
	/*cost.push_back(3);
	cost.push_back(4);
	cost.push_back(5);
	cost.push_back(1);
	cost.push_back(2);*/
	
	/*cost.push_back(3);
	cost.push_back(1);
	cost.push_back(2);*/
	
	/*cost.push_back(3);
	cost.push_back(8);
	cost.push_back(2);
	cost.push_back(4);
	cost.push_back(2);*/

	Solution ob;
	int result = ob.canCompleteCircuit(gas, cost);
	cout << "result " << result << endl;

	return 0;
}
