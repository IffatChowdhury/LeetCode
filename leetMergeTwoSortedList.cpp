/*Merge two sorted linked lists and return it as a new list. The new list 
 * should be made by splicing together the nodes of the first two lists.*/

#include <iostream>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		
		if (!l1 && !l2) return NULL;
		else if (!l1) return l2;
		else if (!l2) return l1;
		else{
			ListNode *pointer1, *pointer2, *head, *newRunner;
			int flag = 0;
			pointer1 = l1; pointer2 = l2;
			if (pointer1 -> val <= pointer2 -> val){
				head = pointer1;
				if (pointer1 -> next != NULL)
					pointer1 = pointer1 -> next;		
				else{
					head -> next = pointer2;
					flag = 1;
					}
				}
			else{
				head = pointer2;
				if (pointer2 -> next != NULL)
					pointer2 = pointer2 -> next;
				else{
					head -> next = pointer1;
					flag = 1;
					}
				}
			newRunner = head;
			if (flag == 0){
				while (true){
					if (pointer1 -> val <= pointer2 -> val){
						newRunner -> next = pointer1;
						newRunner = newRunner -> next;
						if (pointer1 -> next == NULL){
							newRunner -> next = pointer2;
							break;
							}
						else
							pointer1 = pointer1 -> next;
						}	
					else if (pointer1 -> val > pointer2 -> val){
						newRunner -> next = pointer2;
						newRunner = newRunner -> next;
						if (pointer2 -> next == NULL){
							newRunner -> next = pointer1;
							break;
						}
						else
							pointer2 = pointer2 -> next;
						}
					}//while ends here
				}//flag == 0
			return head;
			}
	    }
};


int main(){
	ListNode *result;
	Solution ob;
	
	ListNode *list1;
	//list1 = new ListNode(3);
	ListNode *runner;
	//runner = list1;
	
	/*runner->next = new ListNode(4);
	runner = runner->next;
	runner->next = new ListNode(9);
	runner = runner->next;*/
	
	ListNode *list2;
	/*list2 = new ListNode(1);
	
	runner = list2;
	
	runner -> next = new ListNode(2);
	runner = runner -> next;
	runner->next = new ListNode(4);
	runner = runner->next;
	runner -> next = new ListNode(5);
	runner = runner -> next;
	runner->next = new ListNode(6);
	runner = runner->next;
	runner -> next = new ListNode(7);
	runner = runner -> next;
	runner->next = new ListNode(8);
	runner = runner->next;
	/*runner -> next = new ListNode(10);
	runner = runner -> next;
	runner->next = new ListNode(11);
	runner = runner->next;
	runner->next = new ListNode(12);
	runner = runner->next;*/
	
	if (!list2)
		cout << "2 empty" << endl;
	if (!list1)
		cout << "1 empty" << endl;
	
	/*if (!list1)
	;
	else
	runner = list1;
	cout << endl << endl;
		if(!runner)
		;
		else{
		while(runner -> next != NULL){
			cout << runner -> val << " ";
			runner = runner -> next;
			}
		cout << runner -> val << " ";
	}
	if (!list2)
	;
	else
	runner = list2;
	cout << endl << endl;
		if(!runner)
		;
		else{
		while(runner -> next != NULL){
			cout << runner -> val << " ";
			runner = runner -> next;
			}
		cout << runner -> val << " ";
	}*/
	
	
	result = ob.mergeTwoLists(list1, list2);
	cout << endl << endl;
	if (result != NULL){
		runner = result;
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
