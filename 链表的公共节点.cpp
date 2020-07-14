/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        int count1=0,count2=0,count=0;
        ListNode* node1=pHead1;
        ListNode* node2=pHead2;
        while(node1!=NULL){
            node1=node1->next;
            count1++;
        }
        while(node2!=NULL){
            node2=node2->next;
            count2++;
        }
        count=count1-count2;
        if(count<0)
            while(count--)
                pHead2=pHead2->next;
        if(count>0)
            while(count--)
                pHead1=pHead1->next;
        while(pHead1!=NULL&&pHead2!=NULL&&pHead1!=pHead2){
            pHead1=pHead1->next;
            pHead2=pHead2->next;
        }
        if(pHead1==pHead2)
            return pHead1;
        return NULL;
    }
};
