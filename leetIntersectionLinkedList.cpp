/*Write a program to find the node at which the intersection of two singly linked lists begins.


For example, the following two linked lists:

A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3
begin to intersect at node c1.


Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.*/


#include <iostream>
using namespace std;

//Definition for singly-linked list. 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *resultHead = NULL;
		int count1 = 1, count2 = 1, list = 0;
		ListNode *runner, *checkRunner;
		runner = headA;
		if (headA == NULL || headB == NULL)
			return resultHead;
		while(runner -> next != NULL){
			runner = runner -> next;
			count1++;
			}
		//cout << "count1 " << count1 << endl;
		runner = headB;
		while(runner -> next != NULL){
			runner = runner -> next;
			count2++;
			}
		//cout << "count2 " << count2 << endl;
		int counter = 0;
		if (count1 > count2){
			counter = count1 - count2;
			list = 1;
			}
		else if (count1 < count2){
			counter = count2 - count1;
			list = 2;
			}
		else list = 1;
		if (list == 1){
			runner = headA;
			checkRunner = headB;
			}
		else{
			runner = headB;
			checkRunner = headA;
			}
		int i = 0;
		while(i != counter){
			runner = runner -> next;
			i++;
			}
		
		while(runner -> next != NULL){
			if (runner -> val == checkRunner -> val)
				return runner;
			else{
				runner = runner -> next;
				checkRunner = checkRunner -> next;
				}
			}//while ends here
		
		if (runner -> val == checkRunner -> val)
			return runner;
		return resultHead;
    }
};

int main(){
	ListNode *intersect;
	Solution ob;
	ListNode *list1, *list2;
	ListNode *runner1, *runner2;
		
	list1 = new ListNode(7);
	runner1 = list1;
	runner1 -> next = new ListNode(6);
	runner1 = runner1 -> next;
	runner1 -> next = new ListNode(8);
	runner1 = runner1 -> next;
	runner1 -> next = new ListNode(9);
	runner1 = runner1 -> next;
	runner1 -> next = new ListNode(10);
	runner1 = runner1 -> next;
	runner1 -> next = new ListNode(11);
	runner1 = runner1 -> next;
	
	list2 = new ListNode(1);
	runner2 = list2;
	runner2 -> next = new ListNode(1);
	runner2 = runner2 -> next;
	runner2 -> next = new ListNode(2);
	runner2 = runner2 -> next;
	runner2 -> next = new ListNode(3);
	runner2 = runner2 -> next;
	runner2 -> next = new ListNode(4);
	runner2 = runner2 -> next;
	
	ListNode *newElement;
	newElement = new ListNode(300);
	runner1 -> next = newElement;
	runner1 = runner1 -> next;
	runner2 -> next = newElement;
	runner2 = runner2 -> next;
	/*newElement = new ListNode(3);
	runner1 -> next = newElement;
	runner1 = runner1 -> next;
	runner2 -> next = newElement;
	runner2 = runner2 -> next;
	newElement = new ListNode(6);
	runner1 -> next = newElement;
	runner1 = runner1 -> next;
	runner2 -> next = newElement;
	runner2 = runner2 -> next;*/
	
	/*ListNode *runner;
	runner = list1;
	while(runner -> next != NULL){
		cout << runner -> val << " ";
		runner = runner -> next;
		}
	cout << runner -> val << endl;
	
	runner = list2;
	while(runner -> next != NULL){
		cout << runner -> val << " ";
		runner = runner -> next;
		}
	cout << runner -> val << endl;*/
	
	intersect = ob.getIntersectionNode(list1, list2);
	if (intersect != NULL)
		cout << intersect -> val << endl;
	return 0;
	}
