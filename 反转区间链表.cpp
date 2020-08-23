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
     * @param head ListNode�� the head
     * @param l int���� left
     * @param r int���� right
     * @return ListNode��
     */
    ListNode* reversePartLinkedlist(ListNode* head, int l, int r) {
        // write code here l-r   �ȷ�תl��r���ⲿ������   �ٽ��뵽ԭ������  ͷ�����ܸ���
        ListNode* start=head;
        //��ת  1.�ҵ�l��pre   r��next   ֮����Ҫ����
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
        //2.��ָ
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
        }//�ѷ�ת֮����������ԭ������
        //ͷ������޸���
        if(l!=1)//feiͷ��㿪ʼ��ת
            ret->next=lpre;
        else
            head=lpre;
        retnext->next=rnext;
        return head;
    }
};
