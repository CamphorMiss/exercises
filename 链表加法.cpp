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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      //暴力法：直接加+进位
      ListNode * head=new ListNode(0);
      ListNode * cur=head;
      int num1,num2,ret=0;
      while(l1||l2)
      {
          num1=l1?l1->val:0;
          num2=l2?l2->val:0;
          head->next=new ListNode (0);
          head->next->val=(num1+num2+ret)%10;
          ret=(num1+num2+ret)/10;
          head=head->next;
          l1=l1?l1->next:NULL;
          l2=l2?l2->next:NULL;
      }
      if(ret!=0)
      head->next=new ListNode(ret);
      return cur->next;
    }
};
