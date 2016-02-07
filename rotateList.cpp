/*
Given a list, rotate the list to the right by k places, where k is non-negative.
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
    ListNode* rotateRight(ListNode* head, int k) {
		int count = 0;
		if (head == NULL)
			return NULL;
		if (k == 0)
		    return head;
		ListNode *temp;
		temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
			count++;
			}
		count++;
		if (count == 1)
		    return head;
		k = k % count;
		int traverse = count - k;
		
		if (k == 0)
		    return head;
		int index = 1;
		temp = head;
		while(index < traverse ){
			index++;
			temp = temp -> next;
			}
		ListNode *newHead;
		newHead = temp -> next;
		temp -> next = NULL;
		temp = newHead;
		index++;
		while(index < count){
			index++;
			temp = temp -> next;
			}
		temp -> next = head;
		return newHead;
    }
};
