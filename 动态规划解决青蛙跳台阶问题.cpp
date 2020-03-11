class Solution {
public:
    int jumpFloor(int number) {//动态规划做法
        int dp[number+1];//跳上n级台阶有dp[n]种跳法
        for(int i=0;i<=number;i++)
        {
            if(i<=2) dp[i]=i;
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[number];
    }
};
