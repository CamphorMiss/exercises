class Solution {//两种方法 
public:
    bool CheckPermutation(string s1, string s2) {
     if(s1.size()!=s2.size()) return false;
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     for(int i=0;i<s1.size();i++)
     {
         if(s1[i]!=s2[i])
         return false;
     }
     return true;
    }
};
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        unordered_map<char,int> um;
        for(auto a:s1)
        um[a]++;
        for(auto b:s2)
        {
            if(um[b]==0) return false;
            um[b]--;
        }
        for(auto c:um)
        {
            if(c.second) return false;
        }
        return true;
    }
};
