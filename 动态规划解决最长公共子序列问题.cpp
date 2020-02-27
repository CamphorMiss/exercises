class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        //��̬�滮���
        vector<vector<int>>res(text1.length()+1,vector<int>(text2.length()+1,0));
        for(int i=1;i<=text1.length();i++)
        {
            for(int j=1;j<=text2.length();j++)
            {
              if(text1[i-1]==text2[j-1]) res[i][j]=res[i-1][j-1]+1;
              else res[i][j]=max(res[i-1][j],res[i][j-1]);
            }
        }
        return res[text1.length()][text2.length()];
    }
};
