/*Given a linked list, remove the nth node from the end of list and return its head.*/

#include <iostream>
#include <cmath>
using namespace std;
 
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
		ListNode *pointer, *helper;
		int count = 1;
		pointer = head; helper = head;
		
		for(int i = 0; i < n; i++){
			if (pointer -> next != NULL){
				pointer = pointer -> next;
				count++;
				}
			if (pointer == head)
				return NULL;
			}
	
			while (pointer -> next != NULL){
				pointer = pointer -> next;
				helper = helper -> next;
				count++;
				}
			if (n == count) {
				head = head -> next;
				return head;
				}
			if ( helper -> next -> next != NULL)
				helper -> next = helper -> next -> next;
			else
				helper -> next = NULL;
			return head;
			}
		
};


int main(){
	ListNode *result;
	Solution ob;
	int n = 0;
	ListNode *runner;
	ListNode *list;
	list = new ListNode(1);
	
	cin >> n;
	runner = list;
	
	runner -> next = new ListNode(2);
	runner = runner -> next;
	runner -> next = new ListNode(3);
	runner = runner->next;
	runner -> next = new ListNode(4);
	runner = runner -> next;
	runner -> next = new ListNode(5);
	runner = runner->next;
	runner -> next = new ListNode(6);
	runner = runner -> next;
	runner -> next = new ListNode(7);
	
	
	runner = list;
	while(runner -> next != NULL){
		cout << runner -> val << " ";
		runner = runner -> next;
		}
	cout << runner -> val << " ";
	
	result = ob.removeNthFromEnd(list, n);
	runner = result;
	cout << endl << endl;
	if (runner != NULL){
		while(runner -> next != NULL){
			cout << runner -> val << " ";
			runner = runner -> next;
			}
		cout << runner -> val << " ";
		}
	else
		cout << result << endl;
	return 0;
	}
