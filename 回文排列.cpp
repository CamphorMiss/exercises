class Solution {
public:
    bool canPermutePalindrome(string s) {
    //只要字符的个数是偶数或这只有一个奇数
   map<char,int>m;
   for(int i=0;i<s.size();i++)
   {
       m[s[i]]++;
   }
   int count=0;
   for(auto a:m)
     {
         if(a.second%2==1)
         count++;
     }
     return count<=1;
  }
};
