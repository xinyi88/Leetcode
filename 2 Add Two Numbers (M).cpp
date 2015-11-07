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

ListNode* Reverse3(ListNode* head){
	    ListNode* current = head; 
        ListNode* result = NULL;
        ListNode* next = NULL;
        
        while(current  != NULL){
            next = current -> next;
            
            current -> next = result;
            result = current;
            
            current = next;
        
        }
        return result;
}

void Push(ListNode** headRef, int newData){
	ListNode* newNode = (ListNode*) malloc (sizeof(ListNode));
	newNode -> val = newData;
	newNode -> next = (*headRef);
	(*headRef) = newNode; 
	
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = NULL;
	 
	int sum = 0; 
	int high = 0;
	
 	while(l1 != NULL && l2 != NULL){
 			
		sum = l1 -> val + l2 -> val + high; // sum value
		
		if(sum >= 10) {
			sum = sum - 10;
			high = 1;
		}
		else{
			high = 0;
		}
		 
		
		Push(&head, sum);	
		l1 = l1 -> next;
		l2 = l2 -> next;
		
		
	}
		while(l1 != NULL){
			sum = l1 -> val + high;
			if(sum >= 10){
				sum = sum - 10;
				high = 1;
			}
			else{
				high = 0;
			}
				
			Push(&head, sum);
			l1 = l1 -> next;
			
		}
		while(l2 != NULL){
			sum = l2 -> val + high;
			if(sum >= 10){
				sum = sum - 10;
				high = 1;
			}
			else{
				high = 0;
			}		
		
			Push(&head, sum);
			l2 = l2 -> next;
			
		}
	if(high == 1){
		Push(&head, 1);
	}
	head = Reverse3(head);
	return head;
    }
};