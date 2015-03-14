/*Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.*/



#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
using namespace std;



class MinStack {
stack<int> dataStack;
stack<int> minStack;
public:
    void push(int x){
		if(minStack.empty()){
			dataStack.push(x);
			minStack.push(x);
			return;
			}
		dataStack.push(x);
		if (minStack.top() >= x){
			minStack.push(x);
			}
		return;
		}

    void pop(){
		if (!dataStack.empty()){
			if (minStack.top() == dataStack.top()){
				minStack.pop();
				}
			dataStack.pop();
			}
			return;
		}

    int top(){
		return dataStack.top();
		}

    int getMin(){
        return minStack.top();
		}
};

int main(){
	int operation, element, result;
	MinStack ob;
	while(true){
		cout << "enter operation number" << endl;
		cin >> operation;
		if (operation == 1){
			cout << "enter element" << endl;
			cin >> element;
			ob.push(element);
			}
		else if (operation == 2)
			ob.pop();
		else if (operation == 3){
			result = ob.top();
			cout << "top :" << result << endl;
			}
		else if (operation == 4){
			result = ob.getMin();
			cout << "min :" << result << endl;
			}
		else
			break;
		}
	
	return 0;
	}
