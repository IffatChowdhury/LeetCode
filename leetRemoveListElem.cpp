/*
Remove all elements from a linked list of integers that have value val.
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp, *track;
		if (head == NULL)
		    return NULL;
		while(head -> val == val){
		    if (head -> next != NULL)
			    head = head -> next;
			 else
			    return NULL;
			}
		
		temp = head;
		if (head -> next != NULL)
			track = temp -> next;
		while(temp -> next != NULL){
			if (track -> val == val){
				if (track -> next == NULL)
					temp -> next = NULL;
				else{
					track = track -> next;
					temp -> next = track;
					}
				}
			else{
				temp = temp -> next;
				track = track -> next;
				}
			}
		return head;
    }
};
