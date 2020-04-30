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
    ListNode* partition(ListNode* head, int x) {
      ListNode* nodeTmp=NULL;        
        ListNode* pIndex=head;
        while(pIndex!=NULL){
            if(pIndex->val>=x ){
                if(nodeTmp==NULL){
                    nodeTmp=pIndex;
                }
                
            }
            else{
                if(nodeTmp!=NULL){
                    int tmp=nodeTmp->val;
                    nodeTmp->val=pIndex->val;
                    pIndex->val=tmp;

                    nodeTmp=nodeTmp->next;
                }
            }
            pIndex=pIndex->next;
        }
        return head;
    }
};
