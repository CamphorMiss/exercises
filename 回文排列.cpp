class Solution {
public:
    bool canPermutePalindrome(string s) {
    //ֻҪ�ַ��ĸ�����ż������ֻ��һ������
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
