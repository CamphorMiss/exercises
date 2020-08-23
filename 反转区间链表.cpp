/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param head ListNode类 the head
     * @param l int整型 left
     * @param r int整型 right
     * @return ListNode类
     */
    ListNode* reversePartLinkedlist(ListNode* head, int l, int r) {
        // write code here l-r   先反转l到r的这部分链表   再介入到原链表中  头结点可能更新
        ListNode* start=head;
        //反转  1.找到l的pre   r的next   之后需要链接
        int count=0;
        ListNode* lpre=NULL;
        ListNode* rnext=NULL;
        if(l<=0||r-l<=0)
            return 0;
        while(start!=NULL)
        {
            count++;
            if(count==l-1)  lpre=start;
            if(count==r+1)  rnext=start;
            start=start->next;
        }
        //2.反指
        ListNode* cur=lpre->next;
        ListNode* ret=lpre;
        ListNode* retnext=lpre->next;
        ListNode* curnext=NULL;
        while(cur!=rnext)
        {
            curnext=cur->next;
            cur->next=lpre;
            lpre=cur;
            cur=curnext;
        }//把反转之后的链表接入原链表中
        //头结点有无更换
        if(l!=1)//fei头结点开始反转
            ret->next=lpre;
        else
            head=lpre;
        retnext->next=rnext;
        return head;
    }
};
