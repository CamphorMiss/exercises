class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {//���Ҹ�  ��߱ȸ�С �ұ߱ȸ���
        if(sequence.size()==0)return false;
        int key=sequence[sequence.size()-1];
        int pos=0;
        while(pos<sequence.size()&&sequence[pos]<key)pos++;
        while(pos<sequence.size()&&sequence[pos]>key)pos++;
        return (pos+1==sequence.size())?true:false;
    }
};
