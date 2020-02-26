class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {//左右根  左边比跟小 右边比根大
        if(sequence.size()==0)return false;
        int key=sequence[sequence.size()-1];
        int pos=0;
        while(pos<sequence.size()&&sequence[pos]<key)pos++;
        while(pos<sequence.size()&&sequence[pos]>key)pos++;
        return (pos+1==sequence.size())?true:false;
    }
};
