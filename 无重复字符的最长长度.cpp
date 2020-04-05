class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int left=0,max_count=0;
        unordered_set<char> u;
        for(int i=0;i<s.length();i++)
        {
            while(u.find(s[i])!=u.end())//ур╣╫ак
            {
                u.erase(s[left]);
                left++;
            }
             max_count=max(max_count,(i-left+1));
             u.insert(s[i]);
        }//for  
        return max_count;    
    }//hanshu
};
