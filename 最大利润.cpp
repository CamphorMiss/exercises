class Solution {
public:
    int maxProfit(vector<int>& prices) {//dp[i]表示的是截止i天的最大利润
          if(prices.size()==0) return 0;
          int dp[prices.size()+1]={0};
          int min_num=prices[0],max_money=0;
      for(int i=0;i<prices.size();i++)
      {
          min_num=min_num>prices[i]?prices[i]:min_num;
          dp[i]=prices[i]-min_num;
          max_money=max(max_money,dp[i]);
      }
      return max_money;
    }
};
