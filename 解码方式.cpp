class Solution {
public:
    int numDecodings(string s) {
        //;
        vector<int>dp(s.size()+1,0);
        if(s[0]=='0')return 0;//首字符为0直接返回0
        dp[0]=1,dp[1]=1;
        for(int i=1,j=0;i<s.size();i++){
            j=(s[i-1]-'0')*10+s[i]-'0';
            if(s[i]>'0')dp[i+1]=dp[i];
            if(j>9&&j<=26)dp[i+1]+=dp[i-1];
            if(dp[i+1]==0)return 0;
        }
        return dp[s.size()];
    }
};
