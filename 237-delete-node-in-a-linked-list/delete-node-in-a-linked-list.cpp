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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;   //4->1(n)->1->9
        ListNode* temp=node->next;     //4->1(n)->1(t)->9
        node->next = node->next->next;  //4->1->9
        delete(temp);
    
    }
};