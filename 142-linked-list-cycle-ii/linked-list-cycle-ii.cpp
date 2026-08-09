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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
         ListNode* fast=head;
         bool hascycle=false;
         while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                hascycle=true;
                break;
            }
         }
            if(hascycle==false) {
                return NULL;   //nocycle found
            }

            fast=head;
            while(fast!=slow) //meeting point will give the pos where cycle exists
            {
                fast=fast->next;
                slow=slow->next;
            }
        return slow;
    }
};