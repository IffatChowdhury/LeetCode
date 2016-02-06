/*
Implement the following operations of a stack using queues.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
empty() -- Return whether the stack is empty.
*/

class Stack {
public:
    // Push element x onto stack.
    int front2 = 0, front1 = 0;
    int rear2 = 0, rear1 = 0;
    int Q1[50];
    int Q2[50];
    void push(int x) {
        Q1[rear1++] = x;
    }

    // Removes the element on top of the stack.
    void pop() {
        while(rear1 - front1 != 1){
			Q2[rear2++] = Q1[front1++];
			}
		front1++;
		while(front2 != rear2){
			Q1[rear1++] = Q2[front2++];
			}
		return;
    }

    // Get the top element.
    int top() {
        while(rear1 - front1 != 1){
			Q2[rear2++] = Q1[front1++];
			}
		int result = Q1[front1];
		Q2[rear2++] = Q1[front1++];
		while(front2 != rear2){
			Q1[rear1++] = Q2[front2++];
			}
		return result;
    }

    // Return whether the stack is empty.
    bool empty() {
        if (rear1 == front1)
			return true;
		else
			return false;
    }
};


