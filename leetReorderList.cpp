/*
Given a singly linked list L: L0→L1→…→Ln-1→Ln,
reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…

You must do this in-place without altering the nodes' values.
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
    void reorderList(ListNode* head) {
        vector <int> nodeStack;
        int top = -1;
        int count = 1;
        //cout << "count " << count << endl;
        if (head == NULL)
			return;
        ListNode *temp;
        temp = head;
        while(temp -> next != NULL){
			count++;
			nodeStack.push_back(temp -> val);
			top++;
			//cout << count << endl;
			temp = temp -> next;
			}
		
		int oriCount = count;
		if ( !(oriCount > 2) )
			return;
		nodeStack.push_back(temp -> val);
		top++;
		temp = head;
		count /= 2;
		ListNode *forInsert;
		while(count){
			count--;
			forInsert = new ListNode(nodeStack[top--]);
			if (count != 0)
				forInsert -> next = temp -> next;
			else 
				forInsert -> next = NULL;
			temp -> next = forInsert;
			if (forInsert -> next != NULL)
				temp = temp -> next -> next;
			}
		if (oriCount%2 != 0){
			ListNode *lastNode = new ListNode(nodeStack[top--]);
			forInsert -> next = lastNode;
			}
		return;

    }
};
