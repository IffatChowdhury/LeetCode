/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
ListNode *temp;
        if (head == NULL)
			return NULL;
        temp = head;
        
        while(temp -> next != NULL){
			if (temp -> val == temp -> next -> val){
				if (temp -> next -> next != NULL)
					temp -> next = temp -> next -> next;
				else
					temp -> next = NULL;
				}
			else{
				temp = temp -> next;
				}
			}
		return head;
    }
};
