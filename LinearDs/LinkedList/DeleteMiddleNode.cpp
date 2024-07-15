
class Solution {

public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL || head->next==NULL){

            return NULL;
        }
        
        ListNode* prevSlow = NULL;
  
        ListNode* fast = head;

        ListNode* slow = head;

        while(fast!=NULL && fast->next!=NULL){

            prevSlow = slow;

            slow = slow->next;

            fast = fast->next->next;
        }

        prevSlow->next  = slow->next;

        delete(slow);

        return head;


        
    }
};