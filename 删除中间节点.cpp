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
       node->val=node->next->val;
       ListNode* ret=node->next;
       node->next=ret->next;
       delete ret;
    }
};
