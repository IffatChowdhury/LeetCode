/*There are N gas stations along a circular route, where the amount of gas at station i is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). 
You begin the journey with an empty tank at one of the gas stations.

Return the starting gas station's index if you can travel around the circuit once, otherwise return -1.

Note:
The solution is guaranteed to be unique.*/

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
