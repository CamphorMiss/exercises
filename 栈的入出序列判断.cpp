class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int>s;
        int pos=0;
        for(int i=0;i<pushV.size();i++)
        {
                s.push(pushV[i]);
            while(pos<popV.size()&&s.top()==popV[pos])
            {
                    s.pop();
                    pos++;
            }
        }
        return (pos==popV.size()&&s.empty())?true:false;
    }
};
