class Solution {
public:
    int jumpFloor(int number) {//��̬�滮����
        int dp[number+1];//����n��̨����dp[n]������
        for(int i=0;i<=number;i++)
        {
            if(i<=2) dp[i]=i;
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[number];
    }
};
