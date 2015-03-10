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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode * resultHead;
		unsigned long long int number1 = 0, number2 = 0, exponent = 0, sum;
		ListNode *runner;
		runner = l1;
       
		while( runner -> next != NULL){
			number1 = number1 + runner -> val * pow(10, exponent); 
			runner = runner -> next;
			exponent++;
			}
		number1 = number1 + runner -> val * pow(10, exponent);
		//cout << "number1 " << number1 << endl;
       
		exponent = 0;
		runner = l2;
		while( runner -> next != NULL){
			number2 = number2 + runner -> val * pow(10, exponent); 
			runner = runner -> next;
			exponent++;
			}
		number2 = number2 + runner -> val * pow(10, exponent);
		//cout << "number2 " << number2 << endl;
       
		sum = number1 + number2;
		//cout << "summation " << sum << endl;
		resultHead = new ListNode(sum % 10);
		sum = sum / 10;
		runner = resultHead;
		while(sum != 0){
			runner -> next = new ListNode(sum % 10);
			runner = runner -> next;
			sum = sum / 10;
			}
		return resultHead;
    }
};

int main(){
	ListNode *result;
	Solution ob;
	
	ListNode *list1;
	list1 = new ListNode(9);
	ListNode *runner;
	/*runner = list1;
	
	runner->next = new ListNode(4);
	runner = runner->next;
	runner->next = new ListNode(3);
	runner = runner->next;*/
	
	ListNode *list2;
	list2 = new ListNode(1);
	
	runner = list2;
	
	runner -> next = new ListNode(9);
	runner = runner -> next;
	runner->next = new ListNode(9);
	runner = runner->next;
	runner -> next = new ListNode(9);
	runner = runner -> next;
	runner->next = new ListNode(9);
	runner = runner->next;
	runner -> next = new ListNode(9);
	runner = runner -> next;
	runner->next = new ListNode(9);
	runner = runner->next;
	runner -> next = new ListNode(9);
	runner = runner -> next;
	runner->next = new ListNode(9);
	runner = runner->next;
	runner->next = new ListNode(9);
	runner = runner->next;
	
	result = ob.addTwoNumbers(list1, list2);
	runner = result;
	cout << endl << endl;
	while(runner -> next != NULL){
		cout << runner -> val << " ";
		runner = runner -> next;
		}
	cout << runner -> val << " ";
	return 0;
	}
