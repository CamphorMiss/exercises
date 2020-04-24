class Solution {
public:
    string compressString(string S) {
     string str;
     for(int i=0,j=0;i<S.size();)
     {
         while(S[i]==S[j]){
                   j++;
         }
        str+=S[i]+to_string(j-i);
        i=j;
     }//for
     return str.size()>=S.size()?S:str;
    }
};
